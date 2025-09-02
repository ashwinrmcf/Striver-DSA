#include<bits/stdc++.h>
using namespace std;
bool checkRotateSorted(vector<int>& arr){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
      if(arr[i]>arr[(i+1)%n]){
        count++;
      }
    }
    return (count<=1);
}
int main(){
  vector<int> arr={5,6,7,3,5};
  if(checkRotateSorted(arr)){
    cout<<"Yes, its sorted and rotated"<<endl;
  }else{
    cout<<"No, its not sorted or rotated"<<endl;
  }
  return 0;
}