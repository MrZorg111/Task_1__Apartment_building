#include <iostream>
#include <string>

int main() {
    int n;
    std::string surname[] {"SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB", "PetrovB", "SidorovC", "IvanovC", " PetrovC", "SidorovD"};
    std::cout << "Enter the apartment number to find out the last name of the tenant! \n";
    for (int i = 0; i < 10; i++) {
        std::cin >> n;
        if(n <= 0 || n > 10){
            std::cout << "Wrong apartment number!";
            break;
        }
        std::cout << surname[n - 1] << "\n";
    }


}
