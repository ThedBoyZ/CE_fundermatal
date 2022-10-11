#include<stdio.h>
int main()
{
float sqrt,sf;
float num;
sf=0.000001; // shiff
printf("Input number : ");
scanf("%f",&num);

for(sqrt=0;sqrt<num;sqrt=sqrt+sf)
{
 if((sqrt*sqrt)>num)
 {
  sqrt=sqrt-sf;
  break;
 }
}
printf("Square root from %f is %f",num,sqrt);
return 1;
}
