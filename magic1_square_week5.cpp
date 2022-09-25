#include <bits/stdc++.h>
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
using namespace std;
int main()
{
    int k,check=-1;
	cin >> k; 
	int num;
    int mat[k][k];
    for(int i=0;i<k;i++){
      for(int j=0;j<k;j++){
		  scanf("%d",&num);
		  mat[i][j]=num;
	  }
  }
    int n = my_sizeof(mat)/my_sizeof(mat[0]);
    int i=0,j=0;
    int sumd1 = 0, sumd2=0;
    for (i = 0; i < n; i++)
    {
        sumd1 += mat[i][i];
        sumd2 += mat[i][n-1-i];
    }
    if(sumd1!=sumd2)
         check=0;
    // For sums of Rows
    for (i = 0; i < n; i++) {
         
        int rowSum = 0, colSum = 0;   
        for (j = 0; j < n; j++)
        {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        if (rowSum != colSum || colSum != sumd1){
            check=0;
		}
        else
            check=1;
    }   
  
    if(check==1)
        cout << "Yes";
    if(check==0||check==-1)
        cout << "No";
     
    return 0;
}
