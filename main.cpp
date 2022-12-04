#include <iostream>
#include "dominios.h"
#include "TesteDominios.h"
#include "TesteEntidades.h"
#include "Entidades.h"

using namespace std;

int main()
{
        // Instanciar classe de teste de dom�nio.

    TUCodigo testCodigo;
    TUData   testData;
    TUMatricula testMatricula;
    TUNome testNome;
    TUSenha  testSenha;
    TUTexto testTexto;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    switch(testCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    switch(testData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

    switch(testMatricula.run()){
        case TUMatricula::SUCESSO: cout << "SUCESSO - MATRICULA" << endl;
                                break;
        case TUMatricula::FALHA  : cout << "FALHA   - MATRICULA" << endl;
                                break;
    }

    switch(testNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }

    switch(testSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    switch(testTexto.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA   - TEXTO" << endl;
                                break;
    }

    // Instaciar classe de teste de entidade.
    TUUsuario testUsuario;
    TUProjeto testProjeto;
    TUTarefa testTarefa;

    switch(testUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - USUARIO" << endl;
                                break;
    }

    switch(testProjeto.run()){
        case TUProjeto::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUProjeto::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }

    switch(testTarefa.run()){
        case TUTarefa::SUCESSO: cout << "SUCESSO - TAREFA" << endl;
                                break;
        case TUTarefa::FALHA  : cout << "FALHA   - TAREFA" << endl;
                                break;
    }


}
