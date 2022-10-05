#include <iostream>
using namespace std;
void solve(){
    int n,s;cin>>n>>s;
    if(s<=n){
        cout<<s-0<<"\n";
    }
    else{
        cout<<2*n-s<<"\n";
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
