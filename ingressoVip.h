#ifndef INGRESSOVIP_H
#define INGRESSOVIP_H
#include "ingresso.h"

class ingressoVip:public ingresso
{
    public:
        ingressoVip();
        ingressoVip(float valor);
        ~ingressoVip();
        virtual void exibir();
        virtual void imprimeValor();
        void setvalorAdicional(float v);
        float getvalorAdicional();
    private:
        float valorAdicional;
};

#endif // INGRESSOVIP_H
