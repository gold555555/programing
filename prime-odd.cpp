#include <iostream>
#include <string>
using namespace std ;
int main(){
    int n  ;
    cin >> n ;
    string text;
    char z ;
    int i = 0 ,num[n], len[n];
    for ( i = 0; i < n; i++)
    {
        cin >> text;
        len[i] = text.length();
        num[i] = text [len[i] - 1 ] - '0';
        
        
    }
    for ( i = 0; i < n; i++)
    {
        if (len[i] == 1 && num[i] ==2)
        {
            cout << "T" << endl;
        }
        
        else if (num[i] %2 == 0 )
        {
            cout << "F" << endl;
        }else{
            cout << "T" << endl;
        }
    }
    
    
}