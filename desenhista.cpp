#include <iostream>

int main(){
    int n;

    std::cin >> n;

    for(int i = 1; i<=n ; i++){
        for(int j = 0; j<n-i; j++){
            std::cout << '>'; 
        }
        for(int x = 0 ; x<i;x++){
            std::cout << '#';
        }
        std::cout << std::endl;
    }
}