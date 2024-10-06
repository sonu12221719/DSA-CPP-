#include <bits/stdc++.h>
using namespace std;
/*
        1
       121
      12321
     1234321
*/
// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i+1;j++){
//             cout<<j<<" ";
//         }
//         for(int j=i;j>0;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




/*
       *
      * *
     *   *
    *     *
     *   *
      * *
       *
*/

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //first space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=0){
//             for(int j=0;j<(2*i-1);j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
    
//     //second half
//     for(int i=0;i<n-1;i++){
//         //space
//         for(int j=0;j<i+1;j++){
//             cout<<" ";
//         }
//         cout<<"*";

//         if(i!=n-2){
//             for(int j=1;j<=2*(n-i)-5;j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



/*
       *
      ***
     *****
    *******
     *****
      ***
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
        
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    //second half
    for(int i=0;i<n-1;i++){
        //space
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=2*(n-i)-3;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}