#include <stdio.h>
int main()
{
   /*  int x,y,I,G,E,c;
    I = G = E = c = 0;
    while(1)
    {
        scanf("%d%d",&x,&y);
        c++;
        if(x==y)
            E++;
        else if(x>y)
            I++;
        else if(x<y)
            G++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&x);
        if(x==2)
            break;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",c,I,G,E);
    if(I==G)
        printf("Nao houve vencedor\n");
    else if(I>G)
        printf("Inter venceu mais\n");
    else if(I<G)
        printf("Gremio venceu mais\n"); */

        
    int a,b,c=0,d=0,e=0,f,g,h,i,j=0,k=0,l=0;
    while(1)
    {
        scanf ("%d%d", &a, &b);
        if(a>b) l++;
        if(a<b) k++;
        if(a==b) j++;
        c+=a;
        d+=b;
        e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&f);
        if(f==1)
            continue;
        if(f==2)
            break;
    }
    printf("%d grenais\n",e);
    printf("Inter:%d\n",l);
    printf("Gremio:%d\n",k);
    printf("Empates:%d\n",j);
    if(l>k)
        printf("Inter venceu mais\n");
    if(l<k)
        printf("Gremio venceu mais\n");
    if(k==l)
        printf("Nao houve vencedor\n");
    return 0;
}

    