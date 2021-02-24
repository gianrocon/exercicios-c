#include <stdio.h>

void reverse(char string[], int tamanho);

int main()
{
    char inputstring[100];
    char c;
    int i;


    for (i = 0; i < 100 && (c = getchar()) != EOF && c != '\n'; ++i) {
        inputstring[i] = c;
    }
    if (c == '\n') {
        inputstring[i] = '\n';
        ++i;
    }
    inputstring[i] = '\0';

    printf("%s", inputstring);
    reverse(inputstring, i);
    printf("%s", inputstring);

}


void reverse(char s[], int tamanho)
{
    int i, j, l;
    char reversed[500];
    char c;
    
    i = tamanho;
    --tamanho;

    for (j = 0; tamanho >= 0; j++) {
        reversed[j] = s[tamanho];
        --tamanho;
    }
    
    reversed[i] = '\0';
    
    l = 0;
    while ((s[l] = reversed[l]) != '\0') {
        ++l;
    }

}
