/* #include <stdio.h>
#include <math.h>    
int main() {

    int a, b, sum = 0;;
    while(scanf("%d%d", &a, &b) && (a>0 && b>0)){

        if(a>b){
            for(int i = a; i <= b; i++){
                sum += i - 1;
                printf("%d", i);
                printf("Sum=%d\n", sum);
            }
        }else if(a< b){
            for(int i = b; i <= a; i++){
                sum += i - 1;
                printf("%d", i);
                printf("Sum=%d\n", sum);
            }
        }




    }


    return 0;
} */

#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    while((scanf("%d%d",&m,&n)&&(m>0&& n>0))){
    if(m>n){
        for(i=n,sum=0;i<=m;i++,sum+=i-1)
        printf("%d ",i);
        printf("Sum=%d\n",sum);
    }
    else if(m<n){
        for(i=m,sum=0;i<=n;i++,sum+=i-1)
            printf("%d ",i);
            printf("Sum=%d\n",sum);
    }
    }
    return 0;//end line
}