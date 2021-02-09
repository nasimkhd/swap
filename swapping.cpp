#include <stdio.h>

void swap(int *p, int *q) {
	int c;

	c= *q;
	*q = *p;
	*p = c;

}

int main(void) {

	int a, b;
	printf("a is: ");
	scanf_s("%d", &a);
	printf("b is:");
	scanf_s("%d", &b);

	swap(&a, &b);

	printf("after swap\n a is: %d \n b is: %d", a, b);
		

}

