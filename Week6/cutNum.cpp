#include <stdio.h>
#include <string.h>

main() {
	char input[100];
	scanf_s("%s", input);
	int j = 0;

	for (int i = 1; i < strlen(input); i++) {
		if (input[i] != input[j]) {
			input[++j] = input[i];
		}
	}
	for (int i = 0; i <= j; i++) {
		printf("%c", input[i]);
	}
}