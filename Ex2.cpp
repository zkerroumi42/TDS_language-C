#include<stdio.h>
#include<stdlib.h>


main(void){
	int age ;
	char genre;
	
	
	printf("Taper votre genre (H OU F) :");
	scanf("%c",&genre);
	printf("donner votre age :");
	scanf("%d",&age);

	if((genre == 'H' && age>20)||(genre == 'F' && 18<age>35)  ){
		printf("habitant est imposable ");
	}else  
	    printf("habitant est non imposable");
	 system("PAUSE");
}
