#include<stdio.h>

#define MAX 100
int temp[MAX];
int steps = 0;

void mergeSort(int arr[],int left, int right);
void merge(int arr[], int left, int mid, int right);

int main(){
	int arr[5] = {4,3,5,1,7};
	mergeSort(arr, 0, 4);
	
	for(int ctr=0; ctr<5; ctr++){
		printf("%d | ",arr[ctr]);
	} 
	printf("\n\nNumber of steeps: %d",steps);
	return 0;
}

void mergeSort(int arr[], int left, int right){
	int mid = (left+right)/2;							steps += 6;
														steps += 3;
	if(left<right){
		mergeSort(arr, left, mid);						steps += 4;
		mergeSort(arr, mid+1, right);					steps += 5;
	}
	merge(arr, left, mid, right);						steps += 5;
}

void merge(int arr[], int left, int mid, int right){
	int x=left , y=mid+1, z=left;						steps += 10;
		/*copy*/										steps += 6;
		for(x=left; x<=right; x++){						steps += 5;
			temp[x] = arr[x];							steps += 9;
		}
		/*merge*/
		x=left;											steps += 3;
														steps += 7;
		while(x<=mid && y<=right){						steps += 7;
														steps += 9;
			if(temp[x]<temp[y]){						
				arr[z++] = temp[x++];					steps += 15;
			}else{
				arr[z++] = temp[y++];					steps += 15;
			}
		}
														steps += 3;
		if(y<=right){
			x=y;										steps += 3;
			mid = right;								steps += 3;
		}
														steps += 3;
		while(x<=mid){									steps += 3;
			arr[z++] = temp[x++]; 						steps += 15;
		}
}

