//Given a string and a pattern, Replace all the continuous occurrence of pattern with a single X in the string.
#include <bits/stdc++.h>
using namespace std;

bool compare(char* str, char* pattern)
{
    for (int i = 0; pattern[i]; i++)
        if (str[i] != pattern[i])
            return false;
    return true;
}
void replaceByX(string s, string pattern){
    int n1 = s.length();
    int n2 = pattern.length();
    
    if(n2==0)
        return;

    int i=0,j=0,count;
    while(s[j]){
        count = 0;
        while(compare(&s[j],&pattern[0])){
            j = j+n2;
            count++;
        }
        
        if(count>0){
            s[i]='X';
            i++;
        }
        
        if(s[j]){
            s[i]=s[j];
            i++;
            j++;
        }
    }
    s.erase(s.begin()+i,s.end());
    cout<<s<<"\n";
}
int main() {
	int test;
	cin>>test;
	while(test--){
	    string s, pattern;
	    cin>>s>>pattern;
	    replaceByX(s,pattern);
	}
	return 0;
}
