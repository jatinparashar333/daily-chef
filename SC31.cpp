#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s="0000000000";
    for(int i=0;i<n;i++){
        string s1;cin>>s1;
        for(int i=0;i<9;i++){
            int x=s[i]-'0',y=s1[i]-'0';
            s[i]=char(x^y);
        }
    }
    int count=0;
    for(int i=0;i<9;i++){
        if(s[i]=='1'){
            count+=1;
        }
    }
    cout<<count<<"\n";
}

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
