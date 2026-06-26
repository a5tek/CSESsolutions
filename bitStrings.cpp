#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
typedef long long ll;


using namespace std;


void solve () {
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
   
    if (cin >>n){
        ll ans = 1;
        ll base = 2;
        ll mod = 1e9 + 7; 
        while (n > 0) {
            if (n % 2 == 1) 
            {
                ans = (ans * base) % mod;
            }
            base = (base * base) % mod;
            n /= 2;
        }
        cout << ans;
    }
    return 0;
}