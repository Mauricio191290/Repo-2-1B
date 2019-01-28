#include <stdio.h>
#include <stdlib.h>


//Prueba 3

int main ()
{
	char mayusculas,minusculas,cadena[256],i,mayu;
	int Op;
	
	
	printf("Mete una palabra: \n"); 
 	gets(cadena);
 	printf("May a Min (Aplaste 1)\nMin a May (Aplaste 2)\n");
 	scanf("%d",&Op);
 	switch (Op)
 	{ 
 		case 1:
			for (i = 0; cadena[i] !=0; i++)
			{
				if(cadena[i]>= 'A' && cadena[i]<='Z')
				{
					mayu = cadena[i] + 32;
					printf("%c",mayu);
				}
				else
				{
					printf("%c",cadena[i]);
				}
			}
            break;
        case 2:
			for (i = 0; cadena[i] !=0; i++)
			{
				if(cadena[i] >= 'a' && cadena[i] <='z')
				{
					mayu = cadena[i] - 32;
					printf("%c",mayu);
				}
 				else
 				{
					printf("%c",cadena[i]);
				}
			}
			break;
	}
	return 0;
}


