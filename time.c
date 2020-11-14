#include <stdio.h>
// #include <math.h>
int main(){
/* int D,  y, m, d;
scanf("%d", &D);

y = (D/365);
m = (D-(y*365))/30;
d = D-((y*365)+(m*30));

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y,m,d);
  */
// printf("%d mes(es)\n", month); 
// printf("%d dia(s)\n", day); 


/* int N,h,m,s;

scanf("%d", &N);
h = N/3600;
m = (N-(h*3600))/60;
s = (N-(h*3600+m*60));

printf("%d:%d:%d\n", h,m,s); */

// if B is greater than C
//and D is greater than A 
//and if the sum of C and D is greater than the sum of A and B 
//and if C and D were positives values and if A is even
//write the message “Valores aceitos” (Accepted values)
//write the message “Valores nao aceitos” (Values not accepted).

/* int a,b,c,d;
 scanf("%d%d%d%d",&a,&b,&c,&d);

 if(b>c && d>a && (c+d)>(a+b) && c>=0 && d>=0 && a%2==0){
      printf("Valores aceitos\n");
 } else{
      printf("Valores nao aceitos\n");
 }; */

/* int i, j, number;

scanf("%d",&number);

for(i=0; i<number; i++){
     for(j=0; j<number; j++){
          printf("*");
     }
     printf("\n");
}
 */


/* int i, j, number;

for(i=1; i<=5; i++){
     for(j=1; j<=i; j++){
          printf("%d",i);
     }
     printf("\n");
}
printf("Game Over!");
 */
/* int i, j, number;

scanf("%d",&number);
for(i=0; i<number; i++){
     for(j=0; j<=i; j++){
          printf("*");
     }
     printf("\n");
} */

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
} */



int line, space, star, number;

// scanf("%d",&number);
for(line=0; line<4; line++){

     for(star=0; star<=(line+3); star--){
          printf("*");
     }

     /* for(space=0; space>line; space++){
          printf(" ");

     } */
     
     printf("\n");
}

     return 0;
} 

