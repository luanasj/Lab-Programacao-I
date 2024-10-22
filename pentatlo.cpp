
#include <iostream>

using namespace std;

int main(){
    string mat;
    float n1,n2,n3,n4,n5;

    cin >> mat >> n1 >> n2 >> n3 >> n4 >> n5;

    cout.precision(1);

    cout << mat + " " << fixed << (n1+n2+n3+n4+n5)/5 << endl;

}

