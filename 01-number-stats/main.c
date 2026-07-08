#include <stdio.h>
int main(void)
{
    int n = 0;
    printf("how many numbers will you put in\n");
    scanf("%d", &n);
    int values[n], i;
    if (n <= 100){
        for (i = 0; i <= n-1; i++) {
            scanf("%d", &values[i]);
        }
    }else{
        printf("The maximum numbers of input can be 100");
    }    
    for (i = 0; i <= n-1; i++) {
        printf("%d", values[i]);
    }     
    return 0;
}

