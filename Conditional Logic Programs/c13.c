//WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
int main()
{
	int num1,num2,num3,min;
	printf("\n Enter The Number:");
	scanf("%d",&num1);
	printf("\n Enter The Number:");
	scanf("%d",&num2);
	printf("\n Enter The Number:");
	scanf("%d",&num3);
	min=(num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);
	printf("\n %d:",min);
	return 0;
}
