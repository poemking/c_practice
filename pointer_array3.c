#include<stdio.h>
#define LENGTH 5
int main(void){
	int arr[LENGTH]={10,20,30,40,50};
	int *ptr=arr;
	int i;

	//ptr以指標方式存取資料
	for(i=0; i<LENGTH ;i++){
		printf("*(ptr+ %d):%d\n",i ,*(ptr+ i));
	}
	putchar('\n');

	//ptr以陣列方式存取資料
	for(i=0; i<LENGTH ;i++){
		printf("ptr[%d]: %d\n", i , ptr[i]);
	}
	putchar('\n');


	//arr以指標方式存取資料
	for(i=0; i<LENGTH ;i++){
		printf("*(arr+ %d):%d\n",i ,*(arr+ i));
	}
	putchar('\n');

	//arr以陣列方式存取資料
	for(i=0; i<LENGTH ;i++){
		printf("arr[%d]: %d\n", i , arr[i]);
	}
	putchar('\n');
		return 0;
}
