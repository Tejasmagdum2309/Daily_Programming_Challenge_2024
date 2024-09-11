#include<bits/stdc++.h>
using namespace std; 
int fun(vector<int>& v){
     int n = v.size();
     int s = v[0];
     int f = v[0];

     while (1)
     {
        s = v[s];
        f = v[v[f]];

        if(s == f){
            break;
        } 
     }
     s = v[0];
     while(s != f ){
         s = v[s];
         f = v[f];
     }

     return s;
     


}

int main()
{
  vector<int> v = {3,3,3,4,3};

  cout<<fun(v);

    
return 0;
}