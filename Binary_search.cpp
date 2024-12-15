// Binary Search 

#include <iostream>
using namespace std;

int binarySearch(int arr[], int k, int low, int high) {
  
	
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == k)
      return mid;

    if (arr[mid] < k)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
 int n,k;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in this array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search:"<<endl;
    cin>>k;
 
  int result = binarySearch(arr, k, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}