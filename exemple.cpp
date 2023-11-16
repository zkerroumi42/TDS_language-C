#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char str[100];
  int i,cont=0,cont1 =0,cont2=0;
   
  printf("Entrer une chaîne de caractère :  ");
  gets(str);
  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i] ==' ')
    {
      cont++;  
    } 
     if(isdigit(str[i]))
    {
      cont1++;  
    } 
    
    if(!isdigit(str[i]))
    {
      cont2++;  
    } 
  }  
  printf("chiffres= %d \n", cont1);
  printf("Espacement = %d \n", cont);
  printf("Autres= %d \n", cont2);
    
  return 0;
}
