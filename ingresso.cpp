#include "ingresso.h"
#include <string>
#include <iostream>

ingresso::ingresso(){
this->valor = 0;
this->nomeComprador = "";
this->diaEvento = 0;
}
ingresso::~ingresso(){}
ingresso::ingresso(string nome){
    this->nomeComprador = nome;
    this->valor = 0;
}

void ingresso::exibir(){
    cout << "Nome Comprador:" << nomeComprador << endl;
    cout << "Valor:" << valor << endl;
    cout << "Dia Evento:" << diaEvento << endl;
}
void ingresso::imprimeValor()
{
    cout << "Valor:" << valor << endl;
}
string ingresso::getnomeComprador(){
    return nomeComprador;
}
int ingresso::getdiaEvento(){
    return diaEvento;
}
float ingresso::getValor(){
    return valor;
}
void ingresso::setnomeComprador(string n){
    this->nomeComprador = n;
}
void ingresso::setdiaEvento(int d){
    if( d > 0 && d < 32) {
    this->diaEvento = d;
    } else {
    cout << "Dia Invalido." << endl;}
}
void ingresso::setValor(float v){
    this->valor = v;
}
