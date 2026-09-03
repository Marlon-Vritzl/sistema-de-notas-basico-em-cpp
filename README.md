# Cálculo de Médias de Alunos em C++

Projeto desenvolvido em C++ para realizar o cadastro de alunos, calcular suas médias e informar a situação de cada aluno com base nas notas obtidas.

🔵 Sobre o Projeto

O sistema recebe os dados de 5 alunos e calcula automaticamente a média de cada um:

🟢 Aprovado — Média maior ou igual a 7,0
🔴 Reprovado — Média menor que 7,0

Além disso, o programa identifica qual aluno possui a maior média.

📋 Informações analisadas

# O programa solicita:

-Nome de cada aluno
-3 notas para cada aluno
-Notas entre 0 e 10

# Cálculos

-Nota Final
-Soma das 3 notas ÷ 3

-Situação do aluno
-Média ≥ 7,0 → Aprovado
-Média < 7,0 → Reprovado

-Maior média
-O sistema verifica qual aluno possui a maior média entre todos os cadastrados.

# Regras:

🟢 Aprovado    Média ≥ 7,0
🔴 Reprovado   Média < 7,0

O programa também compara as médias e informa o aluno que obteve a maior média.

# Validação:

O programa impede a inserção de notas inválidas, como:

Notas menores que 0;
Notas maiores que 10.

Caso uma nota inválida seja informada, o sistema solicita novamente as três notas do aluno.

# Tecnologias

-C++
-iostream
-iomanip
-string
-cstdlib

# Como executar:

1. Clone o projeto

git clone <URL_DO_REPOSITORIO>

2. Compile

g++ main.cpp -o calculo-medias

3. Execute

./calculo-medias


# Objetivo:

O projeto foi desenvolvido com finalidade acadêmica, colocando em prática conceitos fundamentais de programação em C++, como vetores, matrizes, funções, estruturas de repetição, estruturas condicionais, validação de dados e formatação de saída.

# Saídas esperadas:

## Saídas esperadas

```text

Exemplo de saída:

ALUNO           N1    N2    N3   MEDIA   SITUACAO
Joao           8.0   7.0   9.0     8.0   Aprovado
Maria          6.0   5.0   7.0     6.0   Reprovado
Carlos         9.0   8.0  10.0     9.0   Aprovado
Ana            7.0   8.0   7.0     7.3   Aprovado
Pedro          5.0   6.0   6.0     5.7   Reprovado

Aluno com maior media: Carlos (9.0)

```

# Validação de notas:

```text

Digite as 3 notas de Joao: 8 12 9

NOTA INVALIDA: Digite numeros de 0 a 10.

Digite as 3 notas de Joao: 8 7 9

```

Autor: Marlon Vritzl

Projeto acadêmico — C++
