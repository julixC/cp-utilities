#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> quebra(string entrada){
    
    string temp = "";
    vector<int> res;
    
    for(int i = 0; i < (int)entrada.size(); i++){
        if(entrada[i] > '9' or entrada[i] < '0'){
            if(temp == "") continue;
            res.push_back(stoi(temp));
            temp = "";
        }
        else temp.push_back(entrada[i]);
    }
    
    res.push_back(stoi(temp));
    return res;
}

signed main(){
    string linha;
    
    priority_queue<int> a, b;
    int res = 0;
    
    while(getline(cin, linha)){
        vector<int> novo = quebra(linha);
        a.push(novo[0]);
        b.push(novo[1]);
    }
    
    while(!a.empty()){
        int x = a.top(), y = b.top();
        a.pop();
        b.pop();
        
        res += abs(x - y);
    }
    
    cout << res << endl;
}#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> quebra(string entrada){
    
    string temp = "";
    vector<int> res;
    
    for(int i = 0; i < (int)entrada.size(); i++){
        if(entrada[i] > '9' or entrada[i] < '0'){
            if(temp == "") continue;
            res.push_back(stoi(temp));
            temp = "";
        }
        else temp.push_back(entrada[i]);
    }
    
    res.push_back(stoi(temp));
    return res;
}

signed main(){
    string linha;
    
    priority_queue<int> a, b;
    int res = 0;
    
    while(getline(cin, linha)){
        vector<int> novo = quebra(linha);
        a.push(novo[0]);
        b.push(novo[1]);
    }
    
    while(!a.empty()){
        int x = a.top(), y = b.top();
        a.pop();
        b.pop();
        
        res += abs(x - y);
    }
    
    cout << res << endl;
}