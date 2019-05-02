%{
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Quad.h"
FILE* yyin;
int yylex();
typedef int bool;

char tmp[20],tmp2[20],tmp3[20],tmp5[20],tmp4[20],tmp6[20],tmp7[20],tmp8[20],tmp9[20],tmp10[20];
int t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
int sauv_cond=0,sauv_inst=0,sauv_fin;
extern int t; // Compteur des états temporaires
int l=1,n=0; // Compteurs pour les bounds
int op_count=0; // Compteur du nombre d'operandes pour chaque operation
enum { false, true };
	extern int found(char nom[]);
	extern void insert(char nom[], char code[],int nbrl,int nbrc,int taille, char type[]);
	extern void show();
	extern int retournerVal(char nom[]);
	extern void insereValTab(char nom[],int i, int val);
	extern void inserePos(char nom[]);
	extern int retournerValTab(char nom[],int i);
	extern int Init (char nom[]);
	extern int retournerConst (char nom[]);
	extern int InitTab (char nom[],int i);
	extern initialiserTab();
	extern void insertConst(char nom[]);
extern void insereTaille(char nom[], int taille);
extern int doubleDeclaration (char nom[]);
extern void insereType(char nom[],char type[]);
extern void yyerror(char *s);
int prems=0;
char sauvOper[20] ;
char sauvType[20];
char SauvTypeExpress[20];
char SauvTypeProd[20];
char SauvTypeTerm[20];
 char    sauvIDF[20];
bool sauvCond;
int sauvExp,sauvProd,sauvTerm;
//extern Pile *initialiser();
int dixit=0; // Compteur du nombre d'accolades qui se sont ouvertes.
int dixit_if=0;
int dixit_while=0;

int nbr_if=0;
int nbr_while=0;
int addr_if[200],addr_while[200]; // addresses au fur et à mesure de chacune de ces accolades.
int i=0;
int j;
int nbrligne;
int nbrcolonne;
%}


%union {
int entier;
float reel;
char* str;
char car;
   }
%token mc_Algo mc_Deb mc_If mc_Execut mc_while mc_CONST bibl_tab bibl_boucle bibl_calcul SEP '{' '}' <str>mc_INT <str>mc_REAL <str>IDF OPREL AFF PLUS SUST MULT DIV '(' ')' ';' '[' ']' '+' '-' <entier>CONST_ENT <reel>CONST_REAL <str>String

%%

Programme:BIBL mc_Algo IDF  DEC '{' INST_Plus '}' {printf("\n***********************************Programme syntaxiquement correct*********************************\n");YYACCEPT;}
;
BIBL:                       bibl_tab BIBL
                           |bibl_boucle BIBL
                           |bibl_calcul BIBL
	                       |
