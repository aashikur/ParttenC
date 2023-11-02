#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pY cout<<"YES\n"
#define pN cout<<"NO\n"


int main(){

    
    int line = 6;
    int code = 0;
    vector <string> v;

    while(line--){
        string s;
       getline(cin,s);
        v.push_back(s);
    }

    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[i].size();j++)
            v[i][j] = v[i][j] + code;

        cout << v[i] << endl;
    }

 
}
