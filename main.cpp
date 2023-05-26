#include <iostream>
#include <string>

int main() {
    int idade ;
    std::string nome;

    std::cout << "Por favor, informe sua idade: ";
    std::cin >> idade;
    std::cin.ignore(); // Ignorar o caractere de nova linha deixado pelo std::cin

    std::cout << "Por favor, informe seu nome: ";
    std::getline(std::cin, nome);

    if (idade != 31 && nome != "Leonardo") {
        std::cout << "Infelizmente você não é quem procuramos." << std::endl;
    } 
        std::cout << "Olah " << nome << " nos desculpe. Mais quem procucamos se chama Leonardo e ele tem 31 anos. " << std::endl;
    

    return 0;
}
