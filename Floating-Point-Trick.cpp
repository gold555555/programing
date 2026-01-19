#include <bits/stdc++.h>
using namespace std ;
int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int N  ; cin >> N ;
    int x ;
    while (N--)
    {
       cin >> x ;
        cout << fixed << setprecision(0) << pow(2.0L ,x) << "\n";
    }
    return 0 ;
}