#include<stdio.h>
#include<stdlib.h>
main(void){
	
	int nb,cpt=0,i;
	
	printf("Taper un nombre :");
	scanf("%d",&nb);
	
	for(i=1;i<=nb;i++){
		if(nb%i==0)
			cpt++;
		}
		
	if(cpt==2){
		printf("ce nombre est premier ");
	}else 
	
	printf("ce nombre  nest pas premier");
	 system("PAUSE");
}
