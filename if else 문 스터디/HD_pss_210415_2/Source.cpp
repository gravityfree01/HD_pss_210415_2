#include<stdio.h>
void main() {
	
	
	int i = 1, j = 0;
	int input = 0;

	printf("1~9의 수를 입력하면 구구단이 출력됩니다.\n");
	printf("0을 입력하면 프로그램이 종료됩니다.");
	scanf_s("%d\n",&input);
	
	
	
	while (true) {
		
			if (input == 0) {
				printf("종료");
				
			}
			else if (input==1) {
				j++;
				if(j>9){
					i++;
					j = 1;
					printf("\n");
			}
				if (i > 9) {
					printf("Erorr");
					
				}
				
				else {
					i = input;
					j++;
					if (j > 9) 
					printf("Erorr");
						
				}

			printf("%d*%d=%d", i, j, (i*j));
		}
		
	}

	fgetc(stdin);
}