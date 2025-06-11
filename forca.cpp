#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    std::vector<std::string> palavras = {"computador", "programacao", "linguagem", "desenvolvimento", "algoritmo", "android"};
    std::string palavraSecreta = palavras[rand() % palavras.size()];
    std::string palavraAdvinhada(palavraSecreta.length(), '_');
    int tentativasRestantes = 6;
    std::vector<char> letrasErradas;

    while (tentativasRestantes > 0 && palavraAdvinhada != palavraSecreta) {
        std::cout << "\n\nPalavra: " << palavraAdvinhada << std::endl;
        std::cout << "Tentativas restantes: " << tentativasRestantes << std::endl;
        std::cout << "Letras erradas: ";
        for (char letra : letrasErradas) {
            std::cout << letra << " ";
        }
        std::cout << std::endl;
        std::cout << "Digite uma letra: ";

        char tentativa;
        std::cin >> tentativa;

        bool acertou = false;
        for (size_t i = 0; i < palavraSecreta.length(); ++i) {
            if (palavraSecreta[i] == tentativa) {
                palavraAdvinhada[i] = tentativa;
                acertou = true;
            }
        }

        if (!acertou) {
            tentativasRestantes--;
            letrasErradas.push_back(tentativa);
        }
    }

    if (palavraAdvinhada == palavraSecreta) {
        std::cout << "\nParabéns! Você advinhou a palavra: " << palavraSecreta << std::endl;
    } else {
        std::cout << "\nVocê perdeu! A palavra era: " << palavraSecreta << std::endl;
    }

    return 0;
}