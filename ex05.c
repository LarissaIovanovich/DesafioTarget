#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char string[50], auxiliar[50];
    int a, b;
    printf("Digite a string para ser invertida: ");
    gets(string);
    b = strlen(string) - 1;
    for (a = 0; string[a] != '\0'; a++)
    {
        auxiliar[b] = string[a];
        b--;
    }
    auxiliar[a] = '\0';
    strcpy(string, auxiliar);
    printf("\n\nA string inversa e:\n%s\n\n", string);
    return 0;
}