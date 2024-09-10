#include<bits/stdc++.h>
using namespace std; 


int fun1(vector<int>& v){
     int n = v.size();
     
     for(int i = 0; i < n; i++){
        int idx = abs(v[i]) - 1;

        v[idx] = - v[idx];
        
     }
     int i = 0;
     for( ;i<n;i++){
          if(v[i] > 0){
              break;
          }
     }

     if(i == n) return n+1;

     return i+1;
}  

int main()
{
    vector<int> arr = {5,2,3,4};
    
    cout << fun(arr);
    
    
return 0;
}