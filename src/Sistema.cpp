#include "Sistema.h"
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

#include "Sistema.h"
#include <iostream>
#include <sstream>
#include <algorithm>

/* COMANDOS */
std::string Sistema::quit() {
  return "Saindo...";
}

unsigned int Sistema::next_user_id(){
	m_next_user_id ++;
	return m_next_user_id;
}

unsigned int Sistema::next_server_id(){
	m_next_server_id ++;
	return m_next_server_id;
}

std::string Sistema::create_user (const string email, const string senha, const string nome) {

	if(usuarios.size() == 0){
		usuariosLogados.insert({1, {0,0}});
		usuariosLogados.insert(make_pair(2, make_pair(0,0)));
		usuariosLogados.insert(make_pair(3, make_pair(0,0)));
		usuariosLogados.insert(make_pair(4, make_pair(0,0)));
	}

	for(auto usr : usuarios){
		if (usr->getEmail() == email)
			return "Erro: usuario com este email já existe!";
	}

	//ninguém com esse email existe no sistema!!
	Usuario *usr = new Usuario(nome, email, senha, next_user_id());
	usuarios.push_back(usr);
	return "Usuário " + email + " criado!";
}

std::string Sistema::delete_user (const std::string email, const std::string senha){
	

	
	return "delete_user NÃO IMPLEMENTADO";
}

string Sistema::login(const string email, const string senha) {
	return "login NÃO IMPLEMENTADO";
}

string Sistema::disconnect(int id) {
	return "disconnect NÃO IMPLEMENTADO";
}

string Sistema::create_server(int id, const string nome) {
	cout<<"Create server "<<id<<endl;
	if(usuariosLogados.count(id) == 0)
		return "Erro: Usuario precisa estar logado!";
	
	for(auto &srv : servidores){
		if (srv.getNome() == nome)
			return "Erro: servidor com este nome já existe!";
	}

	for(auto usr : usuarios){
		if (usr->get_id() == id){
			Servidor srv(usr, nome, next_server_id());
			servidores.push_back(srv);
			return "Servidor " + nome + " Criado por " + usr->getEmail();
		}
	}

	return "Erro: durante o create_server " + nome;
}

string Sistema::set_server_desc(int id, const string nome, const string descricao) {
	return "set_server_desc NÃO IMPLEMENTADO";
}

string Sistema::set_server_invite_code(int id, const string nome, const string codigo) {
	return "set_server_invite_code NÃO IMPLEMENTADO";
}

string Sistema::list_servers(int id) {
	return "list_servers NÃO IMPLEMENTADO";
}

string Sistema::remove_server(int id, const string nome) {
	return "remove_server NÃO IMPLEMENTADO";
}

string Sistema::enter_server(int id, const string nome, const string codigo) {
	return "enter_server NÃO IMPLEMENTADO";
}

string Sistema::leave_server(int id, const string nome) {
	return "leave_server NÃO IMPLEMENTADO";
}

string Sistema::list_participants(int id) {
	return "list_participants NÃO IMPLEMENTADO";
}

string Sistema::list_channels(int id) {
	return "list_channels NÃO IMPLEMENTADO";
}

string Sistema::create_channel(int id, const string nome) {
	return "create_channel NÃO IMPLEMENTADO";
}

string Sistema::remove_channel(int id, const string nome) {
	return "remove_channel NÃO IMPLEMENTADO";
}
//checkin 4.1 50%
string Sistema::enter_channel(int id, const string nome) {
	return "enter_channel NÃO IMPLEMENTADO";
}

string Sistema::leave_channel(int id) {
	return "leave_channel NÃO IMPLEMENTADO";
}

//checkin 4.3 50%
string Sistema::send_message(int id, const string mensagem) {
	return "send_message NÃO IMPLEMENTADO";
}

string Sistema::list_messages(int id) {
	return "list_messages NÃO IMPLEMENTADO";
}