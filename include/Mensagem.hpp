#ifndef Mensagem.h
#define Mensagem.h

class Mensagem
{
private:
   std::string m_conteudo;
   std::string m_data_hora;
   int m_id;

public:
    Mensagem(std::string conteudo, std:: data_hora, int id);
    void set_id(int id);
    int get_id();
    std::string get_conteudo();
    std::string get_data_hora();

    
};


