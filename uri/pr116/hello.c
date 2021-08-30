#include<stdio.h>

int main()
{
    int n, x, y, i;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d",&x,&y);
        double div;
        div = (double)x / (double)y;
        if(y == 0){
            printf("divisao impossivel\n");
            
        }else{
            printf("%.1lf\n", div);
        }
        
    }
    return 0;
}