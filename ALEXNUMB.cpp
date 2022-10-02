#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int n;cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    n-=1;
    cout<<n*(n+1)/2<<"\n";
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
