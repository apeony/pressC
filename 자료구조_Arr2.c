//#pragma warning(disable:4996)

#include <stdio.h>
#define array_size 5     // �迭�� ����� �̸� ���� 

int a[array_size];   //�迭�� ���������� ���� 

void arrayCreate( ){  // �迭�� �ʱⰪ �Է� �Լ� 
	int i;
	for(i=0; i<array_size; i++){
		printf("�迭�� �ʱⰪ�� �Է��ϼ���. a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("�迭�� �ʱⰪ�� �����Ǿ����ϴ�.\n\n");
}

void retrieve() {  // ����ڰ� �Է��� �迭 ��ġ���� �˷��ִ� �Լ� 
	int s;
	
	printf("���� �˰��� �ϴ� �迭 ��ġ���� �Է��ϼ���(0~4) : ");
	scanf("%d", &s);
	
	if(s>=0 && s<array_size) {
		printf("a[%d] ��° ��ġ�� �ִ� ���� %d �Դϴ�.\n\n", s,a[s]);

	}
	else { 
		printf("Error \n");
	}
}

void arraySearch(){  // ����ڰ� ã���� �ϴ� ���� �˻����ִ� �Լ� 
	int i;
	int result=0;
	int value=0;
	printf("�Է��� �� �߿��� �˻��ϰ��� �ϴ� ���� �Է��ϼ��� :  ");
	
	scanf("%d", &value);
	
	for(i=0; i<array_size; i++){
		if(a[i]==value) {
			printf("�迭 a[%d]��°�� %d ���� �˻��Ǿ����ϴ�.\n", i, value);
			result=1;
		}
	}
	if(result==0)printf("ã���� �ϴ� ���� �����ϴ�.\n");
}

void main() {  // ���� �Լ� 
	
	printf("�� ���α׷����� �迭�� ũ��� %d �Դϴ�. \n",array_size);
    
	arrayCreate(); 
	retrieve();
	arraySearch();
	
	printf("The End.\n");	
}	

