#include <stdio.h>
#include <math.h>    
int main() {

   int n, x, lim=0;
   int prime = 1;
   scanf("%d",&n);

   while(lim<n){

       scanf("%d",&x);

       for(int i=1; i<x; i++){
           if(x % i == 0){
               prime = 0;
           }
       }
       if(prime == 1) printf("%d eh primo\n", x);
       else printf("%d nao eh primo\n", x);
    lim++;
   }


   /*  int n,x,i,j,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        for(j=1,p=0;j<x;j++){
            if(x%j==0){
            p+=j;
 
    }
        }
        if(p==1){
        printf("%d eh primo\n",x);
    }
    else{
         printf("%d nao eh primo\n",x);
    }
    } */






    return 0;
}