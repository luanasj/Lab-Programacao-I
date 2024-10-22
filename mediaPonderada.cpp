#include <iostream>

using namespace std;

int main(){
    float p1,p2,t;

    cin >> p1 >> p2 >> t;

    cout.precision(2);

    cout << fixed << ((p1*4)+(p2*4)+(t*2))/10 << endl;



}