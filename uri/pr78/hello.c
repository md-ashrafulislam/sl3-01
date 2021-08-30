#include <stdio.h>
#include <math.h>    
int main() {

    int n,m;
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        m = i * n;
        printf("%i x %d = %d\n", i, n, m);

    }

    return 0;
}