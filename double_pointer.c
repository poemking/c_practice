#include<stdio.h>

int main(void){
	int p= 10;
	int *ptr=&p;

	printf("p 的值:%d\n", p);
	printf("p 的記憶體位址:%d\n",&p);
	printf("*ptr參照的值:%d\n", *ptr);
	
	printf("ptr 儲存的位址值:%X\n", ptr);
	printf("ptr 的記憶體位址:%X\n", &ptr);

	return 0;
}
/*	p 的值:10
	p 的記憶體位址:1611138164
	*ptr參照的值:10
	ptr 儲存的位址值:60080474
	ptr 的記憶體位址:60080478
	可以知道ptr在記憶體中的60080478佔據空間,並儲存60080474這個值
	1611138164也就是p在記憶體儲存的位置,該位置的值為10
