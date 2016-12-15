#include <stdio.h>

int main(void){
	int a = 0, b = 0;
	printf("Give the first number\n");
	scanf("%d", &a);
	printf("Give the second number\n");
	scanf("%d", &b);
	int c = a + b;
	printf("%d + %d = %d\n", a, b, c);	
	return 0;
}
