#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int size = str.size();
        int pos = 0;
        vector<int> res;
        for(int i=size-1;i>=0;i--){
            int root = pow(10,pos);
            if(str[i]!='0'){
                int value = root*(str[i]-'0');
                res.push_back(value);
            }
            pos++;
        }
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}