#include <stdio.h>

int *add(int *a, int *b)
{
    static int c;
    c = *a + *b;
    return &c;
}

int main()
{
    int x = 5, y = 6;
    int *(*p[4])(int *, int *) = {add};
    int *r = p[0](&x, &y);
    printf("\nSummation = %d\n\n", *r);
    return 0;
}
