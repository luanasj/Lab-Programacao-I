#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int pokes[n];

    for (int i=0;i<n;i++){
        int p,m;
        std::cin >>p>>m;
        pokes[i] = p+m;
    }

    for (int i=0;i<n;i++){
        std::cout << pokes[i] << std::endl;
    }

    
}