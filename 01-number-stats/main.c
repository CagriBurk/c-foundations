#include <stdio.h>
int main(void)
{
    int values[100], i;
    for (i = 0; i < 100; i++) {
    scanf("%d", &values[i]);
    printf("%d", values[i]);
    }
    return 0;
}

