/*
#ifndef NULL

   #ifdef __cplusplus

      #define NULL 0

   #else

      #define NULL ((void *)0)

   #endif

#endif
*/
#include "Syntaxe.tab.h"
typedef struct qdr{
    char oper[100];
    char op1[100];
    char op2[100];
    char res[100];
  }qdr;

typedef struct Element Element;
struct Element
{
    qdr quad;
    Element *suivant;
};
int t=0;
typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};
	Pile pileQuads;


Pile *initialiser()
{
    Pile *pile = malloc(sizeof(*pile));
    pile->premier = NULL;
}

int taille=0;

void empiler(Pile *pile, qdr nvQdr)
{
        Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(0);
    }
    nouveau->quad = nvQdr;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}


qdr depiler(Pile *pile)
{
    if (pile == NULL)
    {
        exit(0);
    }
    qdr quadro;
    Element *elementDepile = pile->premier;
    if (pile != NULL && pile->premier != NULL)
    {
        quadro = elementDepile->quad;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }
    return quadro;
}


int afficherQuad(qdr Q)
{
 printf(" ( %s  ,  %s  ,  %s  ,  %s )",Q.oper,Q.op1,Q.op2,Q.res);
 printf("\n--------------------------------------------------------\n");
 return 0;
}

void afficherQuadruplets(Pile *pile)
{
    if (pile == NULL)
    {
        exit(0);
    }
    Element *actuel = pile->premier;
    
    printf("\n*********************Les Quadruplets***********************\n");
	int i=1;
    while (actuel != NULL && i<=taille)
    {
        printf("%d - ",taille-i);
        afficherQuad(actuel->quad);
        actuel = actuel->suivant;
        i=i+1;
    }
    printf("\n");
}

void quadr(char opr[],char op1[],char op2[],char res[])
{
   qdr q;
	strcpy(q.oper,opr);
	strcpy(q.op1,op1);
	strcpy(q.op2,op2);
	strcpy(q.res,res);
    empiler(&pileQuads,q);
    taille=taille+1;
}

void epic_quadr(int num,char opr[],char op1[],char op2[],char res[])
{
    if(num==taille+1){quadr(opr,op1,op2,res);return;}

       qdr q1;
	strcpy(q1.oper,opr);
	strcpy(q1.op1,op1);
	strcpy(q1.op2,op2);
	strcpy(q1.res,res);

      int i=0;
  Pile *p;
  Element *e;
    qdr q;
      char t[20],t2[20];
  while(i!=(taille-num+1))
  {
    q=depiler(&pileQuads);
    strcpy(t,q1.op2);strcpy(q1.op2,q.op1);strcpy(q.op1,t);strcpy(t,q.res);strcpy(q.res,q1.res);strcpy(q1.res,t);
    empiler(&p,q);
    i=i+1;
  }


  /* if (colon_quad==1) strcpy(q.oper,val);
    else if (colon_quad==2) strcpy(q.op1,val);
    else if (colon_quad==3) strcpy(q.op2,val);
    else if (colon_quad==4) strcpy(q.res,val);
    */


    empiler(&pileQuads,q1);

    qdr tmp=q1;
    taille=taille+1;
    i=0;
    while(i!=(taille-num-1))
      {
    q=depiler(&p);
/*            strcpy(t,tmp.op2);
    strcpy(tmp.op2,q.op1);
        strcpy(q.op1,t);
        strcpy(t,tmp.res);
    strcpy(tmp.res,q.res);
        strcpy(tmp.res,t);*/
        tmp=q;
    empiler(&pileQuads,q);
    i++;
      }
          q=depiler(&p);
          strcpy(q.op1,tmp.res);
              empiler(&pileQuads,q);
}



void ajour_quad(int num_quad, int colon_quad, char val [])
{
  int i=0;
  Pile *p;
  Element *e;
    qdr q;
  while(i!=(taille-num_quad))
  {
    q=depiler(&pileQuads);
    empiler(&p,q);
    i=i+1;
  }
   q=depiler(&pileQuads);
    if (colon_quad==1) strcpy(q.oper,val);
    else if (colon_quad==2) strcpy(q.op1,val);
    else if (colon_quad==3) strcpy(q.op2,val);
    else if (colon_quad==4) strcpy(q.res,val);
    empiler(&p,q);
    i=0;
    while(i<(taille-num_quad+1))
      {
    q=depiler(&p);
    empiler(&pileQuads,q);
    i++;
      }
}


