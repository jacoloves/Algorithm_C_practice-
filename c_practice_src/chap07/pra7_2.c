#include <stdio.h>

/*この式は次のチャプターで使う
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--) {
		putchar(((x >> i) & 1U) ? '1' : '0');
	}
}
*/

int main(void)
{
	unsigned a, n, ans, b;

	a = 1;
	n = 2;
	b = 4;
	ans = a << n;
	int ans2 = n * 2;
	int ans3 = 4 / n / n;

	//2のべき乗での乗算
	if (ans == ans2) {
		printf("2のべき乗での乗算が一致");
	}
	else {
		printf("一致せず");
	}
	printf("\n");

	//2のべき乗での除算
	if ((b >> n) == ans3) {
		printf("2のべき乗での除算が一致");
	}
	else {
		printf("一致せず");
	}
	printf("\n");

	return 0;
}