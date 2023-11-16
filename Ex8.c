#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,nb;
	
	printf("Taper un nombre :");
	scanf("%d",&nb);
	for(i=nb;i>0;i--){
		for(j=i;j>0;j--){
			printf("%d",j);
			
		}
		printf("\n");
	}
	return 0;
	 system("PAUSE");
}
