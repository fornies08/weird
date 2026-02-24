#include <iostream>
using namespace std;
#define ll long long
void weird(ll n){
while(n!= 1){
        if(n%2 == 0){
            n=n/2;
        } else {
            n = n* 3 + 1;
        }
        cout << n << " ";
    }
}
int main(){
    ll n;
    cout << "Dame un numero entero positivo ";
    cin >> n;
    cout << n << "\n";
    weird(n);
    cout << endl;
}