// ============================================================================
// ================================ OPTIMISATION ==============================
// ============================================================================


char optimises[1000][100];
int nbr_optimises=0;
int recherche_si_optimise(char c [])
{
  int i=0;
  for(i=0;i<nbr_optimises;i++)
  {
    if(strcmp(c,optimises[i])==0){return 1;}
  }
  return 0;
}
void ajout_optimises(char c [])
{
  strcpy(optimises[nbr_optimises],c);
  nbr_optimises++;
}
int verif_const(char entr [], int n)
{
	 int i=0;

  if(entr[i]=='\0'){return 1;}
  //printf("verf_1\n");
  //printf("\nRETOURNER CONST : %d\n",retounerConst(entr));
  if(retounerConst(entr)==1){return 0;}
 //printf("verf_2\n");
  
  while(i<n && entr[i]!='\0')
  {
    if(entr[i]!=',' && entr[i]!='0' && entr[i]!='1' && entr[i]!='2' && entr[i]!='3' && entr[i]!='4' && entr[i]!='5' && entr[i]!='6' && entr[i]!='7' && entr[i]!='8' && entr[i]!='9')
    {
      return 1;
    }
    i++;
  }
 // printf("\t CONSTANTE : %s\n",entr);
  
  return 0;
}

int verif_temporaire(char entr [], int n)
{
  int i=0;
  if(entr[i]!='T'){return 0;}
  else{i++;}
  while(i<n && entr[i]!='\0')
  {
    if(entr[i]=='0' || entr[i]=='1' || entr[i]=='2' || entr[i]=='3' || entr[i]=='4' || entr[i]=='5' || entr[i]=='6' || entr[i]=='7' || entr[i]=='8' || entr[i]=='9')
    {
i++;
    }
    else{return 0;}

  }
//  printf("\t TEMPORAIRE : %s \n",entr);
  return 1;
}

int propagation_copie()
{
  int value=0;
  printf("Propagation de copie\n");
  int i=0;
  Pile *p;
  Element *e;
  char tmp[100],tr[100];
    qdr q;
    int test=0;
  while(i!=taille)
  {
    q=depiler(&pileQuads);
    empiler(&p,q);
    i=i+1;
  }

    i=0;
    int test2=0;
    while(i<(taille) && test==0)
      {

    q=depiler(&p);
    if(recherche_si_optimise(q.res)==0 && strcmp(q.oper,":=")==0 && strcmp(q.op1,"")!=0 && strcmp(q.op2,"")==0)
    {
strcpy(tmp,q.op1);test=1;strcpy(tr,q.res);/*printf("TMP : %s TR : %s \n",tmp,tr);*/ajout_optimises(q.res);
    }
    empiler(&pileQuads,q);
    i++;
      }
      while(i<(taille))
        {

      q=depiler(&p);
      if(strcmp(q.res,tr)==0){test2=1;printf("Re-usage.\n");}
      if(test2==0){
      if(strcmp(q.op1,tr)==0) {strcpy(q.op1,tmp);/*printf("To replace\n");*/value=1;}
        if(strcmp(q.op2,tr)==0) {strcpy(q.op2,tmp);/*printf("To replace\n");*/value=1;}
        }
      empiler(&pileQuads,q);
      i++;
        }
      return value;
}



