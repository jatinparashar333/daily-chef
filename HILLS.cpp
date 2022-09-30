#include <iostream>
using namespace std;
int func(int arr[],int n,int u,int d){
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        else if(arr[i]>arr[i+1]){
            if(arr[i]-arr[i+1]<=d){
                continue;
            }
            count+=1;
            if(count==1){
                continue;
            }
            return i+1;
        }
        else if(arr[i]<arr[i+1] && arr[i+1]-arr[i]<=u){
            continue;
        }
        return i+1;
    }
}
void solve(){
    int n,u,d;cin>>n>>u>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<func(arr,n,u,d)<<"\n";
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
