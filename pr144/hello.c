#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        c=b*b;
        d=b*b*b;
        printf("%d %d %d\n",b,c,d);
        e=c+1;
        f=d+1;
        printf("%d %d %d\n",b,e,f);
    }
    return 0;
}

/* #include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2; j++)
        {
            if(j==1)
                printf("%d %d %d\n",i,i*i, i*i*i);
            else
                printf("%d %d %d\n",i,(i*i)+1, (i*i*i)+1);
        }
    }
    return 0;
} */

