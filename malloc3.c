#include<stdio.h>
#include<stdlib.h>

/*使用指標來模擬二維陣列,只要清楚二維陣列中的兩個維度的索引值之位移量
  就可以了*/

int main(void){
	int m=0;
	int n=0;
	
	printf("輸入二維陣列維度(m*n):");
	scanf("%d*%d", &m,&n);

	int *ptr = malloc(m * n * sizeof(int));
	//printf("%X",*ptr);
	int i,j;
	for(i=0 ; i<m ; i++){
		for(j=0 ; j<n ; j++){
		  *(ptr+n*i+j)=i+j;
		printf("%d\t",*(ptr+n*i+j));
		}
		putchar('\n');
	}

	free(ptr);
	return 0;
}
