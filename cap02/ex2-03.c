/*
Write the function htoi(s), which converts a string of hexadecimal nDigitos (including an optional 0x or 0X) into its equivalent integer value. The allowable nDigitos are 0 through 9, a through f, and A through F.

*/

#include <stdio.h>
#define MAXDIGITS 20

int pot(int base, int expoente);
int htoi(char s[]);

int main()
{
    char hex[MAXDIGITS] = "0X12C";

    printf("%d\n", htoi(hex));
    return 0;
}



// Função htoi para converter strings de digitos hexadecimais em seu valor inteiro
// Retorna o valor em INT
// Opcional utilizar a notação hexadecimal 0x ou 0x no inicio da string
int htoi(char s[])
{
    int i = 0;

    int nDigitos = 0;
    int resultado = 0;
    int digitoHexa;
    int valorAbsoluto;
    int valorRelativo;
    int expoente;

    // Verifica quantos 'supostos' nDigitos tem o array
    while (s[nDigitos] != '\0')
        nDigitos++;

    // Reduz 2 na quantidade de 'nDigitos' se o array contém 0x ou 0X no inicio
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
        nDigitos -= 2;
    }

    // inicializa o valor do expoente da base 16.
    // Começa pelo maior e vai decrescendo (expoente--), pois o array é lido da esquerda para direita
    expoente = nDigitos - 1;

    // O loop lê os digitos do array da esquerda para direita 
    // Extrai o valor absoluto (inteiro) de cada 'digitoHexa' e armazenaa em 'valorAbsoluto'
    // Na sequencia estabelece o 'valorRelativo' à sua posição multiplicando pela potencia de base=16, expoente=casa hexadecimal
    // Por fim, vai somando os 'valorRelativo's para retornar o valor total 'Resultado' 

    while ((digitoHexa = s[i]) != '\0') {

        if ('0' <= digitoHexa && digitoHexa <= '9')
            valorAbsoluto = digitoHexa - '0';

        else if ('A' <= digitoHexa && digitoHexa <= 'F')
            valorAbsoluto = digitoHexa - 'A' + 10;

        else if ('a' <= digitoHexa && digitoHexa <= 'f')
            valorAbsoluto = digitoHexa - 'a' + 10;

        valorRelativo = valorAbsoluto*pot(16, expoente);
        resultado += valorRelativo;

        --expoente;
        ++i;
    }

    return resultado;
}



// Função auxiliar para calcular potência, passando-se a base e o expoente como argumentos.
int pot(int base, int expoente)
{
    int i = 1, potencia = 1;

    for (i = 1; i <= expoente; ++i)
        potencia = potencia*base;

    return potencia;
}
