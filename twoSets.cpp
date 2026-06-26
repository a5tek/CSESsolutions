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
    ll sum1=0,sum2= 0;
    vector<ll> a,b;
    if (cin >>n){
       if ((n*(n+1)/2) % 2 != 0){
            cout<<"NO";
       }

       else{
            ll tsum = n*(n+1)/4;
            ll remaning = tsum;
            for (int i = n; i >0; i--)
            {
                if (sum1>=sum2){
                    sum2 += i;
                    b.push_back(i);
                }
                else if (sum2>sum1)
                {
                    sum1 += i;
                    a.push_back(i);
                }
                
            }
            
            if (sum1 == sum2){
                cout << "YES" << endl;
                cout << a.size() << endl;
                for (int i = 0; i < a.size(); i++)
                {
                    cout << a[i]<< " ";
                }
                cout << endl;
                cout << b.size() << endl;
                for (int i = 0; i < b.size(); i++)
                {
                    cout << b[i]<< " ";
                }
                
            }
            else {
                cout << "NO";
            }
       }
    }
    return 0;
}