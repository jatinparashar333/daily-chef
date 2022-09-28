#include <iostream>
using namespace std;
string func(string s,int n){
    if(n<=2){
        return s;
    }
    string s1="";
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='0'){
            count+=1;
        }
    }
    if(count==0){
        return s;
    }
    for(int i=0;i<count;i++){
        s1+='0';
    }
    for(int i=count;i<n;i++){
        s1+='1';
    }
    return s1;
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    cout<<func(s,n)<<"\n";
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
