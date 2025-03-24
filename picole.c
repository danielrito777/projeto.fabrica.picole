//***************************************************************
// ***     Universidade Federal do Rio Grande do Norte        ***
// ***        Centro de Ensino Superior do Seridó             ***
// ***       Departamento de Computação e Tecnologia          ***
// ***       Projeto Sistema de Controle de Produção          ***
// ***       Developed by Daniel Diniz -- since Mar,2025      ***
// **************************************************************
// ***                      Semana 1                          ***
// **************************************************************

#include <stdio.h>

//Assinatura das funções
void tela_principal(void);
void tela_sobre(void);


int main (void) {
    tela_principal();
    tela_sobre();
    return 0;
} 


////
// Funções

void tela_principal(void) {
    printf("\n");
    printf("******************************************************************\n");
    printf("***                                                            ***\n");
    printf("***     Universidade Federal do Rio Grande do Norte            ***\n");
    printf("***          Centro de Ensino Superior do Serido               ***\n");
    printf("***        Departamento de Computaçao e Tecnologia             ***\n");
    printf("***          Disciplina DCT1106 -- Programaçao                 ***\n");
    printf("***         Projeto Sistema de Controle de Producao            ***\n");
    printf("***       Developed by Daniel Diniz -- since Mar, 2025         ***\n");
    printf("***                                                            ***\n");
    printf("******************************************************************\n");
    printf("***                                                            ***\n");
    printf("***    = = = = = Sistema de Controle de Produção = = = = =     ***\n");
    printf("***                                                            ***\n");
    printf("***            1. Módulo Manter insumos                        ***\n");
    printf("***            2. Módulo manter receitas                       ***\n");
    printf("***            3. Módulo manter produção                       ***\n");
    printf("***            4. Módulo Manter vendas                         ***\n");
    printf("***            0. Sair                                         ***\n");
    printf("***                                                            ***\n");
    printf("******************************************************************\n");
    printf("\n");
} 

void tela_sobre(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Controle de producao                ///\n");
    printf("///             Developed by Daniel Diniz -- since Mar, 2025                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Controle de producao = = = = =          ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa dedicado a disciplina DCT1106 - Programação, para avaliacao e ///\n");
    printf("///  desenpenho dos alunos mediado pelo Prof. Dr. Flavius Gorgonio de modo  ///\n");
    printf("///  a mostrar o conhecimento adiquirido ao longo da disciplina.            ///\n");
    printf("///  Projeto Sistema de controle de producao é um sistema desenvolvido para ///\n");
    printf("///  auxiliar gerenciamento de producao de uma fabrica de picole artesanal  ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}