#include<iostream>
using namespace std;

long long int floorSqrt(int n)
{
    // Write your code here.
    int s=0;int e=n;
    long long int ans = -1;

    while(s<=e){
        long long int mid = s+(e-s)/2;
        long long int square = mid*mid;
        if(n==square){
            return mid;
        }
        else if(n>square){
            ans=mid;
            s= mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
    
}


int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    cout<<"square root of "<<n<<" is: "<<floorSqrt(n)<<endl;
}