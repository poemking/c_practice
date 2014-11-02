#include<stdio.h>

int main(void) {
	extern double someVar;

	printf("%f\n",someVar);

	return 0;
}

/*若要重新定義extern變數,並賦予其值,下面的方式才是正確的：
	#include<stdio.h>
	int main(void){
		extern double someVar;//不可以直接給予值在這	
		someVar =100;
		...
		return 0;
	} */
