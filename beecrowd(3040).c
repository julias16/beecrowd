#include <stdio.h>
int main()
{
    int n, height, trunk, branches;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d %d %d",&height,&trunk,&branches);
        if(height>=200 && height<=300 && trunk>=50 && branches>=150)
        {
            printf("Sim");
            continue;
        }
        printf("Nao");
    }
    return 0;
}
