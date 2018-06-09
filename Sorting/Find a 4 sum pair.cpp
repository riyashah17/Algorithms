#include <bits/stdc++.h>
using namespace std;
void fourSum(int arr[], int n, int sum){
    unordered_map<int, pair<int,int> > m;
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            m[arr[i]+arr[j]] = {arr[i],arr[j]};
	        }
	    }
	    
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            int y = arr[i]+arr[j];
	            //int x = sum - y;
	            if(m.find(sum-y)!=m.end()){
	                
	                pair<int,int> p = m[sum-y];
	                if((p.first)!=arr[i] && (p.first)!=arr[j] && (p.second)!=arr[i] && (p.second)!=arr[j]){
	                    cout<<arr[i]<<" "<<arr[j]<<" "<<p.first<<" "<<p.second<<"\n";
	                    return;
	                }
	            }
	        }
	    }
	    cout<<-1<<"\n";
}
int main() {
	int test;
	cin>>test;
	while(test--){
	    int n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    fourSum(arr,n,sum);
	    //cout<<"\n";
	}
	return 0;
}
