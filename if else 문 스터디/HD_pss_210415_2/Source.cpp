#include<stdio.h>
void main() {
	
	
	int i = 1, j = 0;
	int input = 0;

	printf("1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n");
	printf("0�� �Է��ϸ� ���α׷��� ����˴ϴ�.");
	scanf_s("%d\n",&input);
	
	
	
	while (true) {
		
			if (input == 0) {
				printf("����");
				
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