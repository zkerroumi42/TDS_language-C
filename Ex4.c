#include<stdio.h>
#include<stdlib.h>
  main(void){
  	
  	
  	float prixinit,remise,prixfinal;
  	
  	printf("taper votre prix initial :");
  	scanf("%f",&prixinit);
  	
  	if(prixinit<100){
  		
  	remise=prixinit*0.3;
  	prixfinal=prixinit-remise;
  	
	  }else if(100<=prixinit <=200){
	  	
	  	remise=prixinit*0.4;
  	    prixfinal=prixinit-remise;
  	
	  }else{ 
	  	remise=prixinit*0.5;
  	    prixfinal=prixinit-remise;
	  }
	  printf("Remise:%f \n Prix final:%f",remise,prixfinal);
	   system("PAUSE");
  }
