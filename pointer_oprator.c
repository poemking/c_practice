#include<stdio.h>

int main(void){
	int *ptr=0; //宣告int每次指標+1等於加四個位元組
		    //而宣告double時,等於每次加八個位元組

	printf("ptr 位置:%d\n", ptr);
	printf("ptr +1 :%d\n", ptr+1);
	printf("ptr +2 :%d\n",ptr+2);

	return 0;
}
