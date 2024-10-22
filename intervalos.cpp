#include <iostream>

using namespace std;

int main(){
    int x,y,w,z,n;

    cin >> x >> y >> w >> z >> n;

    if ((n>x && n>=w) && (n<=y && n<z)){
        cout << "Ambos!" << endl;
    } else if (n>=w && n<z){
        cout << "Segundo intervalo!" << endl;
    } else if(n>x && n<=y){
        cout << "Primeiro intervalo!" << endl;
    } else {
        cout << "Nenhum!" << endl;
    }

}