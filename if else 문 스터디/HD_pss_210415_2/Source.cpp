#include<stdio.h>
void main() {
	
	
	int i = 1;
	int input =1;

	printf("1~9의 수를 입력하면 구구단이 출력됩니다.\n");
	printf("0을 입력하면 프로그램이 종료됩니다.\n");
	scanf_s("%d",&input);
	
	while (i <= 9) {
		printf("%d*%d=%d\n", input, i, input * i);
		i += 1;
		if (input == 0) {
			printf("종료");
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