#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Dame un número\n";
    
    bool error;
    do{
    cin >> num;
    error=false;
    if (cin.fail()) {
        cout << "No es un entero válido.  Dame un número entero válido por favor.\n";
        cin >> num;
        error=true;
    }
    }while(error);
  
    //if even divide it by 2
    //if odd multiply it by 3 and add 1
    cout << num;
    while(num!=1){
     if(num%2==0){
        num=num/2;
     }else{
        num=num*3+1;
     }
     cout << "-->"<<num;
    }

}
