#include <iostream>
using namespace std;

void solve(){
    long long n,x;cin>>n>>x;
    bool dish=false;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long i=0;i<n;i++){
        if(arr[i]>=x){
            dish=true;
            break;
        }
    }
    if(!dish){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
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
