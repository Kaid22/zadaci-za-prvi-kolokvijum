#include <stdio.h>

int main()
{
    int n;
    printf("Unesite koji zelite broj fibonacijevog niza da se pokaze: ");
    scanf("%d",&n);
    int sad=1,pret=1,ppret=0;
    int i;
    printf(" 0\n 1");
    for(i=0;i<=n-3;i++){
        sad=pret+ppret;
        ppret=pret;
        pret=sad;
        printf("\n %d",sad);
    }

    return 0;
}
