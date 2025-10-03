#include<stdio.h>
#include<math.h>
int main()
{
    int pa,r,t,si,ci,x;     // p-principle amount, r-rate, t-time, si-simple intersts, ci-compound interest

    printf("Give the principle value :");
    scanf("%d",&pa);
    printf("Give the value of rate :");
    scanf("%d",&r);
    printf("Give the value of time :");
    scanf("%d",&t);

    si=(pa*r*t)/100;
    x=1+r/100;
    ci=pa*pow(x,t);

    printf("Your Simple Interest = %d\n",si);
    printf("Your Compound Interest = %d\n",ci);

    return 0;

}