#include <stdio.h>
// #include <math.h>
int main(){
    
/* int i, j=60;

for(i=1; i<=37; i+=3){
    printf("I=%d J=%d", i,j);
    j -=5;
    printf("\n");

} 
 */
/* int i,j;
for(i=1; i<10; i+=2){
     
    for(j=7; j>4; j--){
        printf("I=%d J=%d\n", i,j);
           
    }
    
    for(j=9; j>6; j--){
        i =3;
            printf("I=%d J=%d\n", i,j);

             
        }
        for(j=11; j>8; j--){
            i =5;
            printf("I=%d J=%d\n", i,j);
            
             
        }
        for(j=13; j>10; j--){
            i=7;
            printf("I=%d J=%d\n", i,j);
        
         
        }
        for(j=15; j>12; j--){
            i=9;
            printf("I=%d J=%d\n", i,j);
        
         
        }
       
}
 */

/* float i, j;
int k;
for(i=0; i<2.1; i+=0.2){
    int floatToInt=(i-(int)i)*10;

    k=1;
    for(j=1.00; j<=3; j++){
        if(floatToInt==0){
            printf("I=%d J=%d\n", (int)i, (int)(j+i));
        }else{
            printf("I=%.1f J=%.1f\n", i, (j+i));
        }
        
        k++;
        
        
    }
   
} */


    return 0;
} 

#include <stdio.h>
#include <stdbool.h>
// using namespace std;

bool isPrime(long long n) {
    if(n == 2 || n == 3) {
        return true;
    }

    if(n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    int root = sqrt(n);

    for (int i = 5; i <= root; i += 6) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    long long n;

    scanf("%lld", &n);
    printf("%d\n", isPrime(n));

    return 0;
}

#include<stdio.h>
int main()
{
 int I,J,a=5,b=7;
 for(I=1;I<=9;I+=2)
 {
  for(J=b;J>=a;J--)
  {
   printf("I=%d J=%d\n",I,J);
  }
  a=b;
  b=b+2;
 }
 return 0;
}