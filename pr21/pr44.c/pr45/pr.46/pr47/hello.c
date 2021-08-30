#include <stdio.h>

int main(){
/* int sth, endh, stm, endm, duh, dum;
scanf("%d%d%d%d",&sth,&stm,&endh,&endm);

duh = endh - sth;
if(duh < 0){
    duh = 24 + (endh - sth);

}

dum = endm - stm;

if(dum < 0){
    dum = 60 + (endm -stm);
    duh --;
}
if(sth == endh && stm == endm){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
}else{
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duh, dum);
} */



    int h1,h2,m1,m2;
    int min=0,hour=0;

    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    hour=(h2-h1);
    if(hour<0)
    {
        hour = 24 + (h2-h1);
    }
    min=(m2-m1);
    if(min<0)
    {
        min = 60 + (m2-m1);
        // hour--;
        h2 < h1 || (h2 == h1 && m2 < m1) ? (hour = h2 + 23 - h1) : (hour = h2 - 1-h1);

    }

    if(h1==h2 && m1==m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{ 
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);

    }


    /* int start_hour, start_minute, end_hour, end_minute, hour, minute;

    scanf("%d %d %d %d", &start_hour, &start_minute, &end_hour, &end_minute);

    hour = end_hour - start_hour;
    minute = end_minute - start_minute;

    if (end_minute < start_minute) {
        minute = end_minute + 60 - start_minute;
        
        end_hour < start_hour || (end_hour == start_hour && end_minute < start_minute)
        ? (hour = end_hour + 23 - start_hour)
        : (hour = end_hour - 1 - start_hour);

    } else if (end_hour < start_hour) {
        hour = end_hour + 24 - start_hour;
    }

    if (hour == 0 && minute == 0)
        hour = 24;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    return 0;
} */