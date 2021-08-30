#include <stdio.h>
#include <math.h>    
int main() {

    int x, n, i, sum=0;
    scanf("%d%d", &x,&n);
    while(n<=0){
        scanf("%d", &n);
        for( i=1; i<n+x; i++){
            sum += i;
           
            
        }
       
        
    }
 printf("%d",sum);

    return 0;
}