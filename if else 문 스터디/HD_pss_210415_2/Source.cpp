#include<stdio.h>
void main() {
	
	
	int i = 1;
	int input ;

	printf("1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n");
	printf("0�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");
	scanf_s("%d",&input);
	
	while (i <10) {
		printf("%d*%d=%d\n", input,i, input * i);
		i += 1;
	}
	if (input == 0) {
		printf("����");
		

	}

	else if (i > 9) {
		printf("Erorr");

	}

	else if (input > 9) {
					printf("Erorr");	
				}
	fgetc(stdin);
}