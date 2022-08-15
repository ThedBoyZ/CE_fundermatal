#include<stdio.h>
int main(){
 int n;
  scanf("%d",&n);
 while(n!=0){
	for(int i=n;i>=1;i--){
	  printf("*"); 
    }
   printf("\n");
  n=n-1;
 }
 return 0;
}
