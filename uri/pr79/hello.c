#include <stdio.h>
#include <math.h>    
int main() {

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        float a,b,c,x;
        scanf("%f%f%f", &a, &b, &c);
        x = (a*2 + b*3 + c*5)/ 10;
        printf("%.1f\n", x);
    }
 


    return 0;
}