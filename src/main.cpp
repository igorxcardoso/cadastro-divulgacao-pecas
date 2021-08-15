/*
    @author: Igor Silva de Oliveira Cardoso

*/

#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "teste.h"

using namespace std;

int main(void) {
    //Classificacao classificacao;
    //Capacidade capacidade;
    //Cargo cargo;
    //Data data;
    //Codigo codigo;

    //codigo.setValor("AA1212");

    //cout << codigo.getValor();

    Data teste_data;
    teste_data.setValor("12/08/2021");
    Horario teste_horario;
    teste_horario.setValor("10:00");

    //Sessao teste_sessao;
    //teste_sessao.setData(teste_data);
    //cout << teste_sessao.getData() << endl;


    TesteSessao teste_sessao;
    if(teste_sessao.teste("22/99/1231", "22:00")) cout << "\tTeste classe Sessao: True\n";
    if(teste_sessao.teste("22/99/1231", "22:00")) cout << "\tTeste classe Sessao: False\n";

    return 0;
}
