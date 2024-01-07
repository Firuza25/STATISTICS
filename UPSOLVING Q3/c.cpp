#include <iostream>
using namespace std; 
  
int gcd(int a, int b){ 
    int r = a % b; 
    if(r == 0){ 
        return b; 
    } 
    else{ 
        return gcd(b, r); 
    } 
} 
 
int main() 
{ 
    int n; 
    cin>>n; 
    int arr[100]; 
    for(int i=0; i<n; i++){ 
        cin>>arr[i]; 
    } 
    int largest=1; 
    for(int i=0; i<n; i++){ 
        for(int j=i+1; j<n; j++){ 
            largest=max(largest, gcd(arr[i], arr[j])); 
        } 
    } 
    cout<<largest; 
}
