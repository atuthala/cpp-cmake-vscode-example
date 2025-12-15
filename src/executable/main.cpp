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
    std::cout << "hello matheusgomes28 :)" << std::endl;
    std::cout << "Lol!\n"; 

    library::say_hello();
    fmt::println("Hello from the executable");

    std::cout << "Enter text: ";
    std::string text{"Dec 15 2025"};
    getline(std::cin, text);
    std::cout << "Our number is: " << text << std::endl;
}
