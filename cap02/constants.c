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

    /*
    \a       alert (bell) character
    \b       backspace
    \f       formfeed
    \n       newline
    \r       carriage return
    \t       horizontal tab
    \v       vertical tab
    \\       backslash
    \?       question mark
    \′       single quote
    \"       double quote
    \ooo  octal number
    \xhh  hexadecimal number
    */

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

    // enumeration constant
    enum escapes {BELL = '\a', BACKSPACE = '\b', TAB = '\t'}; // especificado os integer
    enum boolean {NO, YES}; // por padrao, 0, 1, 0, 1, 0... quando não especificado
    enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC}; // não especificados após ultimo especificado progridem 

    printf("TAB %d\n", TAB);
    printf("YES %d\n", YES);
    printf("MAY %d\n", MAY);

    // constant variable
    const float eps = 1e-5;
    const char msg[] = "Warning:";
    // eps = 1e-4; // ERRO, não pode ser alterada
    // msg[0] = 'w'; // ERRO não pode ser alterada
    printf("%f\n", eps);
    printf("%s\n", msg);



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