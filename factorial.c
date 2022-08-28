#include<stdio.h>
int fac(int a){
	if(a==0)
	  return 1;
	else
      return a*fac(a-1);
}
int main()
{
 int number;
  printf("Enter an integer : ");
  scanf("%d", &number);
  printf("factorial = %d",fac(number));
return 0;
}
