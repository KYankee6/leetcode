#include <bits/stdc++.h>
using namespace std;

int partitionString(string s) {
    int answer=0;
    vector<bool> check(30,false);
    for(int i=0; i<s.length(); i++){
        if(check[s[i]-'a']){
            answer++;
            fill(check.begin(), check.end(), false);
        }
        else{
            check[s[i]-'a']=true;
        }
    }
    return answer+1;
    
}

int main(){
    return partitionString("abacaba");
}