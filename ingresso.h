#ifndef INGRESSO_H
#define INGRESSO_H
#include <string>
using namespace std;

class ingresso
{
    public:
        ingresso();
        ingresso(string nome);
        ~ingresso();
        void exibir();
        void imprimeValor();
        string getnomeComprador();
        int getdiaEvento();
        float getValor();
        void setnomeComprador(string n);
        void setdiaEvento(int d);
        void setValor(float v);
    private:
        string nomeComprador;
        int diaEvento;
        float valor;
};

#endif // INGRESSO_H
