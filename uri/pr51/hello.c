#include<stdio.h>
int main()
{
 float n, r, f1, f2, f3;
 scanf("%f", &n);

 if(n <= 2000){
  printf("Isento\n");
 }else{
  if(n > 2000 && n <= 3000){
   f1 = n - 2000;
   f1 = ((f1 * 8) / 100);
   r = f1;
  }else if(n > 3000 && n <= 4500){
   f1 = n - 2000;
   f2 = f1 - 1000;
   f1 -= f2;
   f1 = ((f1 * 8) / 100);
   f2 = ((f2 * 18) / 100);
   r = f2 + f1;
  }else{
   f1 = n - 2000;
   f2 = f1 - 1000;
   f3 = f2 - 1500;
   f1 -= f2;
   f2 -= f3;
   f1 = ((f1 * 8) / 100);
   f2 = ((f2 * 18) / 100);
   f3 = ((f3 * 28) / 100);
   r = f3 + f2 + f1;
  }
 
   printf("R$ %.2f\n", r);
 }
 /*float x,a,b,c,tax;
    scanf("%f",&x);
    if(x<=2000.00){
        printf("Isento\n");
    }
    else if(x>=2000.01&&x<=3000.00){
        tax=(x-2000.01)*.08;
        printf("R$ %.2f\n",tax);
    }
    else if(x>=3000.01&&x<=4500.00){
        tax=(999.99*.08)+((x-3000.01)*.18);
        printf("R$ %.2f\n",tax);
    }
    else if(x>4500){
        tax=(999.99*.08)+(1499.99*.18)+((x-4500.00)*.28);
        printf("R$ %.2f\n",tax);
    } */
 
 return 0;
}