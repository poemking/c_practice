#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
	char source[80];
	char search[80];
	char *loc;

	printf("ket in string:");
	gets(source);   //ex: how old are you!

	printf("search the string:");
	gets(search);  //ex:old

	loc=strstr(source,search);
	//想知道字串在哪個索引位置,可利用該指標減去字串（字元陣列）開頭指標
	//得到的位移量即為符合的索引位置,從1開始算索引位置
	if(loc==NULL){
		printf("no found match string!\n");
	  }
	else{
		printf("index location %d find the string\n",loc-source);		
	}
		return 0;
}
