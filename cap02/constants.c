#include <stdio.h>
#include <string.h> // Contém strlen() que retorna o tamanho de uma string.

long unsigned int strlen2(char s[]); // strlen2() é uma versão própria para a mesma funcionalidade.

int main()
{
    char a[20] = "Elemental";
    char b[20] = {'E', 'l', 'e', 'm', 'e', 'n', 't', 'a', 'l', '\0'};

    printf("char a length (strlen) = %zu\n", strlen(a));
    printf("char b length (strlen) = %zu\n", strlen(b));
    
    printf("char a length (strlen2) = %zu\n", strlen2(a));
    printf("char b length (strlen2) = %zu\n", strlen2(b));
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