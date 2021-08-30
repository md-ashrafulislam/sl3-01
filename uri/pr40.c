#include <stdio.h>
#include <math.h>    
int main() {
/* 
float a, b, c, d, m, avr, avr2;

scanf("%f %f %f %f", &a, &b, &c, &d);

avr = ((a * 2) + (b * 3) + (c * 4) + d)  / 10; 

printf("Media: %.1f\n", avr);



 if(avr >= 7.0){
    printf("Aluno aprovado.\n");
}else if(avr >= 5.00){
     printf("Aluno em exame.\n");
     scanf("%f", &m);
     avr2 = (avr+m)/2;

     printf("Nota do exame %.1f:\n", m);
     if(avr2 > 5.0){
     printf("Aluno aprovado.\n");
     }else{
     printf("Aluno reprovado.\n");
     }

    printf("Media final: %.1f",avr2);

} else if(avr < 5.00){
    printf("Aluno reprovado.\n");
} */

   double a, b, c, d, last, m;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", m);
    if (m >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &last);
        printf("Nota do exame: %.1f\n", last);
        if (last + m / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (last + m ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }  






// float avr2,avr3;
/* float m,n,o,p,avr2,avr3;
scanf("%f%f%f%f",&m,&n,&o,&p);
avr2 =  ((m*2)+(n*3)+(o*4)+(p*1))/(2+3+4+1); */
// scanf("%f",&avr2);

/* else
{
    float m, avr2;
scanf("%f",&m);

avr2 = (avr+avr2)/2;
printf("Nota do exame %.1f:\n",avr2);

if(avr2>=5.0){
     printf("Aluno aprovado.\n");
}else{
    printf("Aluno reprovado.\n");
}

printf("Media final: %.1f",avr2);
}
 */


    return 0;
}