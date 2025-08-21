#include<iostream>
#include<climits>
using namespace std;
void secondlargarr(int arr[],int length){
  int secmax=INT_MIN,max=INT_MIN;
  for(int i=0;i<length;i++){
     if(arr[i]>max){
         secmax=max;
         max=arr[i];
     }
     else if(arr[i]>secmax && arr[i]!=max){
       secmax=arr[i];
     }
  }
  if(secmax==INT_MIN){
      cout<<"No second largest element";
  }
  else{
      cout<<"The second largest element is "<<secmax;
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
    secondlargarr(arr,n);
    return 0;
}
