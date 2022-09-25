#include<stdio.h>
void average(int sum){ 
  float ave;
    ave=sum/10;
   printf("\nAverage is = %.2f",ave);
}

int main()
{
 int n,sum=0,mem[10];
for(int i=0;i<10;i++){
	scanf("%d",&n);
   mem[i]=n;
  sum=sum+n;
}
printf("\nThe high (talls) of students\n");
for(int j=0;j<10;j++){
  printf("%d ",mem[j]);
}
average(sum);
return 0;
}
