#include <stdio.h>
int main(){

 int  X, oddCount = 6;
 scanf("%d", &X);
 for(int i = X; i < (X+(oddCount*2)) ; i+=2){
    int odd;
    if(i % 2 == 0){
    odd = i + 1;
    printf("%d\n", odd);
    }else{
    odd = i;
    printf("%d\n", odd);
    }
 }
 return 0;
}