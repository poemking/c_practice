#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc , char* argv[]) {
	char input[80];
	char tmp[80];

	puts("key in the string...");
	gets(input);
	strcpy(tmp,input);
	printf("copy all string:%s\n",tmp);

	//reset zero to all srting
	memset(tmp, '\0', sizeof(tmp));
	strncpy(tmp, input, 4);
	printf("copy part of string:%s\n",tmp);
	
	return 0;
}
