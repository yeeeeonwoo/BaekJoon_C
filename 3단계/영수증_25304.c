#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, n, a, b, sum = 0;
	scanf("%d", &x);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	if (x == sum) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}
