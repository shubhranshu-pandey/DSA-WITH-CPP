#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element to be searched: "<<endl;
    cin>>x;
    int flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = 1;
    }
}
    if(flag==1){
        cout<<"Element found in array"<<endl;
    }
    else{
        cout<<"Element not found in array"<<endl;
    }
}