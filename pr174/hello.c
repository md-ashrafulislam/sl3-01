#include <stdio.h>
 
int main()
{
    int i;
    float a[101];
    for(i=1;i<=100;i++){
        scanf("%f",&a[i]);
        if(a[i]<=10){
        //count++;
        printf("A[%d] = %.1f\n",i-1,a[i]);
    }
    }
    return 0;//end line
}