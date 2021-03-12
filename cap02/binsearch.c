/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */

#include <stdio.h>
int binsearch2(int x, int v[], int n);

int main()
{
    int vetor[5] = {4, 5, 6, 7, 8};
    printf("%d\n", binsearch2(7, vetor, 5));
    return 0;
}

int binsearch2(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high)/2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else /*found match*/
            return mid;
    }
    return -1; /*no match*/
}