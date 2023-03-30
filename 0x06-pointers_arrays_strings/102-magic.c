#include <main.h>

int main(void)
{
    int a[] = {4, 8, 98, 15, 16, 23, 42};
    int *p = a;

    p += 2;
    printf("a[2] = %d\n", *(p));
    return 0;
}



