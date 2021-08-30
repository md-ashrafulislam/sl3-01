#include <stdio.h>
#include <math.h>    
int main() {

   

    int a,b,c,i,n;
    scanf("%d",&n);
    a=0,b=1;

    for(i=0;i<n-1;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;

    }
    printf("%d\n",a);
  


    return 0;
}

// 0+1=1
// 1+1=2
// 2+1=3
// 3+2=5
// 5+3=8