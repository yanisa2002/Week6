#include<stdio.h>

void pow(int , int);

int main() {
	int x, y;
	printf("Exponential Program\n");
	printf("Base : ");
	scanf_s("%d", &x);
	printf("power : ");
	scanf_s("%d", &y);

	if (x == 0) {
		printf("%d power %d = 1 ", x, y);
	}
	else {
		printf("%d^%d = ", x, y);
		pow(x, y);
	}

	return 0;
}

void pow(int base, int power) {
	int i;
	int result = 1;
	for (i = 1; i <= power; i++) {
		result = result * base;
	}
	printf("%d", result);
}