#include <iostream>

using namespace std;

int main(){
    int l,p,l1, l2,l3,p1,p2,p3;
    string res;

    cin >> l1 >> p1 >> l2 >> p2 >> l3 >> p3;

    l = l1+l2+l3;
    p = p1+p2+p3;

    if(l>p){
        res = "Lucas";
    } else if (p>l){
        res = "Pedro";
    } else {
        res = "Empate";
    }

    cout<<res<<endl;
    
}