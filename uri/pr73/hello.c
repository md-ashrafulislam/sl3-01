#include <stdio.h>
#include <math.h>    
int main() {

    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
       
        if(i % 2 == 0){
            int p = pow(i,2);
        printf("%i^2 = %d\n", i , p);
        }
    }
        

    return 0;

}