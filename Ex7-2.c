
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nb,cpten=0,cptenp=0;
	
	do{
		printf("Taper un nombre :");
		scanf("%d",&nb);
	
		if(nb%2==0){
			printf("%d\n",nb*nb);
			cptenp++;
		}
			cpten++;
	}while(nb!=100);
	printf("nombre total entrer:%d\n nombre total entrer pair :%d",cpten,cptenp);
	getch();
	return 0;
}
