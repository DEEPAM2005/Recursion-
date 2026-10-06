#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
int f(int x){
    if(cnt == x)return 0;
    cnt++;
    cout << cnt << " ";
    f(x);
}

int main(){
    int x = 5;
    f(x);
}