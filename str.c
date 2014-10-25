#include<stdio.h>

int main(void){
	char str[]="hello";
	int length=sizeof(str)/sizeof(str[0]);

	int i;
	for(i=0;i<length;i++){
	 if(!str[i])
	  printf("null");
 	 else
	 printf("%c",str[i]);
	}
	putchar('\n');
	return 0;
}
