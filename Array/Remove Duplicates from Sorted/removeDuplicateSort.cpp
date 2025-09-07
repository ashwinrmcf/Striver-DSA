#include<iostream>
using namespace std;
bool isSorted(int arr[], int length) {
    for (int i=0;i<length-1;i++) {
        if (arr[i]>arr[i+1]) {
            return false;
        }
    }
    return true;
}
int removeDuplicates(int arr[],int length){
  if(length==0 || length==1)return length;
  int j=0;
  for(int i=0;i<length-1;i++){
      if(arr[i]!=arr[i+1]){
          arr[j++]=arr[i];
      }
  }
  arr[j++]=arr[length-1];
  return j;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (!isSorted(arr,n)) {
        cout<<"Array is unsorted!!";
        return 0;
    }
    int newLength=removeDuplicates(arr,n);
    cout<<"Array after removing duplicates:- ";
    for (int i=0;i<newLength;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}