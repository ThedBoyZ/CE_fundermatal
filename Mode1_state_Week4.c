#include <stdio.h>

int mode(int c[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int cp = 0;
      
      for (j = 0; j < n; ++j) {
         if (c[j] == c[i])
         ++cp;
      }
      
      if (cp > maxCount) {
         maxCount = cp;
         maxValue = c[i];
      }
   }

   return maxValue;
}

int main() {
   int n = 10,num;
   int arr[10];
   for(int i=0;i<9;i++){
	 scanf("%d ",&num);
       arr[i] = num;
   }
   int c[] = {arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]};
   printf("Mode = %d ", mode(c,n));

   return 0;
}
