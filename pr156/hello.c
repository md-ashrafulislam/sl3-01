#include <stdio.h>
#include <math.h>    
int main() {

    float sum=1;
    int b = 2;
   
   for(int i = 3; i < 40; i+=2){
       sum +=((float)i/(float)b);
       b *=2;
   }
    printf("%.2f\n",sum);


    return 0;
}