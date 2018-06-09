//Given an array A of size N, find all combination of four elements in the array whose sum is equal to a given value K. 
//For example, if the given array is {10, 2, 3, 4, 5, 9, 7, 8} and K = 23, one of the quadruple is “3 5 7 8” (3 + 5 + 7 + 8 = 23).
#include <bits/stdc++.h>
#include<set>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    int l,r;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    set<pair<int,pair<int,pair<int,int> > > >s;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            l=j+1;r=n-1;
            while(l<r)
            {
                if((a[i]+a[j]+a[l]+a[r])==k){
                    s.insert({a[i],{a[j],{a[l],a[r]}}});
                    l++;
                }
                else if((a[i]+a[j]+a[l]+a[r])<k)
                    l++;
                else
                    r--;
            }
        }
    }
     if(s.size()==0)
            cout<<-1;
        else{
        for(auto it=s.begin();it!=s.end();it++)
        cout<<it->first<<" "<<(it->second).first<<" "<<((it->second).second).first<<" "<<((it->second).second).second<<" $";
        }
        cout<<"\n";
}
}
