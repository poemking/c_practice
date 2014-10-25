#include<stdio.h>

int main(void){
	int score=0;
	int level=0;

	printf("key in socre:");
	scanf("%d",&score);
	level=score/10;
	/*	
	switch(level){
	case 10:
	case 9:
	  puts("get A");
	  break;
	case 8:
	  puts("get B");
	  break;
	case 7:
	  puts("get C");
	  break;
	default:
	  puts("no pass!");

	}
	*/ //show only switch
	switch(level){
	case 1 ... 10:
	  puts("get A");
	  break;
	case 11 ... 20:
	  puts("get B");
	 break;
	default:
	  puts("no pass!");
	}
	return 0;
}
