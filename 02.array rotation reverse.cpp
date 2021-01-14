#include <iostream>
using namespace std;
//function to reverse array to start to end index
void reverseArray(int arr[],int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
/*function to reverse array : group A and group B
group A should start to d-1 and group B should d to end
group A use function reverse array
group B use function reverse array
group A+B use function reverse array
*/
void leftRotate(int arr[],int d,int n)
{
	if(d==0)
		return;
	d=d%n;
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}
//print array
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}



// function call in main 

int main() {
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	leftRotate(arr,2,n);
	printArray(arr,n);
	
	return 0;
}