int propagation_expressions()
{
  int value=0;
    printf("Propagation d'expression\n");
    int i=0;
    Pile *p;
    Element *e;
    char tmp[100],tr[100];
      qdr q;
      int test=0;
    while(i!=taille)
    {
      q=depiler(&pileQuads);
      empiler(&p,q);
      i=i+1;
    }

      i=0;
      int test2=0;
      while(i<(taille) && test==0)
        {

      q=depiler(&p);
      if(recherche_si_optimise(q.op1)==0 && strcmp(q.oper,":=")==0 && strcmp(q.op1,"")!=0 && verif_temporaire(q.op1,100)==1 && strcmp(q.op2,"")==0)
      {
   strcpy(tmp,q.op1);test=1;strcpy(tr,q.res);/*printf("TEMPORAIRE AFFECTE tmp:%s | tr:%s\n",tmp,tr);*/ajout_optimises(q.op1);
      }
      empiler(&pileQuads,q);
      i++;
        }
        while(i<(taille))
          {
        q=depiler(&p);
        if(strcmp(q.res,tr)==0){test2=1;}
        if(test2==0){
        if(strcmp(q.op1,tr)==0 && strcmp(q.op1,tmp)!=0) {strcpy(q.op1,tmp);afficherQuad(q);/*printf("FOUND q.op1:%s | tr:%s\n",q.op1,tr);*/value=1;}
          if(strcmp(q.op2,tr)==0 && strcmp(q.op2,tmp)!=0) {strcpy(q.op2,tmp);afficherQuad(q);/*printf("FOUND q.op2:%s | tr:%s\n",q.op2,tr);*/value=1;}
          }
        empiler(&pileQuads,q);
        i++;
          }
  return value;
}


int opt_const()
{
	Element *actuel = pileQuads.premier;
	int value=0;
	char tmp[100],tmp2[100];
	while(actuel!=NULL){
		//printf("1");
		sprintf(tmp,"%d",retournerVal(actuel->quad.op1));
		sprintf(tmp2,"%d",retournerVal(actuel->quad.op2));
 if(retounerConst(actuel->quad.op1)==1){strcpy(actuel->quad.op1,tmp);value=1;}
 if(retounerConst(actuel->quad.op2)==1){strcpy(actuel->quad.op2,tmp2);value=1;}
 actuel=actuel->suivant;
	}
	return value;
}


void remplacer(char T1 [],char T2[])
{
 // printf("\n Remplacer %s par %s \n",T1,T2);
   Element *actuel = pileQuads.premier;
  int i=0;
  while (actuel != NULL)
  {
      if(strcmp(actuel->quad.op1, T1)==0){strcpy(actuel->quad.op1, T2);}
      if(strcmp(actuel->quad.op2, T1)==0){strcpy(actuel->quad.op2, T2);}
      actuel = actuel->suivant;
      i=i+1;
  }
}

int recuperer_qdr(char t [])
{
  char a[100];
  int i;
  size_t len=strlen(t);
  char d;
  i=9;
  int j;
  strncpy(a, t + i, len-i+1);
  int b;
  b=atoi(a);
  return b;
}

void supprimer_qdr(int n)
{
  Element *actuel = pileQuads.premier;
  char tmp[100];
  sprintf(tmp,"Quadr N°%d",1200);
  int i=0;
  int b=0;
  while (actuel != NULL && i<taille-n-1)
  {
      if(strstr(actuel->quad.op1, "Qua") != NULL)
      {
        b=recuperer_qdr(actuel->quad.op1);
    //    printf("%s NUMERO : %d\t",actuel->quad.op1,b);
        if(b>n){sprintf(tmp,"Quadr N°%d",b-1);strcpy(actuel->quad.op1,tmp);}
        if(b<n){sprintf(tmp,"Quadr N°%d",b-1);strcpy(actuel->quad.op1,tmp);}
      }

      actuel = actuel->suivant;
      i=i+1;
  }
  printf("\n");
        if(strstr(actuel->quad.op1, "Qua") != NULL)
      {
        b=recuperer_qdr(actuel->quad.op1);
      //  printf("%s NUMERO : %d\t",actuel->quad.op1,b);
        if(b>n){sprintf(tmp,"Quadr N°%d",b-1);strcpy(actuel->quad.op1,tmp);}
        if(b<n){sprintf(tmp,"Quadr N°%d",b-1);strcpy(actuel->quad.op1,tmp);}
      }

  actuel->suivant=actuel->suivant->suivant;
  actuel=actuel->suivant;
  
  while (actuel != NULL)
  {
      if(strstr(actuel->quad.op1, "Qua") != NULL)
      {
        b=recuperer_qdr(actuel->quad.op1);
       // printf("%s NUMERO : %d\t",actuel->quad.op1,b);
        if(b>n){sprintf(tmp,"Quadr N°%d",b-1);strcpy(actuel->quad.op1,tmp);}
       
      }
      actuel = actuel->suivant;
      i=i+1;
  }
  taille--;
}

