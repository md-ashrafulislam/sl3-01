#include <stdio.h>
int main() {
   float n,sum=0;
    int value=0;
    while(value<2)
    {
        scanf("%f",&n);
        if(n>= 0 && n <= 10)
        {
            sum += n;
            value++;
        }
        else
            printf("nota invalida\n");
    }
    printf("media = %.2f\n",sum/2);
    return 0;
}


    