#include <iostream>
using namespace std;
bool Truth(string s){
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            return false;
        } 
    }
    return true;
}
int main(){
    string s;
    while(cin>>s){
        if(Truth(s)){
            cout<<s<<endl;
        }
    }
}