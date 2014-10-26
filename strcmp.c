#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc ,char* argv[]) {
	char passwd[] = "123456";
	char input[7];

	printf("key the password:");
	gets(input);

	if(strcmp(passwd, input)==0) {
		puts("password right!");
	}
	else {
		puts("password error!");
	}
		return 0;
}
