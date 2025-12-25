#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    // Using malloc
    int *m = (int *)malloc(3 * sizeof(int));

    // Using calloc
    int *c = (int *)calloc(3, sizeof(int));

    printf("Values using malloc:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", m[i]); // Garbage values
    }

    printf("\n\nValues using calloc:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", c[i]); // All zeros
    }

    free(m);
    free(c);

    return 0;
}
