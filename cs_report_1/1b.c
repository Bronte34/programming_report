#include <stdio.h>

int func1(int);

int func0(int num)
{
	int temp;

	if (num == 0)
		return 111;

	else if (num == 1)

		return 999;
	else 
		return (func0(num - 2) + func1(num - 1)) / 2;
}

int func1(int num)
{
	if (num == 0)
		return 222;

	else if (num == 1)
		return 888;
	
	else 
		return (func1(num - 2) + func0(num - 1)) / 2;
}

int calc_func0_plus_func1(int i)
{
	if (func0(i) + func1(i) == func0(i + 1) + func1(i + 1)) {
		printf("w[%d] = %d\n", i, func0(i) + func1(i));
		return 0;
	}
	return 1;
}

int loop(int i, int (*calc_func0_plus_func1)(int))
{
	if (calc_func0_plus_func1(i))
		loop(i + 1, calc_func0_plus_func1);
}

int main(void)
{
	int i = 1;
	loop(i, calc_func0_plus_func1);
}
