#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{	
	srand(time(NULL));
	int N=7;
	int arr[N];

	for (int i=0;i<N;i++){
		arr[i]=rand()%9;
		printf("%d ", arr[i]);
	}

	return 0;
}