int elimination_expressions_redondantes()
{
    Element *actuel = pileQuads.premier;
    Element *temp;
    int i=0;
    printf("Elimination d'expressions redondantes \n");
    int test=0;
    qdr q;
    int value=0;
   while (actuel != NULL)
  {
	 // printf("LA\n");
      if((verif_const(actuel->quad.op1,100)==0 || verif_temporaire(actuel->quad.op1,100)==1) && (verif_const(actuel->quad.op2,100)==0 || verif_temporaire(actuel->quad.op2,100)==1))
      {
       // printf("Entré : \n");
        test=0;
        temp=pileQuads.premier;
        while(temp!=NULL && test!=i)
        {
        //  printf("\nLet's go \n");
         // printf("\n\ntemp->quad.op1:%s\nactuel->quad.op1:%s\ntemp->quad.op2:%s\nactuel->quad.op2:%s\n",temp->quad.op1,actuel->quad.op1,temp->quad.op2,actuel->quad.op2);
            if(strcmp(temp->quad.op1,actuel->quad.op1)==0 && strcmp(temp->quad.op2,actuel->quad.op2)==0 && strcmp(temp->quad.res,actuel->quad.res)!=0)
            {
              remplacer(temp->quad.res,actuel->quad.res);
              supprimer_qdr(taille-test);
              value=1;
            }
            test=test+1;
            temp=temp->suivant;
        }
      }
      actuel = actuel->suivant;
      i=i+1;
  }
    return value;
}


int optimisation_expressions_repetes()
{
   Element *actuel = pileQuads.premier;
  int value=0;
  int i=1,j=1;
  int test=0;
  while (actuel != NULL)
  {
	  Element *actuel2 = actuel->suivant;
	 Element *actuel3;
	  test=1;j=i+1;
	  if(strcmp(actuel->quad.oper,"+")==0 || strcmp(actuel->quad.oper,"-")==0 || strcmp(actuel->quad.oper,"/")==0 || strcmp(actuel->quad.oper,"*")==0)test=0;
		while (actuel2 != NULL && test==0)
		{
	
      if(strcmp(actuel2->quad.res, actuel->quad.op1)==0 || strcmp(actuel2->quad.res, actuel->quad.op2)==0){test=1;}
      else if(strcmp(actuel->quad.op1, actuel2->quad.op1)==0 && strcmp(actuel->quad.op2, actuel2->quad.op2)==0 ){value=1;remplacer(actuel->quad.res,actuel2->quad.res);supprimer_qdr(taille-i+2);} 
      j++;
	  actuel3=actuel2;
	  actuel2 = actuel2->suivant;    
		}
		actuel=actuel->suivant;
		      i=i+1;
  }

	return value;
}





int elimination_expressions_inutiles()
{
    printf("Elimination d'expression inutiles\n");
  char affectes[1000][100];
  int affectes_indices[1000];
  int nbr_affectes=0;
  Element *actuel = pileQuads.premier;
  int i=0;
  while (actuel != NULL)
  {
      if(strcmp(actuel->quad.oper,":=")==0){strcpy(affectes[nbr_affectes],actuel->quad.res);affectes_indices[nbr_affectes]=i;nbr_affectes++;}
      actuel = actuel->suivant;
      i=i+1;
  }
  int j;
  while (actuel != NULL)
  {
      for(j=0;j<nbr_affectes;j++){if(strcmp(affectes[j],actuel->quad.op1)==0 || strcmp(affectes[j],actuel->quad.op2)==0){printf("Used : %s\n",affectes[j]);strcpy(affectes[j],'\0');}}
      actuel = actuel->suivant;
      i=i+1;
  }
 //     printf(" Non utilises : %d \n",nbr_affectes);
  for(j=0;j<nbr_affectes;j++){
    if(1==1)
    {
   //   printf(": %s\n",affectes[j]);
    }
  }

  return 0;
}


void optimisation()
{
  int test=1;
  printf("/ Optimisation en cours \\ \n");
  while(test!=0) test=opt_const()+propagation_copie()+propagation_expressions()+elimination_expressions_inutiles()+elimination_expressions_redondantes()+optimisation_expressions_repetes();
  afficherQuadruplets(&pileQuads);
  
}
