#include <bits/stdc++.h>
using namespace std;

/*

        *
       * *
      * * *
     * * * *
    * * * * *
*/

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<"* ";

//         if(i!=0){
//             for(int j=0;j<=i-1;j++){
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
    * * * * *
     * * * *
      * * *
       * *
        *
*/

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<"* ";
//         for(int j=0;j<n-i-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
        *
       * *
      * * *
     * * * *
    * * * * *
     * * * *
      * * *
       * *
        *
*/

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<i;j++){
                cout<<" *";
            }
        }
        cout<<endl;
    }

    //second half
    for(int i=1;i<n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        // cout<<"*";
        for(int j=0;j<n-i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
    return 0;
}
