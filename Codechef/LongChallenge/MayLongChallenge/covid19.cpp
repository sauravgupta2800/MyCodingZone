#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
    	vector<int> left(n,1);
    	vector<int> right(n,1);
    	vector<int> res(n);
    	
    	for(int i=n-2;i>=0;i--){
    	    if((v[i+1]-v[i])<=2){
    	       right[i] += right[i+1]; 
    	    }
    	}
    	for(int i=1;i<n;i++){
    	    if((v[i]-v[i-1])<=2){
    	        left[i] += left[i-1];
    	    }
    	}
    	
    	int mini = n;
    	int maxi = 1;
    	for(int i=0;i<n;i++){
    	    //cout<<left[i]<<" "<<right[i]<<endl;
    	    int c=left[i]+right[i]-1;
    	    mini = min(mini,c);
    	    maxi = max(maxi,c);
    	}
    	
    	
    	cout<<mini<<" "<<maxi<<endl;
    }
    
}
