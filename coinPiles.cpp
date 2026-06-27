#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
typedef long long ll;


using namespace std;


void solve () {
   ll a,b;
   cin >> a>> b;
   
   if (a==0 && b==0)
    {
            cout << "YES" << endl;
    }
    else if((a+b)%3!= 0){
        cout << "NO" << endl;
   }
   
   
   
   else{
        if (a>2*b)
        {
             cout << "NO" << endl;
        }
        else if (b>2*a){
             cout << "NO" << endl;
        }
        
        
        else{
            cout << "YES" << endl;
        }
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
   
    if (cin >>n){
        while (n--)
        {
            solve();
        }
    }
    return 0;
}