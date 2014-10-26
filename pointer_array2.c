#include<stdio.h>
#define LENGTH 10

int main(void){
	int arr[LENGTH]={0};
	int *ptr=arr;
	int i;

	for(i=0;i<LENGTH;i++){
	  printf("&arr[%d]:%X", i, &arr[i]);
	  printf("\t\tprt + %d: %X\n",i , ptr+i);
	 //陣列的索引其實是相對於第一個記憶體位址的位移量,印出這個程式
	 //以指標運算與陣列索引操作,顯示出相同位址值
	}
	  return 0;
}
