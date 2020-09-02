#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include<fstream>  
using namespace std; 
typedef long long ll; 
typedef long double ld; 

int ceil(int a, int m){
    // division of a and m
    if(a % m == 0){
        return a/m; 
    }
    else{
        return a/m + 1; 
    }
}

vector<int> sort(vector<int> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}

int minInVector(vector<int> arr){
    int mins = 1e9; 
    for(int i = 0; i<arr.size(); i++){
        mins = min(mins, arr[i]); 
    }
    return mins; 
}

int maxInVector(vector<int> arr){
    int maxs = -1; 
    for(int i = 0; i<arr.size(); i++){
        maxs = max(maxs, arr[i]); 
    }
    return maxs; 
}

bool checkElement(vector<int> arr, int k){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == k){
            return true; 
        }
    }
    return false; 
}





int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/


int n; 
cin >> n; 
vector<pair<string, int> > ins; 



for(int i = 0; i<n; i++){
    string s; 
    cin >> s;   
    bool ok = false; 

    for(int j = 0; j<ins.size(); j++){
        if(ins[j].first == s) ok = true; 
    }

    if(!ok){
        cout << "OK" << nl;
        ins.push_back(make_pair(s, 0)); 
    }
    else{
            int index = 0; 
        for(int j = 0; j<ins.size(); j++){
            if(ins[j].first == s){
                index = j; 
            }
        }


        ins[index].second++;

        cout << s << ins[index].second << nl; 
    }
}

}

