#include "teste.h"

//bool TesteSessao::sucesso(const Data &valor, const Horario &horario) {
bool TesteSessao::teste(string data_str, string horario_str) {
    Data data;
    Horario horario;

    data.setValor(data_str);
    horario.setValor(horario_str);

    return true;
}

