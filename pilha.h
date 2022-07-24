#ifndef pilha_h
#define pilha_h
#include <iostream>
using namespace std;
 
 typedef struct node{
    char data;
    node *next;
 }node;
//Cabeçalho do TAD Pilha 
class pilha
{
  private:
  //Atributo da Pilha
    node *topNode;
  public:
  //Operações primitivas da Pilha
    void cria(); 
    bool vazia();
    bool cheia();        
    void empilha(char, bool*);
    void desempilha(char*, bool*);
};

#endif