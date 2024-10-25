#include <iostream>

int main(){
    int p,s;

    std::cin>>p>>s;

    int out[p*2];

    for(int i = 0; i<p*2; i+=2){
       out[i] = 0;
       out[i+1] = 0;
       for (int j=0; j<s ;j++){
            int a,d;
            std::cin >> a >> d;
            out[i] += a;
            out[i+1] += d;
       }
    }

    for (int j = 0; j<p*2 ; j+=2){
            std::cout<< out[j] << ' ' << out[j+1] << std::endl;
    }
}