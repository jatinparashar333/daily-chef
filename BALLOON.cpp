#include <iostream>
#include<set>
using namespace std;

int main() {
	// your code goes here
	set<int> s;
	int t;cin>>t;
	while(t--){
	    
	    int n,k;cin>>n;
	    int arr[n];
	    int i;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>=1 && arr[i]<=7){
	            s.insert(arr[i]);
	            k=i+1;
	        }
	        
	        
	    }
	    cout<<k<<"\n";
	    s.clear();
	}
	return 0;
}
