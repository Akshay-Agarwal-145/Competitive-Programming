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


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';



int t; 
cin >> t; 
while(t--){
long long a,b,c; 
cin >> a >> b >> c; 

long long corner; 

corner = a + b - 1; 

cout << corner + c - 1 << nl; 
} 
}
















