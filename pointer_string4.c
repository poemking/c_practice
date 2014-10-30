#include<stdio.h>

int main(void){
	char *str[][2] = {"professor", "Justin", 
			  "teacher", "Momor" ,
			  "student", "Caterpillar"};

	int i;
	for(i=0 ; i<3 ; i++){
		printf("%s: %s\n", str[i][0] , str[i][1] );
	}
		return 0;
}
