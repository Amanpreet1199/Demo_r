/*PR:-26> Write a function to find the binary equivalent of a given decimal
integer and display it.*/

#include<stdio.h>

int main()
{
	int decimal_num, rem_array[10],i=0;
	printf("Enter a decimal number to find its binary equivalent : ");
	scanf("%d",&decimal_num);
	while(decimal_num>0)
	{
		rem_array[i] = decimal_num%2;
		decimal_num = decimal_num/2;
		i++;
	}
	i=i-1;
	printf("\n\nBinary number is : ");
	while(i>=0)
	{
		printf("%d",rem_array[i]);
		i--;
	}
	return 0;
}
