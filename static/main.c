#include<stdio.h>

 void count(void);

int main(void){
	int i;
	for(i=0; i<10 ; i++){
		count();

}
	return 0;
}

 void count(void){
	static  int c=1; //如果沒有宣告static 則每次函式跳進去c always =1
	printf("%d\n",c);
	c++;
}
