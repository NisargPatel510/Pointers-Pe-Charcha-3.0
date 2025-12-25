#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 115, y = 120;
    printf("\nBefore swapping a and b :\n");
    printf("%d %d \n", x, y);
    swap(&x, &y);
    printf("After swapping a and b :\n");
    printf("%d %d", x, y);
    return 0;
}
