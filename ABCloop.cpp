// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A'+n-i;

//         while(j<=i){
//            // char ch = 'A'+n-i;
//             cout<<ch;
//             ch = ch + 1;
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }

// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
    //spaces triangle 1st
    int space = n-i;
    while(space){
        cout<<" ";
        space = space -1;

    }
    //2nd numbers triangle
    int j = 1;
    while(j<=i){
        cout<<j;
        j++;
    }
    //3rd triangle
    int start = i -1;
    while(start){
        cout<<start;
        start = start -1;
    }

    cout<<endl;
    i++; 
    }
}