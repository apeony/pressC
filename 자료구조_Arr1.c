//#pragma warning(disable:4996)

#include <stdio.h>
#define col 3   // �迭�� �� ������ 
#define row 4   // �迭�� �� ������ 

int a[col][row];   //�迭�� ���������� ���� 

void arrayCreate( ){  // �迭�� �ʱⰪ �Է� �Լ� 
	int i,j;
	printf("�迭�� �ʱⰪ�� �Է��ϼ���. \n");
	
	for(i=0; i<col; i++){
		printf("\n");
		for(j=0; j<row; j++){
			printf("a[%d][%d] : ",i,j);			
			scanf("%d",&a[i][j]);
		}
	}
	printf("�迭�� �ʱⰪ�� �����Ǿ����ϴ�.\n\n");
}

void arrayPrint(){   //�迭 �� ��� �Լ� 
	int i,j;
	printf("2���� �迭�� �Էµ� ���� ������ �����ϴ�. \n\n");
	
	for(i=0; i<col; i++){
		printf("[ ");
		for(j=0; j<row; j++){
			printf("%5d", a[i][j]);
		}
		printf(" ]\n");
	}
}

void main() {  // ���� �Լ� 
	
	printf("�� ���α׷����� 2���� �迭�� ũ��� [%d][%d] �Դϴ�. \n",col,row);
    
	arrayCreate();
	arrayPrint(); 
		
	printf("The End.\n");	
}	

