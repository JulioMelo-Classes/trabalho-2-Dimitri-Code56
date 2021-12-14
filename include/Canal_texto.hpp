#ifndef Canal_texto.h
#define Canal_texto.h
#include "usuario.h"
#include <iostream>
#include <string>
#include "Mensagem.h"


class canal_texto
{
private:
    unsigned int id;
    std:string nome;
    Usuario *dono;
    std::vector<Mensagem> mensagens;
    
public:
    canal_texto(usigned int id, std:string nome, Usuario *dono, std::vector<Mensagem> mensagens);

    
};



#endif//canal_texto.h
