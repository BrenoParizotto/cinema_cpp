// Resposta questão 2: A herança se refere as classes que herdam os métodos de outra(s) classe. A Composição é quando
// uma classe depende de outra para existir, como se fizesse parte dela. Caso a classe pai deixe de existir, a classe
// que faz a composição dela, também deixa. A agregação é quando uma classe instancia dentro de outra, não dependendo
// totalmente da existencia da outra para existir (independente)


#include <iostream>
#include "ingresso.h"
#include "ingressoEstudantil.h"
#include "ingressoVip.h"


using namespace std;

int main()
{
   // classe Ingresso
   ingresso *i1 = new ingresso;
   i1->setnomeComprador("Breno");
   i1->setdiaEvento(5);
   i1->setValor(50.5);
   i1->exibir();

   delete i1;

   ingresso i2("Breno");
   i2.setValor(50);
   i2.setdiaEvento(96);
   i2.exibir();

 cout << endl;
 cout << "##########################" << endl;
 cout << endl;

   // classe Ingresso Vip
   ingressoVip *v1 = new ingressoVip;
    v1->setnomeComprador("Breno");
    v1->setValor(60.5);
    v1->setvalorAdicional(90.5);
    v1->exibir();

    delete v1;

    ingressoVip v2;
    v2.setnomeComprador("Professor");
    v2.setValor(150.5);
    v2.setvalorAdicional(890.5);
    v2.exibir(); // funcao subscrita
    v2.imprimeValor();


 cout << endl;
 cout << "##########################" << endl;
 cout << endl;

    ingressoEstudantil *e1 = new ingressoEstudantil();
    e1->setRegistro(60);
    e1->setValor(67.2);
    e1->setnomeComprador("Scheila");
    e1->exibir(); // funcao subscrita

    delete e1;

    ingressoEstudantil e2;
    e2.setRegistro(90);
    e2.setValor(167.2);
    e2.setnomeComprador("Teste");
    e2.exibir(); // funcao subscrita








}
// lembrar
