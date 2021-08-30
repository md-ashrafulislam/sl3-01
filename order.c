#include <stdio.h>
// #include <math.h>
int main(){
//ascending & descending order:

    int a, b, c, small, medium, big;
    


//Ascending order:


  /*while (1){
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c){
        break;
    } else if(a>=b && a>=c){
        big = a;
        if(b>c){
            medium = b;
            small = c;
        } else{
            medium = c;
            small = b;
        }
    } else if(b>=a && b>=c){
         big = b;
        if(a>c){
            medium = a;
            small = c;
        } else{
            medium = c;
            small = a;
        }
    }else if(c>=a && c>=b){
        big = c;
        if(a>b){
            medium = a;
            small = b;
        } else{
            medium = b;
            small = a;
        }
    }
    printf("%d %d %d",big,medium, small);
}
printf("Finished!"); */


//descending order:

while (1){

    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c){
        break;
    } else if(a<=b && a<=c){
       small = a;
        if(b<c){
            medium = b;
             big = c;
        } else{
            medium = c;
            big = b;
        }
    } else if(b<=a && b<=c){
         small = b;
        if(a<c){
            medium = a;
            big = c;
        } else{
            medium = c;
            big = a;
        }
    }else if(c<=a && c<=b){
         small = c;
        if(a<b){
            medium = a;
            big = b;
        } else{
            medium = b;
            big = a;
        }
    }
    printf("%d\n%d\n%d\n\n",small,medium,big );
    printf("%d\n%d\n%d\n", a, b, c);
}





     return 0;
} 