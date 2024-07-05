#ifndef INGRESSOESTUDANTIL_H
#define INGRESSOESTUDANTIL_H
#include "ingresso.h"

class ingressoEstudantil:public ingresso
{
    public:
        ingressoEstudantil();
        ingressoEstudantil(int r);
        ~ingressoEstudantil();
        virtual void exibir();
        virtual void imprimeValor();
        int getRegistro();
        void setRegistro (int v);
    private:
        int registroAcademico;
};

#endif // INGRESSOESTUDANTIL_H
