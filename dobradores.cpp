#include <iostream>
#include <vector>

int main(){
    int n,y,count=0;
    std::vector<int> E;

    std::cin >> n;

    for(int i = 0; i<n*2;i++){
        int x;
        std::cin >> x; 
        E.push_back(x);
    }

    std::cin >> y;

    for(int i = 0;i<n;i++){
        if(E.at(i)==y){
            std::cout << E.at(i+n) << " ";
            count++;
        }
    }

    if (!count){
        
        std::cout << "Nenhum";
    }
    
}