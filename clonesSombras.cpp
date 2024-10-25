#include <iostream>

int main(){
    int n,r=1;

    std::cin >> n;

    while (r<n){
        r*=2;
        
    }

    if(r==n){
        std::cout << "Dattebayo" << std::endl;
    } else {
        std::cout << "Tururuuu" << std::endl;
    }
    
}