#include <stdio.h>
#include <math.h>    
int main() {

    int n;
    scanf("%d", &n);

    for(int i=0; i<10000; i++){
        
        if(i % n == 2){
            printf("%i\n", i);
        }
    }


    return 0;
}