#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

#define TAM 15
#define NOTAS 3
#define ALUNOS 5

float calcular_media(float n[], int qtd) {
    float soma = 0;

    for (int i = 0; i < qtd; i++) {
        soma += n[i];
    }

    return soma / qtd;
}

int main() {

    // Variáveis
    string nome_alunos[ALUNOS];
    float matriz_nota[ALUNOS][NOTAS];

    float media_maior = -1;
    int save = 0;

    float media[ALUNOS] = {};

    string situacao[ALUNOS];

    // Código
    cout << endl;
    cout << "Calculo de Medias \n\n";

    for (int i = 0; i < ALUNOS; i++) {

        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> nome_alunos[i];

        bool validas;

        do {
            validas = true;

            cout << "Digite as " << NOTAS << " notas de "
                 << nome_alunos[i] << ": ";

            for (int j = 0; j < NOTAS; j++) {
                cin >> matriz_nota[i][j];
            }

            for (int j = 0; j < NOTAS; j++) {
                if (matriz_nota[i][j] < 0 ||
                    matriz_nota[i][j] > 10) {

                    cout << "NOTA INVALIDA: "
                         << "Digite numeros de 0 a 10.\n";

                    validas = false;
                    break;
                }
            }

        } while (!validas);

        // Limpa a tela
        system("cls");

        // Calcula a média
        media[i] = calcular_media(matriz_nota[i], NOTAS);

        // Verifica maior média
        if (media[i] > media_maior) {
            media_maior = media[i];
            save = i;
        }

        // Define situação
        if (media[i] < 7) {
            situacao[i] = "Reprovado";
        } else {
            situacao[i] = "Aprovado";
        }
    }

    // Cabeçalho da tabela
    cout << left << setw(12) << "ALUNO"
         << right << setw(6) << "N1"
         << setw(6) << "N2"
         << setw(6) << "N3"
         << setw(8) << "MEDIA"
         << "   SITUACAO\n";

    // Exibe os alunos
    for (int i = 0; i < ALUNOS; i++) {

        cout << left << setw(12) << nome_alunos[i]
             << right << fixed << setprecision(1)
             << setw(6) << matriz_nota[i][0]
             << setw(6) << matriz_nota[i][1]
             << setw(6) << matriz_nota[i][2]
             << setw(8) << media[i]
             << "   " << situacao[i]
             << "\n";
    }

    // Maior média
    cout << "\nAluno com maior media: "
         << nome_alunos[save]
         << " (" << fixed << setprecision(1)
         << media[save] << ")\n";

    cout << "\nPressione ENTER para sair...";

    cin.ignore();
    cin.get();

    return 0;
}