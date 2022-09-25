#include<stdio.h>

float Square_root(int n)
{
    float remember,sqrt;
    sqrt = n / 2;
    while(sqrt != remember){
        remember = sqrt;
        sqrt = ( n/remember + remember) / 2;
    }
  return sqrt;
}

int main()
{
    int num;
    printf("Input number : ");
    scanf("%d", &num);
    printf("Square root from %d is %f ",num,Square_root(num));
}
