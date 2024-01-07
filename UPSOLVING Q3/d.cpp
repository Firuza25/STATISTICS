 #include<iostream>
 using namespace std;
 string dexToHex(int n){
  string s;
  string b="0123456789ABCDEF";
  while(n>0)
{
s=b[n%16] + s;
n/=16;
}
      return s;
}
 int main(){
  int n;
  cin>>n;
cout<<dexToHex(n);
 }





  
