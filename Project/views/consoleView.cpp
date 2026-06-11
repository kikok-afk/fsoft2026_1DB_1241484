//
// Created by kikok on 11/06/2026.
//

#include "ConsoleView.h"
#include <iostream>

int ConsoleView::mostrarMenuPrincipal() {
    int opcao;
    std::cout << "\n==================================\n";
    std::cout << "        CINEMA - LOGIN / REGISTO  \n";
    std::cout << "==================================\n";
    std::cout << "1. Iniciar Sessao (Login)\n";
    std::cout << "2. Criar Nova Conta (Registo)\n";
    std::cout << "3. Sair\n";
    std::cout << "Escolha uma opcao: ";
    std::cin >> opcao;
    return opcao;
}

void ConsoleView::pedirCredenciaisLogin(std::string& username, std::string& password) {
    std::cout << "\n--- INICIAR SESSAO ---\n";
    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;
}

void ConsoleView::pedirDadosRegisto(std::string& username, std::string& password, std::string& email) {
    std::cout << "\n--- CRIAR CONTA DE CLIENTE ---\n";
    std::cout << "Username pretendido: ";
    std::cin >> username;
    std::cout << "Password pretendida: ";
    std::cin >> password;
    std::cout << "E-mail para receber bilhetes: ";
    std::cin >> email;
}

void ConsoleView::mostrarMensagem(const std::string& mensagem) {
    std::cout << "\n[SUCESSO] " << mensagem << "\n";
}

void ConsoleView::mostrarErro(const std::string& erro) {
    std::cout << "\n[ERRO] " << erro << "\n";
}