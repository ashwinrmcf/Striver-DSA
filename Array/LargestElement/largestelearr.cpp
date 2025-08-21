#include<iostream>
using namespace std;
void largestArr(int arr[], int length){
  arr[length];
  int max=0;
  for(int i=0;i<length;i++){
    for(int j=0;j<length;j++){
      if(arr[i]>arr[j] && arr[i]>max){
        max=arr[i];
      }
    }
  }
  cout<<"The max element is:- "<<max;
}
int main(){
  int n;
  cout<<"Enter the size of the array:- ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements in the array:- ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  largestArr(arr,n);
  return 0;
}