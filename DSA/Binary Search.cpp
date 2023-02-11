
#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key) {
	int start =0;
	int end = size -1;
	int mid = start +( end - start)/2;
	while(start <= end) {
		if(arr[mid==key]) {
			return mid;
		}
		if(key>arr[mid]) {
			start = mid + 1;
		}
		else {
			end= mid-1;
		}
		mid = start + (end -start)/2;
	}
	return -1;
}
int main () {
	int even[4] ={2,4,6,8};
	int odd[3] = {1,3,5};
	int evenIndex= binarysearch(even,4,6);
	
	cout <<"Index of 6 is" << evenIndex<< endl;	
	int oddIndex= binarysearch(odd,3,5);
	cout <<"Index of 5 is" << oddIndex<< endl;
	
	return 0;
	}
