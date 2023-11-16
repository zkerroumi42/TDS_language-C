#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N,cmp,S=0,min,Sp=0,MinP;
	printf("Donner un entier : ");
	scanf("%d",&N);
	min=N;
	MinP=999;
	if(N==999) return 0;
	while(N!=999){
		cmp++;
		S=S+N;
		if(N<min)min=N;
		if(N>0)Sp=Sp+N;
		if(N>0 && N<MinP)MinP=N;
		printf("Donner un entier : ");
		scanf("%d",&N);	
	}
	printf("le nombre total de valeurs de la suite : %d \n",cmp);
	printf("la somme des valeurs lues : %d \n",S);
	printf("le minimum : %d\n",min);
	printf("la somme des valeurs strictement positives : %d \n",Sp);
	printf("le minimum des valeurs strictement positives : %d\n",MinP);
	
	return 0;
	 system("PAUSE");
}
