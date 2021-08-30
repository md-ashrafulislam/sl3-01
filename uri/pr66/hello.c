#include <stdio.h>
    
int main() {

    int n, even = 0, odd = 0, pos = 0, neg = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &n);

        if(n % 2 == 0){
            even++;
        }else{
            odd++;
        }
        if(n > 0){
            pos++;
        }else{
            if(n != 0){
                neg++;
            }
        }
        
        
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, pos, neg);


    return 0;
}