#include <bits/stdc++.h>
using namespace std;
bool func(string n){
    
    int size=n.size(),one=0,zero=0;
    for(int i=0;i<size;i++){
        if(n[i]=='1'){
            one+=1;
        }
        else{
            zero+=1;
        }
    }
    if(one==size-1 || zero==size-1){
        return true;
    }return false;
}
void solve(){
    string n;cin>>n;
    if(func(n)){
       cout<<"Yes\n"; 
    }
    else{
        cout<<"No\n";
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
