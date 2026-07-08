#include <stdio.h>

int main(void){
    int choice=0;

    printf("1. Ohm's law calculator\n");
    printf("2. Series resistance\n");
    printf("3. Parallel resistance\n");
    printf("4. Voltage divider\n");
    printf("5. Exit\n");
    if(scanf("%d", &choice)!=1){
        printf("Please enter an integer");
        return 1;
    }
    if(choice<1 || choice>5){
        printf("Please enter a number between 1-5");
        return 1;
    }
    printf("Program initializing")
   /*switch(choice){
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
    }*/
    return 0;
}