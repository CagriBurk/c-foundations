#include <stdio.h>

int find_min(const int values[], int length){
    int min_value= values[0];
    for (int i=1; i<length; i++) {
        if (min_value > values[i]){
            min_value=values[i];
        }
    };
    return min_value;
}
int find_max(const int values[], int length){
    int max_value= values[0];
    for (int i=1; i<length; i++) {
        if (max_value < values[i]){
            max_value=values[i];
        }
    };
    return max_value;
}

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
    int write_min= find_min(values, n); 
    int write_max= find_max(values, n);       
    printf("Min value of this numbers is: %d", write_min);
    printf("Max value of this numbers is: %d", write_max);
    return 0;
}



