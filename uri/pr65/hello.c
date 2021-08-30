#include <stdio.h>
    
int main() {

    int n;
    int temp=0;
    for(int i = 0; i < 5; i++){
       scanf("%d", &n);
       if(n < 0){
           n = -n;
       }
       if(n % 2 == 0){
           temp++;
       }
        
    }
printf("%d valores pares\n", temp);
    return 0;
}