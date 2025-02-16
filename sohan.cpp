#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,string>m;

int t; cin>>t;
string r,p,q;
while(t--){
    cin>>p>>q>>r;
    if(p=="ADD"){
         m[q]=r;
    }
   else if(p=="LOGIN"){
        if(m[q]==r){
            cout<<"LOGGED IN"<<endl;
        }
        else{
            cout<<"ACCESS DENIED"<<endl;
        }
   }




}





return 0;


}
