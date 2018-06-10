//Given an array of items, an i-th index element denotes the item id’s and given a number m, 
//the task is to remove m elements such that there should be minimum distinct id’s left.Print the number of distinct id’s.
#include <bits/stdc++.h>
using namespace std;
int minDistinctIds(int arr[],int n,int x){
    
    unordered_map <int,int> m;
    vector<pair<int,int>> v;
    
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    
    for(auto it = m.begin(); it!=m.end(); it++){
        v.push_back(make_pair(it->second,it->first));
    }
    sort(v.begin(),v.end());
    int size = v.size();
    int count=0;
    for(int i=0;i<size;i++){
        if(v[i].first<=x){
            x-=v[i].first;
            count++;
        }
    }
    
    return size-count;
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int x;
	    cin>>x;
	    int y = minDistinctIds(arr,n,x);
	    cout<<y<<"\n";
	}
	return 0;
}
