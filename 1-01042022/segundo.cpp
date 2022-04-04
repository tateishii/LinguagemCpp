#include <iostream>

int main(){

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    std::cout << "Entre com um número\n";
    std::cin >> n1;
    std::cout << "Entre com outro número\n";
    std::cin >> n2;
    n3 = n1 + n2;
    std::cout << "O resultado é: "<< n3 << "\n";
    return 0;
}