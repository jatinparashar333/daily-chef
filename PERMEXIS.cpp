#include <bits/stdc++.h>
using namespace std;
bool func(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])>1){
            return false;
        }
    }
    return true;
}
void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(func(arr,n)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
