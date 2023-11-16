#include<stdio.h>
#include<stdlib.h>
main(void){
	
	int nb,i;
	
	printf("Taper un nombre :");
	scanf("%d",&nb);
	
	if(nb%2 != 0){
		return 1;
	}else
	
	for(i=nb;i>1;i--){
		
		if(i % 2 == 0){
			printf("\n %d",i);
			
		}
		
	}
	 system("PAUSE");
}
