#include <iostream>
#include <vector>

int main(){
    int n,m,m1;
    std::vector<int> X;

    std::cin >> n;

    for(int i = 0; i<n;i++){
        int x;
        std::cin >> x;
        if(x > 0){
            X.push_back(x);
        }
    
    }

    std::cin >> m,m1;

    for(int i = 0;i<X.size();i++){
        (X.at(i) > 1) ? m1-=(X.at(i)) : m1=m;
    }

    std::cout << (m1 > 0) ? "Yes, you can" : "You Died";
    
}
