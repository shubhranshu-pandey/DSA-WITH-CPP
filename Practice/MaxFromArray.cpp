// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,4,5,6,99};
//     int max = arr[0];
//     for(int i=1;i<6;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Maximum element in array is: "<<max<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array length"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max element: "<<max;
}

