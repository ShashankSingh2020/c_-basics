#include<stdio.h>
int main()
{
    float p,k,e,m,h,v;
    printf("enter the mass of body\n");
    scanf("%f",&m);
    printf("enter the displacement of body\n");
    scanf("%f",&h);
    printf("enter the velocity of body\n");
    scanf("%f",&v);
    p=m*9.8*h;
    k=0.5*m*(v*v);
    e=p + k;
    printf("potential energy of body=%f\n",p);
    printf("kinetic enrgy of body=%f\n",k);
    printf("mechanical enrgy of body=%f\n",e);


    return 0;
}
