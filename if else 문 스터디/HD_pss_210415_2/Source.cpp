#include<stdio.h>
void main() {
	int i = 1;
	int j = 1;

	while (i <10) {
		int i = 1;
		printf("%d ��\n", i);
		printf("%d", i);
		while (j <=i) {
			int j = 1;
			printf("%d*%d=%d\n", i, j, i * j);
			j++;
		}
	}i++;

	printf("1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n");
	printf("0�� �Է��ϸ� ���α׷��� ����˴ϴ�.");
	printf("\n");
	
	
	fgetc(stdin);
}