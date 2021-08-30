#include<stdio.h>

int main()
{
    int v, i, j[10];
    scanf("%d",&v);
    if(v<50)
    {
        for(i=0; i<10; i++)
        {
            j[i] = v;
            printf("N[%d] = %d\n",i,v);
            v*=2;
        }
    }
    return 0;
}