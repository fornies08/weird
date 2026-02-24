#include <iostream>
using namespace std;

void weird(long long n);

int main(void){
  long long N;
	cin >> N;

    weird(N);
}

void weird(long long n){
    cout << n << " ";

    if (n==1){
        cout << endl;
        return;
    }
    else{
        if (n%2 == 0){
            weird(n/2);
        }
        else{
            weird((n*3)+1);
        }
    }
}
