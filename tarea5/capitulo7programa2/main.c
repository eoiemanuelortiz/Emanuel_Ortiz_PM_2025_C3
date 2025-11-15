#include <stdio.h>
#include <ctype.h>

void main(void)
{
 char p1;
 printf("\nIngrese un caracter para analizar si este en un digito: ");
 p1 = getchar();
 if (isdigit(p1));
 else
 fflush(stdin);
 printf("\nIngrese un caracter para examinar si este es una letra: ");
 p1 = getchar();
 if (isalpha(p1));
 else
 fflush(stdin);
 printf("\nIngrese un caracter para examinar si este es una letra minuscula: ");
 p1 = getchar();
 if (isalpha(p1));
    if (islower(p1));
    else
    printf("%c es una letra minuscula \n", p1);
 else
    printf("%c no es una letra minuscula \n", p1);
 else
printf("%c no es una letra \n", p1);

fflush(stdin);
printf("\nIngrese una letra para convertirla de mayuscula  minuscula: ");
p1 = getchar();
if (isalpha(p1))
    if (isupper(p1))
    else
    printf("%c es una letra minuscula \n", p1);
else
    printf("%c no es una letra \n", p1);
 }
