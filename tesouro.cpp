#include <iostream>
#include <vector>

int main(){
    int n,s,count=0;
    std::vector<int> a;

    std::cin >> n;

    for(int i = 0; i<n; i++){
        int ent;
        std::cin >> ent;
        a.push_back(ent);
    }

    std::cin >> s;

   while((count < n) && (a.at(count) <= s)){
        count++;
   }

   std::cout << count << std::endl << (count == n) ? 1 : 0;
    
}