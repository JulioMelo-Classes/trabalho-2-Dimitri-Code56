#ifndef Servidor_hpp
#define Servidor_hpp

#include <iostream>
#include <vector>
#include "Usuario.hpp"

class Servidor{
    private:
        unsigned int m_id;
        Usuario* m_dono;
        std::string m_nome;
        std::string m_descricao;
        std::string m_codigoConvite;
        //vector<CanalTexto> canaisTexto
        std::vector<Usuario*> m_participantes;
    
    public:
        Servidor(Usuario* dono, std::string nome, unsigned int id);

        std::string getNome();

};

#endif // Servidor_hpp