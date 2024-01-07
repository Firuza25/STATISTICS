#include <iostream>
using namespace std;

int main(){
int n,m,p;
cin>>n>>m>>p;
if (p==1)
{
    for(int i=0;i<10001;i++){
         int k=i*i;
    if(k>=n && k<=m){
        cout << k << " ";}
   
}}
if (p==-1)
{
    for(int i=10000;i>=0;i--){
         int k=i*i;
    if(k>=n && k<=m){
        cout << k << " ";}
   
}}
}
