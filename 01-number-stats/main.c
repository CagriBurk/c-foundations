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

double average(const int values[], int length){
    int i;
    int total_of_array=0;
    for(i=0; i<length;i++){
        total_of_array+= values[i];
    } 
    double average_of_array = total_of_array/length;
    return average_of_array;
}
int above_average(const int values[], int length){
    int i;
    int number_of_above_average=0;
    double avrg= average(values,length);
    for (i=0;  i<length;i++){
        if(values[i]>avrg){
            number_of_above_average++;
            printf("%f", avrg);
        } 

    }
    return number_of_above_average;
}


int main(void)
{
    int n = 0;
    printf("how many numbers will you put in\n");
    scanf("%d", &n);
    int values[n], i;
    if (n <= 100 || n > 0){
        for (i = 0; i <= n-1; i++) {
            scanf("%d", &values[i]);
        }
    }else{
        printf("The maximum numbers of input can be 100");
    }
    int write_min= find_min(values, n); 
    int write_max= find_max(values, n);
    int write_average= average(values,n); 
    int write_numbers_above_average= above_average(values,n);             
    printf("Min value of this numbers is: %d\n", write_min);
    printf("Max value of this numbers is: %d\n", write_max);
    printf("Average of this number is: %d\n",write_average);
    printf("There are %d numbers above average.\n",write_numbers_above_average);
    return 0;
}



