#include<stdio.h>

int main(void){
	int input=0;
	printf("key in the inter:");
	scanf("%d",&input);
	printf("Odd or Even?%s\n", ((input%2) ? "odd":"even"));

	return 0;
}
