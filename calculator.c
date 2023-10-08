#include<stdio.h>   
int main()
{
    int input;
    float a,b;
    int c;
    printf("enter 1 for addition\n");
    printf("enter 2 for substraction\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    printf("enter 5 for factorial\n");
    printf("enter input number\n");
    scanf("%d",&input);
    if (input==1)
    {
        printf("enter first number\n");
        scanf("%f",&a);
        printf("enter second numbe\n");
        scanf("%f",&b);
        printf("addition of %f+%f is %f\n",a,b,a+b);
    }
    else if (input==2)
    {
        printf("enter first number/n");
        scanf("%f",&a);
        printf("enter second number\n");
        scanf("%f",&b);
        printf("substraction of %f-%f is %f",a,b,a-b);
    }
    else if (input==3)
    {
        printf("enter first number\n");
        scanf("%f",&a);
        printf("enter second number\n");
        scanf("%f",&b);
        printf("multiplication of %f*%f is %f",a,b,a*b);
    }
    else if (input==4)
    {
        printf("enter first number\n");
        scanf("%f",&a);
        printf("enter second number\n");
        scanf("%f",&b);
        printf("division of %f/%f is %f",a,b,a/b);
    }
    else if (input=5)
    {
        printf("enter the number you want factorial of\n");
        scanf("%d",&c);
        int f=c;
        int d=1;
        do
        {
           d=c*d;
           c=c-1;
       
        } while (c>1);  
        printf("the value of %d! is %d\n",f,d);
    }
return 0;
}
