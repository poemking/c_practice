#include<stdio.h>

int main(void){
	int var =10;
	int *ptr =&var;

	printf("變數 var 的位址:%X\n",&var);
	printf("變數 var 指向的位址:%X\n",ptr);
	//變數 var 的位址:5B07FC54
	//變數 var 指向的位址:5B07FC54
	//所使用的＆取出變數var所指向的記憶體位址,然後將這個位址指定給指標
	//ptr,因此ptr所儲存的值就與＆var值相同
	return 0;
}
