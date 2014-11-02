#include "math.h"

inline int mypow2(int num){
	return num * num ;
}

int mypow(int n , int p){
	int r=1;
	int i;
	for(i=0 ; i<p ; i++){
		r *=n;
	}
	return r ;
}
