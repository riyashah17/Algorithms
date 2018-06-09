//Given two array A1[] and A2[], sort A1 in such a way that the relative order among the elements will be same as those  in A2. 
//For the elements not present in A2. Append them at last in sorted order. 
//It is also given that the number of elements in A2[] are smaller than or equal to number of elements in
//A1[] and A2[] has all distinct elements.
#include <bits/stdc++.h>
using namespace std;
int search(int a[],int a2,int m)
{   int count=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]==a2){count++;a[i]=0;}
    }
    return count;
    
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	int m,n;
	cin>>m>>n;
	int a1[m],a2;
	for(int i=0;i<m;i++)cin>>a1[i];
	for(int i=0;i<n;i++)
	{   int count=0;
	    cin>>a2;
	    count=search(a1,a2,m);
	    for(int j=0;j<count;j++)cout<<a2<<" ";
	}
	sort(a1,a1+m);
	for(int i=0;i<m;i++)
	{
	    if(a1[i]!=0)cout<<a1[i]<<" ";
	}
	cout<<"\n";
	}
	return 0;
}
