#include<stdio.h>
#include<stdlib.h>

   main(void){
   	int taille,i,j;
   	printf("donner une talle :");
   	scanf("%d",&taille);
   	for(i=taille;i>0;i--){
   		for(j=i;j>=1;j--){
   			printf("%d",j);
		   }
		   printf("\n");
	   }
   	
   }
