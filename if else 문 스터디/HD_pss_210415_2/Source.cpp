#include<stdio.h>
void main() {
	
	
	int i = 1;
	int input =1;

	printf("1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n");
	printf("0�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");
	scanf_s("%d",&input);
	
	while (i <= 9) {
		printf("%d*%d=%d\n", input, i, input * i);
		i += 1;
		if (input == 0) {
			printf("����");
			break;
		}


		else if (i > 10) {
			printf("Erorr");

		}

		else (input > 10); {
			printf("Erorr");
		}input++;
	}
	fgetc(stdin);
}