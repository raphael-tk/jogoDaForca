# Jogo da Forca Simples em C++

Este é um projeto de console para o clássico Jogo da Forca, desenvolvido inteiramente em C++. O objetivo do jogador é adivinhar uma palavra secreta, letra por letra, antes que suas tentativas se esgotem.

Este projeto foi criado como um exercício básico de programação em C++, utilizando conceitos como `std::string`, `std::vector` e laços de repetição.

##  Recursos

* **Interface de Linha de Comando:** Jogo simples e intuitivo, executado diretamente no terminal.
* **Banco de Palavras Interno:** A lista de palavras está contida diretamente no código-fonte, não necessitando de arquivos externos.
* **Vidas Limitadas:** O jogador possui 6 chances para adivinhar a palavra.
* **Feedback ao Jogador:**
    * Exibe a palavra com as letras adivinhadas e os espaços em branco.
    * Mostra o número de tentativas restantes.
    * Lista as letras que já foram tentadas e estavam incorretas.

---

## Como Compilar e Executar

Para jogar, você precisará de um compilador C++, como o G++ (parte do GCC) ou o Clang.

1.  **Salve o Código:**
    Salve o código fornecido em um arquivo chamado `forca.cpp`.

2.  **Abra o Terminal:**
    Navegue até o diretório onde você salvou o arquivo.

3.  **Compile o Arquivo:**
    Use o seguinte comando para compilar o código. Isso criará um arquivo executável.

    ```bash
    g++ forca.cpp -o forca
    ```

4.  **Execute o Jogo:**
    Após a compilação bem-sucedida, execute o jogo com o comando:

    ```bash
    ./forca
    ```
    No Windows, você pode simplesmente executar:
    ```bash
    forca.exe
    ```

---

## Como Jogar

1.  Ao iniciar o programa, uma palavra aleatória da lista interna será escolhida.
2.  O terminal exibirá traços (`_`) para cada letra da palavra secreta.
3.  Digite uma única letra e pressione `Enter`.
4.  **Se a letra estiver correta,** ela será revelada nas posições correspondentes.
5.  **Se a letra estiver incorreta,** você perderá uma tentativa e a letra será adicionada à lista de "letras erradas".
6.  O jogo continua até que você adivinhe a palavra completa (vitória) ou suas 6 tentativas acabem (derrota).

---

## Como Modificar as Palavras

Para adicionar, remover ou alterar as palavras do jogo, você precisa editar diretamente o código-fonte no seguinte trecho do arquivo `forca.cpp`:

```cpp
std::vector<std::string> palavras = {"computador", "programacao", "linguagem", "desenvolvimento", "algoritmo", "android"};
