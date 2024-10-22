#include <iostream>

using namespace std;


int main(){
    int entry,h,m,s,r;

    cin >> entry;

    h = entry/3600;

    m = (entry%3600)/60;

    s = (entry%3600)%60;

    cout << h <<"h "<<m<<"m "<<s<<"s"<<endl;

}