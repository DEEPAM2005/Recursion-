#include<bits/stdc++.h>
using namespace std;

// print linearly from 1 to n
int cnt = 0;
int f(int x){
    if(cnt == x)return 0;
    cnt++;
    cout << cnt << " ";
    f(x);
}

// print linearly fron N to 1
int cntreverse(int x){
    if(x == 0)return 0;
    cout << x << " ";
    cntreverse(x-1);
}

// print names 5 times
void printNames(string s){
    if(cnt == 5)return;
    cout << s << " ";
    cnt++;
    printNames(s);
}

// sum of N numbers
int calcSum(int N){
    if(N == 0)return 0;
    return N+calcSum(N-1);
}

// factorial of n
int fact(int x){
    if(x == 1)return 1;
    return x * fact(x-1);
}

int main(){
    string s = "Deepam";
    // printNames(s);
    int n = 4;
    cout << fact(n);
}