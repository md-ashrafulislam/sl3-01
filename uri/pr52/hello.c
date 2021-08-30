#include <stdio.h>
#include <math.h>    
int main() {

    /* int n;
    scanf("%f",&n);
    
    if(n == 1){
        printf("January\n");
    }else if(n == 2){
       printf("February\n");
    }else if(n == 3){
        printf("March\n");
    }else if(n == 4){
       printf("April\n");
    }else if(n == 5){
          printf("May\n");
    }else if(n == 6){
        printf("June\n");
    }else if(n == 7){
        printf("July\n");
    }else if(n == 8){
        printf("August\n");
    }else if(n == 9){
         printf("September\n");
    }else if(n == 10){
        printf("October\n");
    }else if(n == 11){
        printf("November\n");
    }else if(n == 12){
          printf("December\n");
    } */

    int N;
    scanf("%d", &N);
    switch (N)
    {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;

        default:
            break;
    }


    return 0;
}