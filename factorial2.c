#include<stdio.h>
int main()
{
 int number, sumfac=1;
  printf("Enter an integer : ");
  scanf("%d", &number);
   for(int i=number;i>=0;i--){
    if(i==0)
      sumfac = sumfac*1;
    else
      sumfac = sumfac*i;
   }
  if(number>=0)
    printf("factorial = %d",sumfac);
  else
    printf("factorial = Non define");
return 0;
}
