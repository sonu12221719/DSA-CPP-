#include <bits/stdc++.h>
using namespace std;


/*
    1
    21
    321
    4321
*/

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



/*
    1111
     222
      33
       4
*/
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<n;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}