#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<float> v;

    std::cin >> n;

    for(int i = 0; i<n*2; i++){
        float a;
        std::cin >> a;
        v.push_back(a);
    }

    for(int i=0; i<n ; i++){
        if(v.at(i+n) == 0 || v.at(i) == 0){
            std::cout << 0 << " ";
        } else{
            int res = (v.at(i+n) / v.at(i))*100;
            std::cout << res << " ";
        }

    }

}



