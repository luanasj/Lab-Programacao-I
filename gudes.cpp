#include <iostream>

int main(){
    long n,q,f;
    

    std::cin >> n >> q;
    f=q;
    
    for(int i = 0; i<n ; i++){
        q *= 2;
 
    }

    std::cout << q-f << std::endl;

}

