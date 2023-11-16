#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n=0,choix;
	
	do{
	 printf("la valeur de l'entier : %d\n",n);	
	 printf("---Menu---\n\n");
     printf("1.Ajouter 2\n");
     printf("2.Multuplier par 3\n");
     printf("3.Soustraire 5\n");
     printf("4.Quiter");
     printf("\n taper Votre choix svp :");
     scanf("%d", &choix);
     
	switch(choix){
		 case 1:
              n=n+2 ;
              break;
         case 2:
              n=n*3;
              break;
         case 3:
              n=n-5 ;
              break;   
	}	
	}while(choix!= 4);
	
	return 0;
	 system("PAUSE");
}
