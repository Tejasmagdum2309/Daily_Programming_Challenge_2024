#include<bits/stdc++.h>
using namespace std; 

void fun(vector<int>& v){
     int n = v.size();

     int l = 0;int r = n-1;int mid = 0;

     while (mid <= r)
     {
        if(v[mid] == 0){
             swap(v[mid],v[l]);
             l++;mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{
            swap(v[mid],v[r]);
            r--;
        }
     }
     
}

int main()
{

    vector<int> v = {0,1,2,1,0,2,1,0};

    fun(v);

    for(int i : v){
        cout<<i<<" ";
    }
 

    
return 0;
}