#include <stdio.h>
#include <math.h>    
int main() {

    int a, b, sum = 0;;
    while(scanf("%d%d", &a, &b) && (a>0 && b>0)){

        if(a>b){
            for(int i = a; i <= b; i++){
                sum += i - 1;
                printf("%d", i);
                printf("Sum=%d\n", sum);
            }
        }else if(a< b){
            for(int i = b; i <= a; i++){
                sum += i - 1;
                printf("%d", i);
                printf("Sum=%d\n", sum);
            }
        }




    }


    return 0;
}