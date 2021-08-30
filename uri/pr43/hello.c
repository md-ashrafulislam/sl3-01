#include <stdio.h>

int main(){

float a, b, c, pr, tr;
scanf("%f%f%f", &a, &b, &c);

if(a < (b + c) && b < (a + c) && c < (a +b)){
    pr = a + b + c;
    printf("Perimetro = %.1f\n", pr);
}else{
    tr = ((a + b) * c)/2;
    printf("Area = %.1f\n", tr);
}




    return 0;
}