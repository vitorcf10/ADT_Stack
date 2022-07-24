#include <iostream>
#include "pilha.h"
using namespace std;

void pilha::cria(){//Criar a pilha com o ponteiro para o elemento do topo apontando para null;
  topNode = NULL;
}

bool pilha::vazia(){//Verificar se a pilha esta vazia
  if(topNode==NULL){//Se o ponteiro do topo apontar para null a pilha esta vazia
    return true;
  }else{//Se apontar para um no existente retorne falso
    return false;
  }
}

bool pilha::cheia(){//Pilha nao enche
  return false;
}

void pilha::empilha(char x, bool *deuCerto){//Empilha um elemento
  if(cheia()==true){//Se a pilha estiver cheia, nao e possivel realizar a operacao
    *deuCerto = false;//Deu certo recebe falso
  }else{//Se a pilha nao estiver cheia
    *deuCerto = true;//A operacao pode ser realizada, deu certo recebe verdadeiro
    node *auxNode = new node;//No auxiliar eh criado
    auxNode->data = x;//O campo data do no auxiliar recebe x
    auxNode->next = topNode;//O campo next do no auxiliar aponta para onde o no do topo aponta
    topNode = auxNode;//No do topo passa a apontar para o no auxiliar que foi inserido na pilha
  }
}

void pilha::desempilha(char* x, bool *deuCerto){//Desempilha um elemento
  if(vazia()==true){//Se a pilha estiver vazia, nao e possivel realizar a operacao
    *deuCerto = false;//Deu certo recebe falso
  }else{//Se a pilha nao estiver vazia
    *deuCerto = true;//A operacao pode ser realizada, deu certo recebe verdadeiro
    *x = topNode->data;//O parametro x recebe o valor no campo data do no que sera retirado
    node *auxNode = new node;//Cria-se um no auxiliar
    auxNode=topNode;//O no auxiliar aponta para onde o no do topo aponta
    topNode = auxNode->next;//No do topo passa a aponta para onde o campo next do no auxiliar aponta
    delete auxNode;//Deleta o no auxiliar, elemento retirado.
  }
}