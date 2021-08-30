#include <stdio.h>
#include <math.h>    
int main() {

int n, i, j;
int x, y, sum=0;

scanf("%d", &n);

for( i=1; i<=n; i++){

    scanf("%d%d", &x, &y);
    
        for( j=x,sum = 0; j<x+(y*2); j++){
            
            if(j % 2!= 0){
            sum +=j;
           
            }
            
        }
         
    
    printf("%d\n",sum);

    
}

   return 0;
}

/* #include <stdio.h>
 
int main()
{
    int n,x,y,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        for(j=x,sum=0;j<x+(y*2);j++){
            if(j%2!=0){
                sum+=j;
            }
        }
     printf("%d\n",sum);
    }
    return 0;//end line
} */
