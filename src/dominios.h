/*
    @author: Igor Silva de Oliveira Cardoso

*/

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

//! Capacidade � uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa
class Capacidade {
    private:
        int capacidade;
        bool validarValor(int);

    public:
        void setValor(int);
        int getValor() const {
                return capacidade;
        }
};



//! Capacidade � uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa
class Cargo {
    private:
        string cargo;
        bool validarValor(string);

    public:
        void setValor(string);
		string getValor() const {
            return cargo;
		}
};


//! Classificacao � uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa

class Classificacao {
    private:
        string classificacao;
        bool validarValor(string);
    public:
        void setValor(string);
		string getValor() const {
            return classificacao;
		}
};


//! Codigo � uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa

class Codigo {
    private:
        string codigo;
        bool validarValor(string);
    public:
        void setValor(string);
		string getValor() const {
            return codigo;
		}
};


//! Data � uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa

class Data {
    private:
        string data;
        bool validarValor(string);

    public:
        void setValor(string);
		string getValor() const {
            return data;
		}
};


//! Email � uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa

class Email {
    private:
        string email;
        bool validarValor(string);

    public:
        void setValor(string);
            string getValor() const {
                return email;
            }
};


//! Horario � uma classe muito legal, e que tem muitas coisas legais
//! Muita coisa de boa acontece aqui
//! Aqui fica muita coisa boa

class Horario {
    private:
        string horario;
        bool validarValor(string);

    public:
        void setValor(string);
		string getValor() const {
            return horario;
		}

};


#endif // DOMINIOS_H_INCLUDED
