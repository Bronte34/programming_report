#include <stdio.h>

int main(void)
{
	int num1 = 111, num2 = 222, num3 = 999, num4 = 888;
	int i = 2;

	printf("w[1] = %d\n", num3 + num4);
	while (num1 + num2 != num3 + num4) {
		if (i % 2 == 0) {
			num1 = (num1 + num4) / 2;
			num2 = (num2 + num3) / 2;
			printf("w[%d] = %d\n", i++, num1 + num2);
		} else {
			num3 = (num3 + num2) / 2;
			num4 = (num4 + num1) / 2;
			printf("w[%d] = %d\n", i++, num3 + num4);
		}
	}
	return 0;
}
