/* Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time. */

#include <stdio.h>
int binsearch3(int x, int v[], int n);

int main()
{
    int vetor[5] = {4, 5, 6, 7, 8};
    printf("%d\n", binsearch3(6, vetor, 5));
    return 0;
}

int binsearch3(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1; // 4
    while (low < high) {
        mid = (low + high)/2;
        if (x <= v[mid])
            high = mid;
        else
            low = mid + 1;
    }
    if (x == v[low])
        return low;
    else
        return -1;
}