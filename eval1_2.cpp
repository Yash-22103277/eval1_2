#include<bits/stdc++.h>

using namespace std;


bool vc(map<char,int> m, char a){
    for(auto x: m){
        if(x.first == a){
            return true;
        }
        else{
            return false;
        }
    }

}

int main(){

    string s;
    getline(cin, s);

    map<char,int> res;

    for(int i=0; i<s.size(); i++){
        for(int j=0; j<s.size(); j++){

            if(s[i] == ' ' || s[j] == ' '){
                continue;
            }

            if(s[i] == s[j] && !vc(res,s[i])){
                res[s[i]]++;

            }
            else{continue;}
        }
    }

    for(auto x: res){
        cout<<x.first<<" "<<x.second<<endl;
    }



}
