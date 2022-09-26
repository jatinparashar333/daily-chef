#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    string s;
	    cin>>s;
    int n=s.size();
    string ls="",rs="";
    rs+=s[n-1];
    for(int i=0;i<n-1;i++){
        rs+=s[i];
    }
    for(int i=1;i<n;i++){
        ls+=s[i];
    }
    ls+=s[0];
    if(ls==rs){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
	}
	return 0;
}
