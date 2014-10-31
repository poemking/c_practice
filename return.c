#include<stdio.h>
#include<stdlib.h>

int* creatArray(int);
void deleteArray(int*);

int main(void){
	int m=0;

	printf("陣列大小: ");
	scanf("%d", &m);

	int *arr =creatArray(m);
	int i;

	for(i=0; i<m ;i++){
		arr[i]=i;
	}

	for(i=0; i<m ;i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	deleteArray(arr);

	return 0;
}

//傳回建立的矩陣位址
int* creatArray(int m){
	int *a=malloc(m * sizeof(int));
	
	int i;
	for(i=0 ; i<m ; i++){
		a[i]=0;
	}
		return a ;
}

void deleteArray(int* arr){
	free(arr);
}
