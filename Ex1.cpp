#include<stdio.h>

 main(){
    char repeter = 'o',op=' ';
    int a,b;
  do{
    	printf("donner un nombre : ");
    	scanf("%d",&a);
    	printf("donner un autre nombre : ");
    	scanf("%d",&b);
    	printf("Operation (+,-,*,/) = ");
    	scanf("%s",&op);
    	if(op == '+'){
    		printf("%d + %d = %d",a,b,a+b);
		}
		else if(op == '-'){
			printf("%d - %d = %d",a,b,a-b);
		}
		else if(op == '*'){
			printf("%d * %d = %d",a,b,a*b);
		}
		else if(op == '/'){
			if(b==0){
				printf("Impossible divisé par 0");
			}
			else{
				printf("%d / %d = %d",a,b,a/b);
			}
		}
		else{
			printf("Erreur,Pour l'operation choisir : +,-,* ou / ");
		}
		printf("\nVouler-vous reutiliser le programme : (o/n) : ");
		scanf("%s",&repeter);
	}while(repeter == 'o');
}
