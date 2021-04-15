#include<stdio.h>
void main() {
	int i = 1;
	int j = 1;

	while (i <10) {
		int i = 1;
		printf("%d 단\n", i);
		printf("%d", i);
		while (j <=i) {
			int j = 1;
			printf("%d*%d=%d\n", i, j, i * j);
			j++;
		}
	}i++;

	printf("1~9의 수를 입력하면 구구단이 출력됩니다.\n");
	printf("0을 입력하면 프로그램이 종료됩니다.");
	printf("\n");
	
	
	fgetc(stdin);
}