#include <stdio.h>

int main(){
	
	int a, b, c, t, ac = 0, bc = 0, cc = 0 ;
	
	scanf("%d",&t);
	
	while(1){
		
		if ( t % 10 != 0){
			printf("-1");
			return 0;
		}
		else if ( t >= 300 ){
			t -= 300;
			ac++;	
		}
		else if ( t >= 60 ){
			t -= 60;
			bc++;
		}
		else if ( t >= 10 ){
			t -= 10;
			cc++;
		}
		
		if ( t == 0 ) break;
	}
	
	printf("%d %d %d",ac,bc,cc);
	
	return 0;
}
