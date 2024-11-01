#include <iostream>
#include <vector>



int main(){
    int n,c,j=0;
    std::vector<int> N;

    std::cin >> n;

    for(int i= 0; i< n;i++){
        int a;
        std::cin >> a;
        N.push_back(a);
    }

    std::cin >> c;

    while(j<n && N.at(j)!= c){
        N.at(j);
        j++;
    }

    if(j<n){
        std::cout << c << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

}