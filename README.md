 🃏 Super Trunfo em C

Projeto simples em **C** para praticar `struct`, entrada de dados e exibição formatada no console.  
O programa permite cadastrar **duas cartas de cidades** e exibir as informações de forma organizada.

---

 🚀 Como compilar e executar

 1. Compilar
No terminal (Windows + GCC instalado via MinGW, MSYS2 ou WSL):

```sh
gcc supertrunfo.c -o supertrunfo.exe

./supertrunfo.exe

📖 Funcionalidades

Cadastro de duas cartas com os seguintes dados:

Estado (A-H)

Código da Carta (ex: A01, B03)

Nome da Cidade

População

Área em km²

PIB

Número de pontos turísticos

Exibição organizada das cartas cadastradas.

🖼️ Exemplo de uso

--- Cadastro da Carta 1 ---
Digite o Estado (A-H): A
Digite o Codigo da Carta (ex: A01): A01
Digite o Nome da Cidade: São Paulo
Digite a Populacao: 12325000
Digite a Area em km²: 1521.11
Digite o PIB (em bilhoes de reais): 699.28
Digite o Numero de Pontos Turisticos: 50

--- Cadastro da Carta 2 ---
Digite o Estado (A-H): B
Digite o Codigo da Carta (ex: B02): B02
Digite o Nome da Cidade: Rio de Janeiro
Digite a Populacao: 6748000
Digite a Area em km²: 1182.30
Digite o PIB (em bilhoes de reais): 414.30
Digite o Numero de Pontos Turisticos: 40

🛠️ Tecnologias usadas

Linguagem C

GCC (GNU Compiler Collection)

Visual Studio Code

📂 Estrutura do projeto
supertrunfo/
├── supertrunfo.c   # Código fonte do projeto
└── README.md       # Documentação do projeto
