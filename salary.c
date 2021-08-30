//salary with bonus

#include <stdio.h>
#include <math.h>
int main(){

/* int a,b;
    scanf("%d%d", &a,&b);
    float c,salary;
    scanf("%f", &c);
    salary = b * c;
    printf("NUMBER = %d\n", a);
   printf("SALARY = U$ %.2f\n", salary); */

/* char * a;
scanf("%s", &a);

double b,c,salary;
scanf("%lf%lf", &b,&c);
salary = b+(c*15)/100;
printf("TOTAL = R$ %.2lf\n", salary);
 */

/* int a,b,c,d;
float e, f,total;
scanf("%d%d%f\n", &a, &b, &e);
scanf("%d%d%f", &c, &d, &f);
total=(b * e)+(d * f);

printf("VALOR A PAGAR: R$ %.2f\n", total); */
/* 
 double PI=3.14159;
double a,b;
scanf("%lf", &a);

b=(PI*(a*a*a)*4)/3;

printf("%.3lf\n", b); 
 */

/* double pi=3.14159;
double a,b,c,tri,cir,tra,qua,ret;
 
scanf("%lf%lf%lf", &a, &b, &c);
tri=(a*c)/2;
cir = pi*(c*c);
tra = ((a+b)*c)/2;
qua = (b*b);
ret = (a*b);

printf("TRIANGULO: %.3lf\n", tri);
printf("CIRCULO: %.3lf\n", cir);
printf("TRAPEZIO: %.3lf\n", tra);
printf("QUADRADO: %.3lf\n", qua);
printf("RETANGULO: %.3lf\n", ret);
 */

/* int a,b,c;
scanf("%d%d%d", &a, &b, &c);
int max_value = a;
if(max_value<b) max_value = b;
if(max_value<c) max_value = c;
printf("%d eh o maior", max_value);
 */

/* int a;
scanf("%d", &a);
float b, avg;
scanf("%f", &b);
avg = (a/b);
printf("%.3f km/l\n", avg); */

/* double x1, y1, x2, y2, dis;
scanf("%lf%lf\n", &x1,&y1);
scanf("%lf%lf", &x2,&y2);

dis = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));

printf("%.4lf\n", dis); */

/* double a, b;
float k;
scanf("%lf%lf", &a, &b);
k = (a*b)/12;
printf("%.3f\n", k); */
/* int b;
scanf("%d", &b);
printf("%d\n", b);
printf("%d nota(s) de R$ 100,00\n", b/100);
b %= 100;
printf("%d nota(s) de R$ 50,00\n", b/50);
b %= 50;
printf("%d nota(s) de R$ 20,00\n", b/20);
b %= 20;
printf("%d nota(s) de R$ 10,00\n", b/10);
b %= 10;
printf("%d nota(s) de R$ 5,00\n", b/5);
b %= 5;
printf("%d nota(s) de R$ 2,00\n", b/2);
b %= 2;
printf("%d nota(s) de R$ 1,00\n", b/1);

    return 0;
}  */

float n;
scanf("%f", &n);
// printf("%lf\n", b);
printf("%d nota(s) de R$ 100.00\n", n/100);
n %= 100;
printf("%d nota(s) de R$ 50.00\n", n/50);
// b %= 50;
printf("%d nota(s) de R$ 20.00\n", n/20);
// b %= 20;
printf("%d nota(s) de R$ 10.00\n", n/10);
// b %= 10;
printf("%d nota(s) de R$ 5.00\n", n/5);
// b %= 5;
printf("%d nota(s) de R$ 2.00\n", n/2);
// b %= 2;
printf("%d nota(s) de R$ 1.00\n", n/1);

    return 0;
} 