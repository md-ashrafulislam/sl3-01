#include<stdio.h>
int main()
{
    int x,a=0,b=0,c=0;
    while(1){
        scanf("%d",&x);
        if(x==1){
            a++;
        }
        if(x==2){
            b++;
        }
        if(x==3){
            c++;
        }
        if(x==4){
            break;
        }
    }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",a);
        printf("Gasolina: %d\n",b);
        printf("Diesel: %d\n",c);
    


    /* int X = 0, fuel = 0,
            customerAlcohol = 0,
            customerGasolin = 0,
            customerDisel = 0;

        while (X != 4) {
            scanf("%d", &X);
            if (X == 1) {
                customerAlcohol+=1;
            }else if (X == 2) {
                customerGasolin += 1;
            }else if (X == 3) {
                customerDisel += 1;
            }
        }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", customerAlcohol);
        printf("Gasolina: %d\n", customerGasolin);
        printf("Diesel: %d\n", customerDisel); */
            return 0;
}