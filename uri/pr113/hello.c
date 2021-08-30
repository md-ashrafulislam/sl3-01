#include<stdio.h>
int main()
{
    int m,n;
    while((scanf("%d%d",&m,&n)&&(m>n || n>m))){
    if(m>n){
        printf("Decrescente\n");
    }
    else if(m<n){
        
            printf("Crescente\n");
    }
    }
    return 0;//end line
}