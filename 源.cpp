#include <stdio.h>
int main()
{
	int i, j, num;
	char c;
	printf("enter the core char you want to print(A...Z):");
	scanf_s("%c", &c);
	char ch = 'A';
	num = c - 'A' + 1;
	for (i = 1; i <= num; i++) {
		for (j = 0; j < num - i; j++)
			printf(" ");
		for (ch = 'A'; j < num; j++)
			printf("%c", ch++);
		for (j = 1, ch -= 2; j < i; j++, ch--)
			printf("%c", ch);
		printf("\n");


	}
	return 0;
}
