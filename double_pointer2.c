#include<stdio.h>

int main(void){
	int p=10;
	int *ptr1=&p;
	int **ptr2=&ptr1;

	printf("p 的值: %d\n",p);
	printf("p的記憶體位置:%X\n\n", &p);

	printf("*ptr1 =%d\n", *ptr1);
	printf("ptr1 = %X\n", ptr1);
	printf("ptr1 的記憶體位址:%X\n\n", &ptr1);

	printf("**ptr2 = %d\n", **ptr2);
	printf("*ptr2 =%X\n\n", *ptr2);
	printf("ptr2 =%X\n\n", ptr2);

	printf("整理(誰儲存誰？):\n");
	printf("&p = %X\tptr1 = %X\n", &p , ptr1);
	printf("&ptr1 = %X\tptr2 = %X\n", &ptr1 , ptr2);
	
	return 0;
}

/*	p 的值: 10
	p的記憶體位置:940C215C

	*ptr1 =10
	ptr1 = 940C215C
	ptr1 的記憶體位址:940C2160

	**ptr2 = 10
	*ptr2 =940C215C

	ptr2 =940C2160

	整理(誰儲存誰？):
	&p = 940C215C    	ptr1 = 940C215C <==去抓p的記憶體位址
	&ptr1 = 940C2160	ptr2 = 940C2160 <==抓&ptr1的
	看到最後的整理中,ptr1儲存了p變數所佔有的位址,而ptr2則儲存了ptr1佔有
	的位址,所以當使用*取值運算子時,*ptr2取出的是*ptr1所儲存的值,也就是&p
	,而在一次使用*運算子,也就是**ptr2時,因為*ptr2==ptr1,
	so *(*ptr2)==*ptr1,而*ptr1==p,所以就是取出p值了

