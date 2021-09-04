#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"


//! Sessão é uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa


class Sessao {
    private:
        Data data;
        Horario horario;

    public:
        void setData(const Data &valor);
        string getData(void) const{
            return data.getValor();
        }
};

inline void Sessao::setData(const Data &valor) {
    this->data = valor;
}


#endif // ENTIDADES_H_INCLUDED
