#include <stdio.h>

int main(void){
    while(1){
        int choice=0;
        int broken=0;
        printf("1. Ohm's law calculator\n");
        printf("2. Series resistance\n");
        printf("3. Parallel resistance\n");
        printf("4. Voltage divider\n");
        printf("5. Exit\n");
        if(scanf("%d", &choice)!=1){
            printf("Please enter an integer\n");
            while(getchar() != '\n');
            continue;
        }
        if(choice<1 || choice>5){
            printf("Please enter a number between 1-5\n");
            continue;
        }

        switch(choice){
                case 1:
                    printf("1");
                break;
                case 2:
                    printf("2");
                break;
                case 3:
                    printf("3");
                break;
                case 4:
                 printf("4");
                break;
                case 5:
                broken=1;
                break;
            }
            if (broken == 1){
                break;
            }
    
    } 
    return 0;   
}
