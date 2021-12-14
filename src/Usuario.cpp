#include "Usuario.hpp"

#include <iostream>

Usuario::Usuario(){
    m_id = 0;
    m_nome = "";
    m_email = "";
    m_senha = "";
}

Usuario::Usuario(std::string nome, std::string email, std::string senha, unsigned int id){
    m_id = id;
    m_nome = nome;
    m_email = email;
    m_senha = senha;
}

void Usuario::set_id(int id){
    m_id = id;
}

int Usuario::get_id(){
    return m_id;
}

std::string Usuario::getNome(){
    return m_nome;
}

std::string Usuario::getEmail(){
    return m_email;
}

std::string Usuario::getSenha(){
    return m_senha;
}
