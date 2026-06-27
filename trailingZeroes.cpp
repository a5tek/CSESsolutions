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
    
    ll n;
   
    if (cin >>n){
        
        ll ans = 0;
        for (ll i = 5; i <= n; i = i*5)
        {
            ans += n/i;
        }
        cout << ans;
    }
    return 0;
}