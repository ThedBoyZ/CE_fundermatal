#include<stdio.h>
void crossProduct(int vect_A[], int vect_B[], int cross_P[])
{
  
    cross_P[0] = vect_A[1] * vect_B[2] - vect_A[2] * vect_B[1];
    cross_P[1] = vect_A[2] * vect_B[0] - vect_A[0] * vect_B[2];
    cross_P[2] = vect_A[0] * vect_B[1] - vect_A[1] * vect_B[0];
}
int Sumarray(int a,int b){
    return a+b;
}
int Negativearray(int c,int d){
    return c-d;
}

int main()
{
 int mul[3][3];
 float detA=0,detB=0;
printf("Enter Mateix A : \n");
 int a[3][3],b[3][3];
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   scanf("%d",&a[i][j]);
  }
}
printf("Enter Mateix B : \n");
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   scanf("%d",&b[i][j]);
  }
}
   for(int i=0;i<3;i++){
      detA = detA + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
      }
   //////////////////// DetA
  for(int i=0;i<3;i++){
      detB = detB + (b[0][i]*(b[1][(i+1)%3]*b[2][(i+2)%3] - b[1][(i+2)%3]*b[2][(i+1)%3]));
      } 
   /////////////////// DetB
printf("Det A = %.0f\n",detA );
printf("Det B = %.0f\n\n",detB );

 printf("\nInverse of matrix A is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
             printf("%.0f ",((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3]))/ detA);
         printf("\n");
     }
 printf("\nInverse of matrix B is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
             printf("%.0f ",((b[(j+1)%3][(i+1)%3] * b[(j+2)%3][(i+2)%3]) - (b[(j+1)%3][(i+2)%3]*b[(j+2)%3][(i+1)%3]))/ detB);
         printf("\n");
     }
  printf("\nSum of matrix (A and B) is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d ",Sumarray(a[i][j],b[i][j]));
	   }
      printf("\n");
     }
  printf("\nNegative of matrix (A and B) is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
             printf("%d ",Negativearray(a[i][j],b[i][j]));
         printf("\n");
     } 
 ////////////// Dot product /////////////
	for(int i=0;i<3;i++)    
	{    
	  for(int j=0;j<3;j++)    
		{    
		 mul[i][j]=0;    
		for(int k=0;k<3;k++)    
		 {    
			mul[i][j]+=a[i][k]*b[k][j];    
		 }
	   }
}    
  printf("\nDot product of matrix (A and B) is: \n");     
	for(int i=0;i<3;i++)    
	{    
	  for(int j=0;j<3;j++)    
	  {	    
		printf("%d ",mul[i][j]);    
	  }    
	printf("\n");    
	}        
 ////////////// Cross product /////////////
  printf("\nCross product of matrix (A cut and B cut) is: \n");
  for(int l=0;l<3;l++){
     int vect_A[] = { a[l][0],a[l][1], a[l][2] };
     int vect_B[] = { b[l][0],b[l][1], b[l][2] };
     int cross_P[3];
	 printf("Vect_A = {%d, %d, %d}\n",a[l][0],a[l][1], a[l][2]);
	 printf("Vect_A = {%d, %d, %d}\n\n",b[l][0],b[l][1], b[l][2]);
     crossProduct(vect_A, vect_B, cross_P);
       for(int i=0;i<3;i++){
		   if(i==0)
	        printf("%di ",cross_P[i]);
	       else if(i==1)
	        printf("%dj ",cross_P[i]);
	       else if(i==2)
	        printf("%dk ",cross_P[i]);
     }
     printf("\n");
    }
return 0;
}
