#include <iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    bool check=false;
    char ch=s[n-1];
    for(int i=0;i<n-1;i++){
        if(s[i]==ch){
            check=true;
            break;
        }
    }
    if(check){
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
