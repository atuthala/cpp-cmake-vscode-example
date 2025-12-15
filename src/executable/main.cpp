#include <iostream>
#include <library/library.hpp>

#include <fmt/format.h>

#include <vector>

int main()
{
    std::vector<int> const test{1, 2, 3, 4, 5};
    for (auto item : test)
    {
        std::cout << item << ' ';
    }
    std::cout << std::endl;
    std::cout << "Привет Саша! :)" << std::endl;
    std::cout << "Ого-го!\n"; 

    library::say_hello();
    fmt::println("Hello from the executable");

    std::cout << "Enter number2: \n";
    std::string number{"14/08/1986"};
    // std::cin >> number;
    std::cout << "Our number is: " << number << std::endl;
}
