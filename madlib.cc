#include <iostream>
#include <string>

int main(int argc, char const *argv[]) { 
std::string singular_noun{"Person"};
std::cout << "Computers are small enough to fit into a " << singular_noun << ".\n";
std::cin >> singular_noun;

std::string present_tense_verb{"run"};
std::cout << "Computers can add, multiply, divide, and " << present_tense_verb << ".\n";
std::cout << "people can " << present_tense_verb << " too but computers do it better.\n";
std::cin >> present_tense_verb;  
return 0;

std::string plural_noun{"Cows"};
std::cout << "Computers have many " << plural_noun << " which gives them the advantage\n";
std::cout << "over people for many computational tasks.\n";
std::cin >> plural_noun;


}
