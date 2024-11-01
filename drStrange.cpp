#include <iostream> 
#include <vector>

int main(){
    int n,i;
    bool ok = true;
    std::vector<int> V;

    std::cin >> n;

    for (int j = 0; j<n*3; j++){   
        int u;
        std::cin >> u;
        V.push_back(u);}

    i=0;

    while(i<n && ((V.at(i)+V.at(i+n)) == V.at(i+n*2))){
        i++;
    }

    if(i == n){
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "NOPE :(" << std::endl;
    }   

}