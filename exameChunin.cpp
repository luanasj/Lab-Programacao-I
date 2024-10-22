#include <iostream>


using namespace std;

int main(){
    string p1,p2,res;

    cin >> p1 >> p2;

    if ((p1!="N") && (p2!="N")  && (p1!=p2)){
        res = "classificado";
    } else {
        res = "eliminado";
    }

    cout << res << endl;
}