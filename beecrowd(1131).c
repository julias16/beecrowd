#include <stdio.h>
int main()
{
    int a ,b, totali=0, totalg=0, totalm=0 ,con, draw=0, gwin=0, iwin=0;
    while(1)
    {
        scanf ("%d%d", &a, &b);
        if(a>b)
            iwin++;
        if(a<b)
            gwin++;
        if(a==b)
            draw++;
        totali= totali+a;
        totalg= totalg+b;
        totalm++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&con);
        if(con==1)
            continue;
        if(con==2)
            break;
    }
    printf("%d grenais\n",totalm);
    printf("Inter:%d\n",iwin);
    printf("Gremio:%d\n",gwin);
    printf("Empates:%d\n",draw);
    if(iwin>gwin)
        printf("Inter venceu mais\n");
    if(iwin<gwin)
        printf("Gremio venceu mais\n");
    if(iwin==gwin)
        printf("Nao houve vencedor\n");
    return 0;
}
