#include <iostream>

int main(){
    int n,s = 0;

    std::cin >> n;

    for (int i = 0; i<n;i++){
        int p;
        std::cin >> p;
        if(p>s){
            s = p;
        }
    }

    std::cout << s << std::endl;
}