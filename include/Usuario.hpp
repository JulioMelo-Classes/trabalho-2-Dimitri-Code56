#ifndef Usuario_h
#define Usuario_h

#include <iostream>

class Usuario{
    private:
        unsigned int m_id;
        std::string m_nome;
        std::string m_email;
        std::string m_senha;

    public:
        Usuario();
        Usuario(std::string nome, std::string email, std::string senha, unsigned int m_id); //construtor

        void set_id(int id);
        int get_id();
        std::string getNome();
        std::string getEmail();
        std::string getSenha();
};



#endif //Usuario_hpp