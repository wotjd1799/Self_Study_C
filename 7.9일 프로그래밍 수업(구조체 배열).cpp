#include <stdio.h>
#include <string.h>
/*
struct fruits{
	
	char fru[20];
	int price;
	
};

int main(){
	
	struct fruits fuc[3];
	int i;
	
	for ( i = 0 ; i < 3 ; i++ ){
		scanf("%s %d",fuc[i].fru,&fuc[i].price);
	}
	for ( i = 0 ; i < 3 ; i++ ){
		printf("%s %d(¿ø)\n",fuc[i].fru,fuc[i].price);
	}
	
	return 0;
}*/

struct ps{
	
	struct ps *next;
	int xyp;
	
};

int main(){
	
	struct ps loca;
	struct ps *ptr = &loca;
	
	scanf("%d %d", &ptr->xp, &ptr->yp);
	printf("%d %d", ptr->xp, ptr->yp);
	
	return 0;
}
