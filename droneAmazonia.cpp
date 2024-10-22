#include <iostream>

using namespace std;


int main(){
    string x1,y1,x2,y2,d;

    cin >> x1 >> y1 >> x2 >> y2;

    if(x1==x2 && y1==y2){
        d = "Soltar pacote";
    } else {
        d= "Nao soltar pacote";
    }

    cout << d << endl;

}