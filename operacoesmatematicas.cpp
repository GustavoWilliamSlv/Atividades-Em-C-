#include <iostream>   // Substitui <stdio.h>
#include <cstdlib>    // Substitui <stdlib.h> (para abs e system)
// <cmath> também poderia ser usado para std::abs

// Função principal do programa (padrão C++)
int main() {

    // Definindo Variáveis (idêntico ao C)
    int a = 6, b = 4;

    // Soma
    std::cout << "\n A soma de " << a << " e " << b << " = " << (a + b);

    // Subtração
    std::cout << "\n A subtracao de " << a << " e " << b << " = " << (a - b);

    // Divisão
    // (Nota: Como 'a' e 'b' são inteiros, esta é uma divisão inteira: 6 / 4 = 1)
    std::cout << "\n A divisao de " << a << " e " << b << " = " << (a / b);

    // Multiplicação
    std::cout << "\n A multiplicacao de " << a << " e " << b << " = " << (a * b);

    // Resto da Divisão
    std::cout << "\n O resto da divisao entre " << a << " e " << b << " = " << (a % b);

    // Valor Absoluto (usando std::abs de <cstdlib> ou <cmath>)
    std::cout << "\n O valor absoluto de -3 = " << std::abs(-3);

    // Pausa o programa após executar
    std::cout << "\n\n"; // Adiciona uma quebra de linha antes do pause
    system("pause");

    return 0; // Retorno padrão da main
}
