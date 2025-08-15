#include<iostream>
#include<vector>
using namespace std; // sort 0,1,2 using no sorting algoritham
int main(){
vector<int> arr = { 0, 1, 2, 0, 1, 2 };
int c1=0;
int c2=0;
int c3=0;
for(int i=0;i<arr.size();i++){    // first we have to count how much time 0,1,2 is coming and then we have to put in 
    // in the array by initialising int =idx;
    if(arr[i]==0) c1+=1;
    else if(arr[i]==1) c2+=1;
    else c3+=1;
}   
int idx=0;
for(int i=0;i<c1;i++){
    arr[idx++]=0;
}
for(int i=0;i<c2;i++){
    arr[idx++]=1;
}
for(int i=0;i<c2;i++){
    arr[idx++]=2;
}
    
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}