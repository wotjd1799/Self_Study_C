#include <stdio.h>
#include <string.h>
#define Max_size 10

int top = -1;
int stack[Max_size] = {0};

void Push();
void Pop();
void Stack();
int Full();
int Empty();

int main(){
	
	int data = 0, i;
	char what[5];
	
	for ( 1; 1; 1){
				
		printf("������ �����ϰ��� �ϴ� �Լ��� �����Ͻÿ�.\nPush\nPop\nStack\nStop\n");
		scanf("%s",&what);
		
		if ( !strcmp(what,"Push") || !strcmp(what,"push") || !strcmp(what,"PUSH")){
			printf("Push�� ����˴ϴ� : ");
			Push();
		}
		else if ( !strcmp(what,"Pop") || !strcmp(what,"pop") || !strcmp(what,"POP")){
			printf("Pop�� ����˴ϴ�.\n");
			Pop();
		}
		else if ( !strcmp(what,"Stack") || !strcmp(what,"stack") || !strcmp(what,"STACK")){
			printf("Stack�� ����˴ϴ�.\n");
			Stack();
		}
		else if ( !strcmp(what,"Stop") || !strcmp(what,"stop") || !strcmp(what,"STOP") ){
			printf("���α׷��� ����˴ϴ�.\n");
			break;
		}
		else{
			printf("qudtls\n");
		}
		
	}
	
	return 0;
} 
int Empty(){
	if ( top == -1) return 1;
	else return 0;
}

int Full(){
	if ( top >= 9 ) return 1;
	else return 0;
}

void Push(){
	int data;
	
	if ( Full() ){
		printf("Stack is Full!\n");
	}
	else {
		scanf("%d", &data);
		stack[++top] = data;
		printf("Data has been successfully pushed!\n");
	}
	
}

void Pop(){
	
	if ( Empty() ){
		printf("Stack is Empty!\n");
	} 
	else {
		printf("%d is the pop data.\n",stack[top]);
		stack[top--] = 0;
		printf("Pop has been successfully executed successfully executed!\n");
	}
	
}

void Stack(){
	
	int i;
	printf("Print the inside of the current stack.\n");
	
	for ( i = 0 ; i < Max_size ; i++ ){
		printf("%d ",stack[i]);
	}
	
	puts("");
	
}
