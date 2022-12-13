#include <stdio.h>
#include<string.h>
#define MAX 100
int br;
int *Operacija(int A[],int a, int B[],int b,char op){
    static int p[MAX];
    int duzina;
    br=0;
    if(op=='P')
    {
        for(int i=0;i<a;i++){
            for (int j = 0; j < b; j++) {
                if(A[i]==B[j])
                {
                    p[br]=A[i];
                    br++;
                }
            }
        }
    }
    if(op=='U')
    {
        for(int i=0;i<a;i++){
            p[br]=A[i];
             br++;
        }
        for(int i=0;i<b;i++){
            p[br]=B[i];
             br++;
        }
    }
    return p;
}
int main()
{
    int a,b,c;
    int niz1[MAX],niz2[MAX];
    int* rez1;
    int* rez2;
    char op1,op2;
    printf("\nunesite prvu operaciju:");
    scanf(" %c",&op1);
    printf("\nunesite drugu operaciju:");
    scanf(" %c",&op2);
    printf("unesite duzinu niza A:");
    scanf("%d",&a);
    int A[a];
    for (int i = 0; i < a; i++) {
        printf("\nUnesite %d.element niza A:",i);
        scanf("%d",&A[i]);
    }
    printf("unesite duzinu niza B:");
    scanf("%d",&b);
    int B[b];
    for (int i = 0; i < b; i++) {
        printf("\nUnesite %d.element niza B:",i);
        scanf("%d",&B[i]);
    }
    printf("unesite duzinu niza C:");
    scanf("%d",&c);
    int C[c];
    for (int i = 0; i < c; i++) {
        printf("\nUnesite %d.element niza C:",i);
        scanf("%d",&C[i]);
    }
    rez1=Operacija(A,a,B,b,op1);
    for (int i = 0; i < br; i++) {
        niz1[i]=*(rez1+i);
    }
    for (int i = 0; i < br; i++) {
        printf(" %d \n",niz1[i]);
    }
    printf("\n\nDURGA OPERACIJA\n\n");
    rez2=Operacija(niz1,br,C,c,op2);
    for (int i = 0; i < br; i++) {
        niz2[i]=*(rez2+i);
    }
    for (int i = 0; i < br; i++) {
        printf(" %d \n",niz2[i]);
    }
    return 0;
}
