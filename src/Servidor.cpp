#include "Servidor.hpp"

Servidor::Servidor(Usuario* dono, std::string nome, unsigned int id){
    m_dono = dono;
    m_id = id;
    m_nome = nome;
}

std::string Servidor::getNome(){
    return m_nome;
}
