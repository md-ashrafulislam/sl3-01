#include <stdio.h>
#include <math.h>    
int main() {

    double n;
    int temp=0, i;
    for( i = 0; i < 6; i++){
       scanf("%lf", &n);
       if(n > 0){
           temp++;
       }
        
    }
printf("%i valores positivos\n", temp);
    return 0;
}