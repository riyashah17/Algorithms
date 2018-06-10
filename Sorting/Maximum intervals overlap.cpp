//Consider a big party where a log register for guest’s entry and exit times is maintained. 
//Find the time at which there are maximum guests in the party. Note that entries in register are not in any order.
#include <bits/stdc++.h>
using namespace std;
void maxIntervalOverlap(int entry[], int exit[], int n){
    
    sort(entry,entry+n);
    sort(exit,exit+n);
    int guests=1, max_guests=1, time;
    int i=1,j=0;
    
    while(i<n && j<n){
        
        if(entry[i]<=exit[j]){
            guests++;
            
            if(guests>max_guests){
                max_guests = guests;
                time = entry[i];
            }
            i++;
        }
        else{
            guests--;
            j--;
        }
    }
    cout<<max_guests<<" "<<time<<"\n";
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int entry[n],exit[n];
	    for(int i=0;i<n;i++){
	        cin>>entry[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>exit[i];
	    }
	    
	    maxIntervalOverlap(entry,exit,n);
	}
	return 0;
}
