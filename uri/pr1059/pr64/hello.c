#include <stdio.h>
#include <math.h>    
int main() {

    /* double n, total = 0, avr=0;
    int totalNum=0, i;
    for( i = 0; i < 6; i++){
       scanf("%lf", &n);
       if(n > 0){
           totalNum += 1;
           total += n;
       }
        
    }
    avr = total/totalNum;
printf("%i valores positivos\n", totalNum);
printf("%.1lf\n", avr); */

double n, total = 0, avr=0;
    int totalNum=0, i;
    for( i = 0; i < 6; i++){
       scanf("%lf", &n);
       if(n > 0){
           totalNum ++;
           total += n;
       }
        
    }
    avr = total/totalNum;
printf("%i valores positivos\n", totalNum);
printf("%.1lf\n", avr);

    return 0;
}