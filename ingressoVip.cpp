#include "ingressoVip.h"
#include "ingresso.h"
#include <iostream>
using namespace std;

ingressoVip::~ingressoVip(){}

ingressoVip::ingressoVip(){}

ingressoVip::ingressoVip(float valor){
    this->valorAdicional = valor;
}
 void ingressoVip::exibir(){
    cout << "Nome Comprador:" << getnomeComprador() << endl;
    cout << "Valor:" << getValor() << endl;
    cout << "Valor adicional:" << valorAdicional << endl;
 }
 void ingressoVip::imprimeValor(){
    cout << "Valor adicional:" << valorAdicional << endl;
}
void ingressoVip::setvalorAdicional(float v){
    this->valorAdicional = v;
}
float ingressoVip::getvalorAdicional(){
    return valorAdicional;
}
