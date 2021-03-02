/*
Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.

*/

#include <stdio.h>
#define MAXDIGITS 20

int pot(int base, int expoente);
int htoi(char s[]);

int main()
{
    char hex[MAXDIGITS] = "12FaCCF";

    printf("%d\n", htoi(hex));
    return 0;
}

int htoi(char s[])
{
    int i = 0;
    int htoi_digito = 0;
    int character;
    int resultado = 0;
    int digits = 0;

    while (s[digits] != '\0') {
        digits++;
    }
 
    while ((character = s[i]) != '\0') {
        
        if ('0' <= character && character <= '9')
            htoi_digito = character - '0';

        else if ('A' <= character && character <= 'F')
            htoi_digito = character - 'A' + 10;
        
        else if ('a' <= character && character <= 'f')
            htoi_digito = character - 'a' + 10;
        ++i;
        resultado += htoi_digito*pot(16, digits - i);
    }
    return resultado;
}


int pot(int base, int expoente)
{
    int i = 1, potencia = 1;

    for (i = 1; i <= expoente; ++i) {
        potencia = potencia*base;
    }
    return potencia;
}