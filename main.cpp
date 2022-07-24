//Autor: Vitor Caligaris Figueira
//Data: 15/05/2021
//Objetivo: Implementacao do TAD Pilha com suas operações primarias e operaçao mostra para mostrar a pilha.
#include <iostream>
#include "pilha.h"//Incluir a pilha
using namespace std;

void mostra(pilha s){//Procedimento para mostrar uma pilha atraves dos operadores primarios
  pilha aux;//Pilha auxiliar
  char x, y;
  bool a;
  aux.cria();//Pilha auxiliar criada
  while(s.vazia()==false){//Enquanto a pilja principal nao estiver vazia
    s.desempilha(&x, &a);//Elemento retirado da pilha principal
    aux.empilha(x , &a);//Adicionado a pilha auxiliar
    cout<< x << " ";//Elemento mostrado no console
  }
  //Depois os elementos devem voltar a pilha princial
  while(aux.vazia()==false){//Enquanto a pilha auxiliar nao estiver vazia
    aux.desempilha(&y, &a);//Elemento retirado da pilha auxiliar 
    s.empilha(y, &a);//E colocado na pilha principal novamente
  }
}

int main() {//Main para mostrar o funcionamento do TAD Pilha
  bool ok;
  char x, y;
  pilha p;
  p.cria();//Cria p
  p.empilha('A', &ok);
  p.empilha('B', &ok);
  p.empilha('C', &ok);
  p.empilha('D', &ok);
  cout << "Pilha Cheia(1 = verdadeiro/ 0 = falso): " << p.cheia() << endl;//Mostre se a pilha esta cheia ou nao de acordo com o metodo
  cout<< "Pilha: ";
  mostra(p);//Mostre a pilha p
  cout << endl;
  //Retira 2 elementos da pilha
  p.desempilha(&x, &ok);
  p.desempilha(&y, &ok);
  cout << "Elementos desempilhados: " << x << " "<< y << endl ;
  cout << "Pilha Cheia(1 = verdadeiro/ 0 = falso): " << p.cheia() << endl;//Mostre se a pilha esta cheia ou nao de acordo com o metodo
  cout<< "Pilha: ";
  mostra(p);//Mostre a pilha p
  cout << endl;
  //Adicione outros 3 elementos
  p.empilha('E', &ok);
  p.empilha('F', &ok);
  p.empilha('G', &ok);
  cout << "Pilha Cheia(1 = verdadeiro/ 0 = falso): " << p.cheia() << endl;//Mostre se a pilha esta cheia ou nao de acordo com o metodo
  cout<< "Pilha: ";
  mostra(p);//Mostre a pilha p
  cout << endl;
  for(int i = 0; i<5; i++){
    p.desempilha(&x, &ok);
  }
  cout << "Pilha Vazia(1 = verdadeiro/ 0 = falso): " << p.vazia() << endl;//Confira se a pilha esta vazia atraves do metodo 
  cout<< "Pilha: ";
  mostra(p);//Mostre a pilha p vazia
}