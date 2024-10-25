#include <iostream>

int main() {
    int n,s = 0,a,b,c,d;

    std::cin >> n;

    for(int i = 0; i<n; i++){
        std::cin >> a >> b >> c >> d;
        if(a+b+c+d >= 100){
            s+= a-b-c-d;
        } else {
            s+= a+b+c+d;
        }
    }

    std::cout << s << " anos de vida" << std::endl;

}