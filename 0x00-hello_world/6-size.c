#include <stdio.h>

int main(void)
{
    printf("The size of char is %lu byte\n", sizeof(char));
    printf("The size of int is %lu bytes\n", sizeof(int));
    printf("The size of float is %lu bytes\n", sizeof(float));
    printf("The size of double is %lu bytes\n", sizeof(double));
    printf("The size of long is %lu bytes\n", sizeof(long));
    printf("The size of long long is %lu bytes\n", sizeof(long long));
    printf("The size of short is %lu bytes\n", sizeof(short));

    return 0;
}
