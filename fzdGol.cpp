#include <iostream>

using namespace std;

int main(){
    string z,g,d,c;

    cin >> z >> g >> d >> c;

    if(z!=d){
        cout << "Bloqueado" << endl;
    } else {
        cout << "Driblado" << endl;
        if(g!=c){
            cout << "...e o goleiro pega" << endl;
        } else {
            cout << "Gol" << endl;
        }
    }

}