#include<stdio.h>
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
  detA = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]); 
   ////////////////////
  detB = b[0][0] * ((b[1][1]*b[2][2]) - (b[2][1]*b[1][2])) -b[0][1]*(b[1][0] * b[2][2] - b[2][0] * b[1][2]) + b[0][2] * (b[1][0] * b[2][1] - b[2][0] * b[1][1]); 
}
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
        for(int j=0;j<3;j++)
             printf("%d ",a[i][j]+b[i][j]);
         printf("\n");
     }
  printf("\nNegative of matrix (A and B) is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
             printf("%d ",a[i][j]-b[i][j]);
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
     int cross_P[3];
	 printf("Vect_A = {%d, %d, %d}\n",a[l][0],a[l][1], a[l][2]);
	 printf("Vect_A = {%d, %d, %d}\n\n",b[l][0],b[l][1], b[l][2]);
    cross_P[0] = a[l][1] * b[l][2] - a[l][2] * b[l][1];
    cross_P[1] = a[l][2] * b[l][0] - a[l][0] * b[l][2];
    cross_P[2] = a[l][0] * b[l][1] - a[l][1] * b[l][0];
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
