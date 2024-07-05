#include "ingressoEstudantil.h"
#include <string>
#include <iostream>
using namespace std;

ingressoEstudantil::ingressoEstudantil(){}
ingressoEstudantil::~ingressoEstudantil(){}

ingressoEstudantil::ingressoEstudantil(int r){
    this->registroAcademico = r;
}

void ingressoEstudantil::exibir(){
    cout << "Nome Comprador:" << getnomeComprador() << endl;
    cout << "Valor:" << getValor() << endl;
    cout << "Registro:" << registroAcademico << endl;

 }
 void ingressoEstudantil::imprimeValor(){
    cout << "Valor adicional:" << getValor() << endl;
 }
int ingressoEstudantil::getRegistro(){
    return registroAcademico;
}
void ingressoEstudantil::setRegistro (int v){
    this->registroAcademico = v;
}

