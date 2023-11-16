#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int l,i,j;
    printf("Entrer nombre des lignes :");
    scanf("%d",&l);
    for(i=1;i<=l;i++){
        for(j=1;j<=l;j++){
            if(i==1 || i==l || j==l || j==1)printf("*");
            else if(i==j || j==(l-i+1))printf("+");
            else if(j==(l/2+1))printf("-");
            else if(i==(l/2+1))printf("|");
            else printf(" ");
        }
        printf("\n");
    }
    system("PAUSE");
	return 0;
}
