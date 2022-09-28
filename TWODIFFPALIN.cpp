#include <iostream>
using namespace std;
bool isEven(long long int x){
    if(x%2==0){
        return true;
    }
    return false;
}
void solve(){
    long long int a,b;cin>>a>>b;
    if(!isEven(a) && !isEven(b)){
        cout<<"No\n";
    }else{
        if(a>1 && b>1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
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
