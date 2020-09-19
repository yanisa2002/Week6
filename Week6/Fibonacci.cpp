#include <stdio.h>

void fibonacci(int);

int main() {
	int n;
	printf("How many Fibonucci numbers? : ");
	scanf_s("%d", &n);
	printf("\n");
	fibonacci(n);
	printf("=================================\n");

	return 0;
}

void fibonacci(int n) {
	long int f1 = 1, f2 = 1, result;

	for (int count = 0; count <= n; ++count) {
		if (count == 0) f1 = 0;
		else result = (count < 3) ? 1 : f1 + f2;
		f2 = f1;
		f1 = result;
		printf("Fibonacci(%2d) = %1d\n", count, result);
	}
}