#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int size = 10;
	int arr[size];
	int i,temp,j;
	
	for(i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	for(i = 1;i < size;i++){		// i = 1  i < size
		for(j = 0;j < size-i;j++){     // j = 0    j < size-i
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	return EXIT_SUCCESS;
}
