#include <iostream>
using namespace std;
int func(int arr[],int n){
    int sum=arr[0];
    if(sum==0){
        return 0;
    }
    for(int i=1;i<n;i++){
        sum+=arr[i];
        sum-=1;
        if(sum==0){
            return i;
        }
    }
    return n-1+sum;
    
}
void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<func(arr,n)<<"\n";
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
