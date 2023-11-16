#include<stdio.h>
#include<stdlib.h>


main(void){
	
	int nb;
	float fact;
	printf("taper votre nombre de photocopy :");
	scanf("%d",&nb);
	
	if(nb<=10){
		fact=nb*1;
	}else if(nb<=20){
		fact=10*1+(nb-10)*0.6; 
	}else if (nb<=30) 
		fact=(10*1)+((nb-10)*0.6);
			
	else
			fact=(10*1)+(20*0.6)+((nb-30)*0.4);
			 
printf("%f",fact);	
 system("PAUSE");		     
		
}
