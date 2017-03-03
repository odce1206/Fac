#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
int j,i;
	for(i=0;i<10;i++){
	printf("Outer loop executing. i=%d\n",i);
	for(j=0;j<2;j++){
		printf("Inner looṕ executing. j=%d\n",j);
		if(i==3)
			goto stop;
	}
	}
	printf("Loop exited, i=%d\n",i);
	
	stop:
	printf("Jumped to stop, i=%d\n",i);
}
