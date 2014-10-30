#include<stdio.h>

int main(void){
	char *str="hello";
	//使用字元指標的好處是,可以直接使用指定運算子將一個字串常數
	 // 指定給字元指標
	puts(str);

	str="world";
	puts(str);

	return 0;
}
