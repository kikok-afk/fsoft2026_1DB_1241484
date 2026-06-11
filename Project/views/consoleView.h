//
// Created by kikok on 11/06/2026.
//

#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

#include <string>

class ConsoleView {
public:
    // Menu Inicial
    static int mostrarMenuPrincipal();

    // Vistas de Autenticação (Input de Dados)
    static void pedirCredenciaisLogin(std::string& username, std::string& password);
    static void pedirDadosRegisto(std::string& username, std::string& password, std::string& email);

    // Mensagens de Feedback
    static void mostrarMensagem(const std::string& mensagem);
    static void mostrarErro(const std::string& erro);
};

#endif