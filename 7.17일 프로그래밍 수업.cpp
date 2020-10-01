#include <stdio.h>

void fuc( int *nptr ){
	(*nptr)++;
}

int main(){
	
	int n;
	scanf("%d",&n);
	
	fuc(&n);
	
	printf("%d",n);
	
	return 0;
}