;
IDF_Plus: IDF SEP IDF_Plus {
                          if ( doubleDeclaration($1)==1){insereType($1,sauvType);insereTaille($1,1);}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d\n", $1, nbrligne);}}
          |IDF {
		                  if ( doubleDeclaration($1)==1){insereType($1,sauvType);insereTaille($1,1);}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d\n", $1, nbrligne);}}

;
DEC_Simp:TYPE IDF_Plus ';'
;
DEC_Const:TYPE mc_CONST Const_Plus ';'
;
Const_Plus: IDF AFF CONST_ENT SEP Const_Plus{
		                  if ( doubleDeclaration($1)==1){if(strcmp(sauvType,"Integer")==0){insereVal($1,$3);insertConst($1);insereType($1,sauvType);insereTaille($1,1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
            |IDF AFF CONST_REAL SEP Const_Plus{
		                  if ( doubleDeclaration($1)==1){if(strcmp(sauvType,"Real")==0){insereVal($1,$3);insertConst($1);insereType($1,sauvType);insereTaille($1,1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
            | IDF AFF CONST_ENT {
		                  if ( doubleDeclaration($1)==1){if(strcmp(sauvType,"Integer")==0){insereVal($1,$3);insertConst($1);insereType($1,sauvType);insereTaille($1,1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s,a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s,a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
			| IDF AFF CONST_REAL{
		                  if ( doubleDeclaration($1)==1){if(strcmp(sauvType,"Real")==0){insereVal($1,$3);insertConst($1);insereType($1,sauvType);insereTaille($1,1);}else{printf("\nErreur Sémantique: Incompatibilite de type de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
                          else {printf("\nErreur Sémantique: double declation de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}}
;
IDF_Plus_Tab:IDF '[' CONST_ENT ']' SEP IDF_Plus_Tab
                 {
                 if(found("#TAB")==-1){printf("\nErreur Semantique: la bibliotheque #TAB est manquante , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}else{
			   if($3>50){printf("\nErreur Semantique: la bibliotheque taille de tableau depasse lespace attribue , a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}else{
			     if($3 <=0){printf("\nErreur Semantique: taille de %s est negative ou nulle , a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}
				 else{ insereTaille($1,$3);inserePos($1);}
			    if ( doubleDeclaration($1)==1){insereType($1,sauvType);sprintf(tmp10,"L%d",l);sprintf(tmp9,"%d",$3);quadr("BOUNDS",tmp10,tmp9,"");quadr("ADEC",$1,"","");
                         } else {printf("\nErreur Semantique: double declation de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}
						 }}}
          | IDF '[' CONST_ENT ']'
		  {
               if(found("#TAB")==-1){printf("\nErreur Semantique: la bibliotheque #TAB est manquante ,a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}else{
			   if($3>50){printf("\nErreur Semantique: la bibliotheque taille de tableau depasse lespace attribue , a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}else{
			     if($3 <=0){printf("\nErreur Semantique: taille de %s est negative ou nulle , a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}
				 else{ insereTaille($1,$3);inserePos($1);}
			    if ( doubleDeclaration($1)==1){insereType($1,sauvType);insereType($1,sauvType);sprintf(tmp10,"L%d",l);sprintf(tmp9,"%d",$3);quadr("BOUNDS",tmp10,tmp9,"");quadr("ADEC",$1,"","");
                         } else {printf("\nErreur Semantique: double declation de %s, a la ligne %d colonne %d\n", $1, nbrligne,nbrcolonne);}
						 }}}
;
DEC_Tab: TYPE IDF_Plus_Tab ';'
;

DEC: DEC_Simp DEC
     | DEC_Tab DEC
	 | DEC_Const
	 |
;
// ------------------- Boucle ------------------
INST_Boucle:  mc_while'(' C COND_WHILE ')'
             '{'
             INST_Plus
             '}'
			 D
            { if(found("#BOUCLE")==-1){printf("\nErreur Semantique: la bibliotheque Tab est manquante , a la ligne %d colonne %d\n",  nbrligne,nbrcolonne);}
				}
;
C: {addr_while[dixit_while]=taille+1;dixit_while++;}
;
D:{sprintf(tmp,"Quadr N°%d",taille+2);ajour_quad(addr_while[dixit_while-1],2,tmp);sprintf(tmp,"Quadr N°%d",addr_while[dixit_while-1]);dixit_while--;quadr("BR",tmp,"","");}
;
COND_WHILE:IDF OPREL IDF   {if(strcmp($2,"==")==0){strcpy(tmp,"BNE");}if (strcmp($2,"<")==0) strcpy(tmp,"BGE");if (strcmp($2,">")==0) strcpy(tmp,"BLE");if (strcmp($2,"<=")==0) strcpy(tmp,"BG");if (strcmp($2,">=")==0) strcpy(tmp,"BL");if (strcmp($2,"!=")==0) strcpy(tmp,"BE"); quadr(tmp,"JUMP",$1,$2);}
      | IDF OPREL CONST_ENT {if(strcmp($2,"==")==0){strcpy(tmp,"BNE");}if (strcmp($2,"<")==0) strcpy(tmp,"BGE");if (strcmp($2,">")==0) strcpy(tmp,"BLE");if (strcmp($2,"<=")==0) strcpy(tmp,"BG");if (strcmp($2,">=")==0) strcpy(tmp,"BL");if (strcmp($2,"!=")==0) strcpy(tmp,"BE"); sprintf(tmp7,"%d",$3);quadr(tmp,"JUMP",$1,tmp7);}
	  | IDF OPREL CONST_REAL {if(strcmp($2,"==")==0){strcpy(tmp,"BNE");}if (strcmp($2,"<")==0) strcpy(tmp,"BGE");if (strcmp($2,">")==0) strcpy(tmp,"BLE");if (strcmp($2,"<=")==0) strcpy(tmp,"BG");if (strcmp($2,">=")==0) strcpy(tmp,"BL");if (strcmp($2,"!=")==0) strcpy(tmp,"BE");sprintf(tmp7,"%f",$3);quadr(tmp,"JUMP",$1,tmp7);}
;
// ------------------- Condition ------------------
INST_Cond: mc_Execut A
           INST_Plus
		   mc_If '(' COND_IF ')' B
;
A: {quadr("BR","","","");addr_if[dixit_if]=taille+1;dixit_if++;}
;
B:{sprintf(tmp8,"Quadr N°%d",addr_if[dixit_if-1]);ajour_quad(taille,2,tmp8);sprintf(tmp8,"Quadr N°%d",taille);ajour_quad(addr_if[dixit_if-1]-1,2,tmp8);dixit_if--;}
;
COND_IF: IDF OPREL IDF   {if(strcmp($2,"==")==0){strcpy(tmp,"BE");}if (strcmp($2,"<")==0) strcpy(tmp,"BL");if (strcmp($2,">")==0) strcpy(tmp,"BG");if (strcmp($2,"<=")==0) strcpy(tmp,"BLE");if (strcmp($2,">=")==0) strcpy(tmp,"BGE");if (strcmp($2,"!=")==0) strcpy(tmp,"BNE");sprintf(tmp9,"Quadr N°%d",taille+3);quadr("BR",tmp9,"",""); ;quadr(tmp,"JUMP",$1,$2);}
      | IDF OPREL CONST_ENT {if(strcmp($2,"==")==0){strcpy(tmp,"BE");}if (strcmp($2,"<")==0) strcpy(tmp,"BL");if (strcmp($2,">")==0) strcpy(tmp,"BG");if (strcmp($2,"<=")==0) strcpy(tmp,"BLE");if (strcmp($2,">=")==0) strcpy(tmp,"BGE");if (strcmp($2,"!=")==0) strcpy(tmp,"BNE"); sprintf(tmp9,"Quadr N°%d",taille+3);quadr("BR",tmp9,"","");sprintf(tmp7,"%d",$3);quadr(tmp,"JUMP",$1,tmp7);}
	  | IDF OPREL CONST_REAL {if(strcmp($2,"==")==0){strcpy(tmp,"BE");}if (strcmp($2,"<")==0) strcpy(tmp,"BL");if (strcmp($2,">")==0) strcpy(tmp,"BG");if (strcmp($2,"<=")==0) strcpy(tmp,"BLE");if (strcmp($2,">=")==0) strcpy(tmp,"BGE");if (strcmp($2,"!=")==0) strcpy(tmp,"BNE");sprintf(tmp9,"Quadr N°%d",taille+3);quadr("BR",tmp9,"","");sprintf(tmp7,"%f",$3);quadr(tmp,"JUMP",$1,tmp7);}
;


// ------------------- Instruction ------------------
INST: EPIC INST_Aff
     | INST_Cond
	 | INST_Boucle
;
INST_Plus: INST INST_Plus
          |INST
;
INST_Aff:
         IDF AFF expres ';' 
		 {if(doubleDeclaration($1)==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",$1, nbrligne,nbrcolonne );}
		 else{if(retounerConst($1)==1){printf("\nErreur Semantique: la constante %s ne peut etre reinitialise , a la ligne %d colonne %d\n",$1, nbrligne,nbrcolonne );}
		 else{if(strcmp(retournerType($1),SauvTypeExpress)!=0){printf("\nErreur Semantique: incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		 else{insereVal($1,sauvExp);quadr(":=",tmp3,"",$1);}}}}
		 |IDF '[' CONST_ENT ']' AFF expres ';' 
		 {if(doubleDeclaration($1)==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",$1, nbrligne,nbrcolonne );}
		 else{if(retournerTaille($1)<$3){printf("\nErreur Semantique: taille de %s < %d , a la ligne %d colonne %d\n",$1,$3, nbrligne,nbrcolonne );}
		 else{if(strcmp(retournerType($1),SauvTypeExpress)!=0){printf("\nErreur Semantique: incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		 else{insereValTab($1,$3,sauvExp);sprintf(tmp10,"%s[%d]",$1,$3);quadr(":=",tmp3,"",tmp10);}}}}
;
EPIC: {op_count=taille+1;}
;
expres:  prod { sauvExp = sauvProd;strcpy(tmp4,tmp2);strcpy(SauvTypeExpress,SauvTypeProd);}	
		| expres chte
		 PLUS prod {
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{ if (strcmp(SauvTypeExpress,SauvTypeProd)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{t++; sprintf(tmp3,"T%d",t);quadr("+",tmp5,tmp2,tmp3);sauvProd = sauvProd / sauvTerm; strcpy(tmp2,tmp3); sauvExp = sauvExp + sauvProd;strcpy(tmp2,tmp3);}}}
		| expres chte SUST prod		{
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante ,a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{ if(strcmp(SauvTypeExpress,SauvTypeProd)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{t++; sprintf(tmp3,"T%d",t);quadr("-",tmp5,tmp2,tmp3);sauvProd = sauvProd / sauvTerm; strcpy(tmp2,tmp3);  sauvExp = sauvExp - sauvProd;strcpy(tmp2,tmp3);}}}
		
		
		
	chte:{strcpy(tmp4,tmp);strcpy(tmp5,tmp3);}
	;
prod:	 term { sauvProd = sauvTerm; strcpy(tmp2,tmp); strcpy(tmp3,tmp);strcpy(SauvTypeProd,SauvTypeTerm);}
        
		|  prod MULT term  {
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{if(strcmp(SauvTypeProd,SauvTypeTerm)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{t++;sprintf(tmp3,"T%d",t);quadr("*",tmp2,tmp,tmp3);  sauvProd = sauvProd * sauvTerm;strcpy(tmp2,tmp3);}}}
		
		|  prod DIV term {
		if(found("#Calcul")==-1){printf("\nErreur Semantique: la bibliotheque #Calcul est manquante , a la ligne %d colonne %d\n",  nbrligne,nbrcolonne);}
		else{if(strcmp(SauvTypeProd,SauvTypeTerm)!=0){printf("\nErreur Semantique: Incompatibilite de type , a la ligne %d colonne %d\n", nbrligne,nbrcolonne );}
		else{if(sauvTerm==0){printf("\nErreur Semantique: Division par 0 , a la ligne %d colonne %d\n",  nbrligne,nbrcolonne);}
		else{t++; sprintf(tmp3,"T%d",t);quadr("/",tmp2,tmp,tmp3);sauvProd = sauvProd / sauvTerm; strcpy(tmp2,tmp3);}}}}


;
term:	
        | PLUS term
;		
		| SUST term {sauvTerm=-1*sauvTerm; sprintf(tmp,"%d",sauvTerm);}
;	 
      |IDF {if(doubleDeclaration($1)==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",$1, nbrligne,nbrcolonne );}
		 else{if(Init($1)==0){printf("\nErreur Semantique: %s n'est pas initialise , a la ligne %d colonne %d\n",$1, nbrligne,nbrcolonne );}
		 else{strcpy(SauvTypeTerm,retournerType($1)); sauvTerm=retournerVal($1);sprintf(tmp,"%s",$1);}}}
      |CONST_ENT {strcpy(SauvTypeTerm,"Integer");sauvTerm=$1;sprintf(tmp,"%d",$1);}
	  |CONST_REAL {strcpy(SauvTypeTerm,"Real");sauvTerm=$1;sprintf(tmp,"%f",$1);}
	  |IDF '[' CONST_ENT ']' {if(doubleDeclaration($1)==1){printf("\nErreur Semantique: %s n'est pas declare , a la ligne %d colonne %d\n",$1, nbrligne,nbrcolonne );}
		 else{if(retournerTaille($1)<$3){printf("\nErreur Semantique: taille de %s < %d , a la ligne %d colonne %d\n",$1,$3, nbrligne,nbrcolonne );}
		 else{if(InitTab($1,$3)!=1){printf("\nErreur Semantique: %s[%d] n'est pas initialise , a la ligne %d colonne %d\n",$1,$3, nbrligne,nbrcolonne );}
		 else{strcpy(SauvTypeTerm,retournerType($1));sauvTerm=retournerValTab($1,$3);sprintf(tmp,"%s[%d]",$1,$3);}}}}
	  
	  
  
;

TYPE:mc_INT     {strcpy(sauvType,$1);}
    |mc_REAL    {strcpy(sauvType,$1);}
;


%%


int main()
{

 yyin = fopen("entree.txt", "r");
 yyparse();
 show();
/*
	quadr("A1","B1","C1","D1");
		quadr("A2","B2","C2","D2");
			quadr("A3","B3","C3","D3");
				quadr("A4","B4","C4","D4");
				ajour_quad(2,2,"CHANGED SUCCESSFULLY");*/

 afficherQuadruplets(&pileQuads);
 optimisation();

}

yywrap()
{}
