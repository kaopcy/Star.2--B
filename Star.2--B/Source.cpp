#include<stdio.h>
int loop_blank(int x, int i)
{
	int j;
	j = x;
	while (j > i)
	{
		printf(" ");
		j--;
	}
	return(0);
}
int loop_asterisk(int i)
{
	int k = 0;
	while (k <= i)
	{
		printf("*");
		k++;
	}
	return(0);
}
int main()
{
	int x, i = 0;
	printf("Enter pyramid height : ");
	scanf_s("%d", &x);
	while (i < x)
	{
		loop_blank(x, i);
		loop_asterisk(i);
		loop_asterisk(i);
		printf("\n");
		i++;
	}
}