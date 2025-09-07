#include<bits/stdc++.h>
using namespace std;
void rotateArrleft1(int arr[],int length){
  int temp=arr[0];
  for(int i=0;i<length-1;i++){
    arr[i]=arr[i+1];
  }
  arr[length-1]=temp;
  for(int i=0;i<length;i++){
    cout<<arr[i]<<" ";
  }
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
  cout<<"The rotated array left by 1:- ";
  rotateArrleft1(arr,n);
}