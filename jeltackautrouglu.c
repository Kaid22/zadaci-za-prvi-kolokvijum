#include <stdio.h>
#include<math.h>
int main()
{
    float x,y,x1,x2,x3,y1,y2,y3;
    float povrsina1,povrsina2,povrsina3,suma,povrsina;
    x1=0; y1=0;
    x2=2; y2=0;
    x3=0; y3=2;
    printf("unesite koordinate tacke (x,y):");
    scanf("%f %f",&x,&y);
    povrsina =0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    povrsina1=0.5*(x*(y2-y3)+x2*(y3-y)+x3*(y-y2));
    povrsina2=0.5*(x1*(y-y3)+x*(y3-y1)+x3*(y1-y));
    povrsina3=0.5*(x1*(y2-y)+x2*(y-y1)+x*(y1-y2));
    suma=fabs(povrsina1)+fabs(povrsina2)+fabs(povrsina3);
    if(fabs(povrsina)==suma)
    printf("unutra");
    else
    printf("napolju");
    return 0;
}
