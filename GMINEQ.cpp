#include <iostream>
using namespace std;
bool check(int n,int num1,int num2){
    int left,right;
   if(num2-num1<=1){
       return true;
   }
   if(num2-num1==2 && num1%2==0 && num2%2==0){
       return true;
   }
   return false;
}
void solve(){
    int n;cin>>n;
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a>0){
            pos+=1;
        }
        else{
            neg+=1;
        }
    }
    if(check(n,min(pos,neg),max(pos,neg))){
        cout<<"Yes\n";
    }else{
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
