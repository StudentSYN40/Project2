#include<iostream>
#include<stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	printf("Введите первое число (a) = ");
	scanf("%i",&a);
	printf("Введите второе число (b) = ");
	scanf("%i",&b);
	if(a>b)
	{
		printf("a больше");
	}
	else
	{
		if(a==b)
		{
			printf("Равны");
		}
		else
		{
			printf("a меньше");
		}
	}
}