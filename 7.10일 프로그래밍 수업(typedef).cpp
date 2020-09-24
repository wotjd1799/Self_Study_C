#include<stdio.h>

typedef struct point{
	int x;
	int y;
	char a[10];
}point;

int main(){
	
	point pt1 = {1,2,"asdf"};
	printf("%d %d %s",pt1.x,pt1.y,pt1.a);
	
}
