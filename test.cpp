// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;

//   int i = 1;
//   int c =1;
//   while(i<=n){
//     int j = 1;
//     while(j<=n){
//       cout<<c<<"\t";
//       c=c+1;
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;

//   int i = 1;
//   while(i<=n){
//     int j = 1;
//     while(j<=n){
//       char ch = 'A'+i-1;
//       cout<<ch;
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }
#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int i = 1;
  char st ='A';
  while(i<=n){
    int j = 1;
    while(j<=n){
      cout<<st;
      st = st+1;
      j++;
    }
    cout<<endl;
    i++;
  }
}