#include<stdio.h>

 int main(void) {
	 char *str="hello";
	void *add=0;

	add=str;
	printf("%s\t\ %X\n",str , add);
	
	str="world";
	add=str;
	printf("%s\t %X \n",str ,add);

	return 0;
}
/* 程式中使用一個字串常數,該字串常數會佔有一個記憶體空間.例如"hello","world"
   都各佔有一塊記憶體空間,所以程式str前後所指向記憶體位址並部相同*/
