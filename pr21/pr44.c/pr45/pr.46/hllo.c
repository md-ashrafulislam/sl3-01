#include <stdio.h>

{

    int strtTime, endTime, durationTime;

    scanf("%d %d", &strtTime, &endTime);

    durationTime = endTime - strtTime;

    if (durationTime < 0){

        durationTime = 24 + (endTime - strtTime);

    }

    if (strtTime == endTime){

        printf("O JOGO DUROU 24 HORA(S)\n");

    }else printf("O JOGO DUROU %d HORA(S)\n", durationTime);


    return 0;
}