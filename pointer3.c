#include<stdio.h>

int main(void){
	int var=10;
	int *ptr=&var;

	printf("var =%d\n", var);
	printf("*ptr = %d\n", *ptr);
	//var =10
	//*ptr=10
	*ptr=20;

	printf("var = %d\n",var);
	printf("*ptr = %d\n",*ptr);
	//var=20
	//*ptr=20
	//指標ptr所儲存的值與變數var所指向的記憶體位置相同時,當對*ptr進行
	//指定動作的時候,就會將值直接存入該記憶體位址,因此在透過變數var
	//所取出來的值也就改變了
}

