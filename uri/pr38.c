#include <stdio.h>
int main()
{
    /* float total=100, number=50;
    float percentage;
    percentage=(number/total)*100;
    printf("%0.2f",percentage);
    return 0; */

    int x,y;
    scanf("%d%d", &x,&y);
    float a;
   
        
    if(x==1){
        a=(4.00*y);
        printf("Total: R$ %.2f\n",a);
    } else if(x==2){
        a=(4.50*y);
        printf("Total: R$ %.2f\n",a);
    } else if(x==3){
         a=(5.00*y);
         printf("Total: R$ %.2f\n",a);
    } else if(x==4){
        a=(2.00*y);
        printf("Total: R$ %.2f\n",a);
    } else if(x==5){
     a=(1.50*y);
     printf("Total: R$ %.2f\n",a);
    }
    
    
    
   

}