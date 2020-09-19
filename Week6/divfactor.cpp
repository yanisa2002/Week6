#include<stdio.h>

int Px(int);

int main()
{
    int num, i, k = 0;
    int a[10];
    printf("Enter Number : ");
    scanf_s("%d", &num);
    printf("\n");

    for (i = 1; i <= num; i++) {
        if (Px(i) == 1) {
            a[k++] = i;
            printf("%d ", i);
        }

    }
    printf("\n");
}

int Px(int x) {
    int i, sum = 0;
    for (i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    if (sum == x)return 1;
    else return 0;
}