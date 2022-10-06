#include <iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string str="";
    bool alice=true;
    int i=0,j=n-1;
    while(i<=j){
        if(alice){
            char ch=s[i];
            if(ch=='1'){
                str+='1';
            }
            else{
                str.insert(0,"0");
            }
            i++;
        }
        else{
            char ch=s[j];
            if(ch=='0'){
                str+='0';
            }
            else{
                str.insert(0,"1");
            }
            j--;
        }
        alice=!alice;
    }
    cout<<str<<"\n";
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
