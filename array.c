#include<stdio.h>
#define ROW 5
#define COLUMN 10

int main(void){
	int iarr[ROW][COLUMN];
	int i,j;

	for(i=0 ; i <ROW ; i++){
	 for(j=0 ; j<COLUMN ; j++){
	  iarr[i][j]=(i+1) * (j+1);
	  printf("%d\n",iarr[i][j]);
	 }
	}
	//for(i=0; i< ROW;i++)	
}
