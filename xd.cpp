#include <stdio.h>
#include <string.h>
#include <conio.h>
 
int main()
{
    char palabra[20];
    int i, p,palindromo;
 
    printf("Escribe una palabra: ");

    gets(palabra);
    p=strlen(palabra)-1;
    for(i=0; i<strlen(palabra) 
	{
        printf("Comprobando %c==%c\n", *(palabra+i), *(palabra+p));
        if (*(palabra+i)!=*(palabra+p)) {
            palindromo = 0
        }
    }
    if (palindromo)
        printf("\nEs un palíndrimo.\n");
    else
        printf("\nNo es un palíndrimo.\n");
 
    return (0);
}
} 
