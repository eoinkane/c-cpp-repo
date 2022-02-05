// hello.c
#include <stdio.h>

int main() {
    int integerVariable;
    char charVariable;
    short shortVariable;
    long longVariable;
    long long longLongVariable;
    float floatVariable;
    double doubleVariable;
    long double longDoubleVariable;

    size_t size;

    size = sizeof(integerVariable);

    printf("Size of Integer Variable is %zu bytes\n", size);
    printf("Size of charVariable is %zu bytes\n", sizeof(charVariable));
    printf("Size of shortVariable is %zu bytes\n", sizeof(shortVariable));
    printf("Size of longVariable is %zu bytes\n", sizeof(longVariable));
    printf("Size of longLongVariable is %zu bytes\n", sizeof(longLongVariable));
    printf("Size of floatVariable is %zu bytes\n", sizeof(floatVariable));
    printf("Size of doubleVariable is %zu bytes\n", sizeof(doubleVariable));
    printf("Size of longDoubleVariable is %zu bytes\n", sizeof(longDoubleVariable));

    return 0;
}
