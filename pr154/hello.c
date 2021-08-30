#include <stdio.h>
#include <math.h>    
int main() {

    int a;
    int sum = 0;
    int count = 0;
    double avr;

    while(1){
        scanf("%d", &a);
        if(a<0) break;
        else{
            sum +=a;
            count++;
        }
    }
    avr = sum/(double)count;
    printf("%.2lf\n",avr);

    return 0;
}