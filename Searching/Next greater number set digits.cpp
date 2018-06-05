//Given a number n, find the smallest number that has same set of digits as n and is greater than n. 
//If x is the greatest possible number with its set of digits, then print “not possible”.
#include <bits/stdc++.h>
using namespace std;

void swap_num(char *a,char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void nextGreater(string s,int n){
    //int n = strlen(s);
    int i,j;
    for(i=n-1;i>0;i--){
        if(s[i]>s[i-1])
            break;
    }
    
    if (i==0){
        cout<<"not possible";
        return;
    }
    
    int smallest = i;
    int num = s[i-1];
    for(j=i+1;j<n;j++){
        if(s[j]>num && s[j]<s[smallest])
            smallest = j;
    }
    
    swap_num(&s[i-1],&s[smallest]);
    sort(s.begin()+i,s.begin()+n);
    cout<<s;
}
int main() {
	int test;
	cin>>test;
	while(test--){
	    string s;
	    cin>>s;
	    //cout<<s;
	    int n = s.length();
	    nextGreater(s,n);
	    cout<<endl;
	}
	return 0;
}
