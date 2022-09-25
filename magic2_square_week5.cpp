#include<stdio.h>
int main()
{	
	int num;
	scanf("%d",&num);
	int matrix[num][num];
	int row, column;
	int diagonal_sum, row_sum, col_sum;
	int flag = 0;
	
	printf("Enter matrix of order :\n");
	for (row = 0; row < num; row++)
	{
		for (column = 0; column < num; column++)
			scanf("%d", &matrix[row][column]);
	}
	
	diagonal_sum = 0;
	for (row = 0; row < num; row++)
	{
		for (column = 0; column < num; column++)
		{
			if (row == column)
			diagonal_sum = diagonal_sum + matrix[row][column];
		}
	}
	
	for (row = 0; row < num; row++)
	{
		row_sum = 0;
		for (column = 0; column < num; column++)
		{
			row_sum = row_sum + matrix[row][column];
		}
		if (diagonal_sum == row_sum)
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	for (row = 0; row < num; row++)
	{
		col_sum = 0;
		for (column = 0; column < num; column++)
		{
			col_sum = col_sum + matrix[column][row];
		}
		if (diagonal_sum == col_sum)
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	
	if (flag == 1)
		printf("YES\n");
	else if(flag == 0)
		printf("NO\n");
}
