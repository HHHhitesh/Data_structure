#include <iostream>
using namespace std;
void fixArray(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[j]==i){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			break;
				
			}
			
		}
		
	}
	for(i=0;i<n;i++){
		if(arr[i]!=i){
			arr[i]=-1;
		}
	}
	cout<<"arr after rearranging:"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}


int main() {
 int n, arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    n = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    fixArray(arr, n);
	return 0;
}