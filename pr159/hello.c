#include <stdio.h>
   
int main() {

int x, i, sum;

while (1){

scanf("%d", &x);
if(x==0) break;
for(i=x, sum=0; i<x+(5*2); i++){
    if(i%2==0){
        sum += i;
    }
}

printf("%d\n", sum);


 


}
    return 0;
}