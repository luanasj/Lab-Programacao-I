#include <iostream>

using namespace std;

int main(){
    int V,P,T,D;

    cin >> T >> D >> V >> P;

    int valP = (T/D)*P;

    int valV = V*T;

    cout << valP + valV << endl;

}