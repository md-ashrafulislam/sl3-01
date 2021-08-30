#include <stdio.h>
#include <math.h>    
int main() {

  int n, x, i, sum=0, lim=1;

scanf("%d", &n);

while(lim<=n){
  scanf("%d",&x);

for(i=1, sum =0; i<x; i++){

if(x % i == 0){
    sum +=i;

}

}

if(sum==x){
   printf("%d eh perfeito\n",x);
}else{
    printf("%d nao eh perfeito\n",x);
}
lim++;

}


    return 0;
}