#include <stdio.h>
#include <string.h> // Contém strlen() que retorna o tamanho de uma string.

long unsigned int strlen2(char s[]); // strlen2() é uma versão própria para a mesma funcionalidade.

int main()
{

    // strlend
        char a[20] = "Elemental";
    char b[20] = {'E', 'l', 'e', 'm', 'e', 'n', 't', 'a', 'l', '\0'};

    printf("char a length (strlen) = %zu\n", strlen(a));
    printf("char b length (strlen) = %zu\n", strlen(b));
    
    printf("char a length (strlen2) = %zu\n", strlen2(a));
    printf("char b length (strlen2) = %zu\n", strlen2(b));
    
    // octal e hexadecimal 
    int octal = 012;
    int hexadecimal = 0x12;

    printf("octal 12 = %d\n", octal); // print 10 ao inves de 12
    printf("hexadecimal 12 = %d\n", hexadecimal); // print 18 ao inves de 12

    // character constant
    int char1Decimal, char2Octal, char3Hexadecimal, charLiteral;

    char1Decimal = 48;
    char2Octal = '\060'; 
    char3Hexadecimal = '\x30';
    charLiteral = '0';

    printf("%d\t %c\n", char1Decimal, char1Decimal);
    printf("%d\t %c\n", char2Octal, char2Octal);
    printf("%d\t %c\n", char3Hexadecimal, char3Hexadecimal);
    printf("%d\t %c\n", charLiteral, charLiteral);

}

long unsigned int strlen2(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}