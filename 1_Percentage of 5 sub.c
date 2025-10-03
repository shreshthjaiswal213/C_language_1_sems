#include<stdio.h>
int main()
{
    int p,c,m,e,h,per,sum;
    printf("Enter the marks obtained in Physics:");
    scanf("%d",&p);
    printf("Enter the marks obtained in Chemistry:");
    scanf("%d",&c);
    printf("Enter the marks obtained in Mathmatics:");
    scanf("%d",&m);
    printf("Enter the marks obtained in English:");
    scanf("%d",&e);
    printf("Enter the marks obtained in Hindi:");
    scanf("%d",&h);

    sum=p+c+m+e+h;
    per=sum/5;

    printf("Total marks = %d\n",sum);
    printf("Percentag = %d",per);
    
    return 0;
}