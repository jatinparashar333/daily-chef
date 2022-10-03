#include <iostream>
using namespace std;
bool one(int a,int b,int c,int d){
    if(a==0 || b==0 || c==0 || d==0){
        return true;
    }
    return false;
}
bool two(int a,int b,int c,int d){
    if(a+b==0 || a+c==0 || a+d==0 || b+c==0 || b+d==0 || c+d==0){
        return true;
    }
    return false;
}
bool three(int a,int b,int c,int d){
    if(a+b+c==0 || a+b+d==0 || a+c+d==0 || b+c+d==0){
        return true;
    }
    return false;
}
bool four(int a,int b,int c,int d){
    if(a+b+c+d==0){
        return true;
    }
    return false;
}
void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(one(a,b,c,d)||two(a,b,c,d)||three(a,b,c,d)||four(a,b,c,d)){
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
