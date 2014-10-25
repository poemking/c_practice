#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc , char* argv[]) {
	char str1[80]="xyz";
	char str2[]="abc";

	printf("before cat :%s\n",str1);

	strcat(str1,str2);
	printf("after cat :%s\n",str1);
	
	strncat(str1,str2,2);
	printf("after cat contain :%s\n",str1);
	
	return 0;
}
