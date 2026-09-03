# Sistema de Cálculo de Médias em C++

Projeto desenvolvido em C++ para realizar o cadastro de alunos, calcular suas médias e verificar a situação acadêmica de cada aluno com base nas notas obtidas.

🔵 Sobre o Projeto

O sistema recebe os dados dos alunos e verifica automaticamente a situação de cada um:

🟢 Aprovado — Média maior ou igual a 7,0
🔴 Reprovado — Média menor que 7,0

Além disso, o sistema identifica qual aluno possui a maior média.

📋 Informações analisadas

# O programa solicita:

-Nome do aluno

-3 notas para cada aluno

-Notas entre 0 e 10

# Cálculos


-Média do aluno

-Soma das três notas ÷ 3


-Situação do aluno

-Média ≥ 7,0 → Aprovado

-Média < 7,0 → Reprovado


-Maior média

-O sistema verifica qual aluno possui a maior média entre os alunos cadastrados.

# Regras:

🟢 Aprovado    Média ≥ 7,0

🔴 Reprovado   Média < 7,0

O sistema também identifica o aluno que possui a maior média da turma.

# Validação:

O programa também impede dados inválidos, como:

Notas menores que 0;

Notas maiores que 10.

Caso alguma nota inválida seja informada, o programa solicita novamente as três notas do aluno.


# Objetivo:

O projeto foi desenvolvido com finalidade acadêmica, colocando em prática conceitos fundamentais de programação em C++, como vetores, matrizes, funções, estruturas de repetição, estruturas de decisão e validação de dados.

# Saídas esperadas:

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

Autor: Marlon Vritzl

Projeto acadêmico — C++
