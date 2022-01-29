#include <stdio.h>

int arr[] = {1,4,5,2,8,9,3,23423,56,76,8,45,32,21,4,54,5,7,56,745,4231212,5,34,3,345,34};
int size = sizeof(arr)/sizeof(arr[0]);

void print(){
	printf("Sorted Array:-\n[ ");
	for(int i = 0;i<size;++i){
		printf("%d, ",arr[i]);
	}
	printf("\b\b ]\n");
}

void merge(int arr[],int a,int b,int c){
	int n1 = b-a+1,n2 = c-b,L[n1],R[n2];

	for(int i = 0;i<n1;++i){
		L[i] = arr[a+i];
	}

	for(int i = 0;i<n2;++i){
		R[i] = arr[b+1+i];
	}
	int i = 0,j = 0,k = a,f1 = 1,f2 = 1;

	while(i<n1 || j<n2){
		if(L[i]<R[j] && f1){
			arr[k] = L[i];++i;
			if(i==n1)f1 = 0;
		}else{
			if(f2){
				arr[k] = R[j];++j;
				if(n2==j)f2 = 0;
			}else{
				arr[k] = L[i];++i;
			}
		}
		++k;
	}

}

void mergeSort(int arr[],int a,int b){
	if(a<b){
		int m = a+(b-a)/2;
		mergeSort(arr,a,m);
		mergeSort(arr,m+1,b);
		merge(arr,a,m,b);
	}
}

int main(int argc, char const *argv[]){
	mergeSort(arr,0,size-1);
	print();
	return 0;
}