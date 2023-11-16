#include <stdio.h>
#include <stdlib.h>
main()
{
 int nblig;   /* nombre de lignes        */
 int i;     /* compteur des lignes     */
 int j;     /* compteur des caractères */

 do
   {
    printf("Entrer le Nombre de lignes : ");
    scanf("%d", &nblig);
   }
 while (nblig<1 || nblig>20);

 for (i=0 ; i<=nblig ; i++)
   {
    for (j=1 ; j<=nblig-i ; j++)
        putchar(' ');
    for (j=1 ; j<=(2*i-1) ; j++){
		if (j==1 || i==nblig || j==(2*i-1))putchar('*');
		else putchar(' ');
	}
    putchar('\n');
   }
  system("PAUSE");
  return 0;
}
