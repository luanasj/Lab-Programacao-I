#include <iostream>

using namespace std;

int main(){
    int a,m,c,i;

    cin >> a >> m >> c;
    i = 0;

    while(a>=2 && m>=3 && c>=5){
        a-=2;
        m-=3;
        c-=5;
        i++;
    }

    cout << i << endl;
}