#include <stdio.h>
// #include <math.h>
int main(){

/* int line, space, star, number;

scanf("%d",&number);
for(line=0; line<number; line++){
     for(space=number+1; space>line+1; space--){
          printf(" ");

     }
     for(star=0; star<(2*line)+1; star++){
          printf("*");
     }
     printf("\n");
}
 */
 int line,star,space,number;
scanf("%d",&number);
for(line=0; line<=number; line++){  

     for(space=0; space<=line; space++){
         printf(" ");
    }

    for(star=number+3; star>=(line*2)+1; star--){
        printf("*");
    }
 
    
    printf("\n");
}
     
 return 0;
} 