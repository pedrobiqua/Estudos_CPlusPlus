// MutexThreadsStudy.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex trava;

//O mutex serve para controlar a manipulação da variavel int p
void funcao_f0(int& p, int& size) {
    int* i = &p;

    for (int j = 0; j < size; ++j) {
        trava.lock();
        int temp = *i;
        temp = temp + 1;
        *i = temp;
        std::cout << "f0: " << *i << '\n';
        trava.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void funcao_f1(int& p, int& size) {
    int* i = &p;

    for (int j = 0; j < size; ++j) {
        trava.lock();
        int temp = *i;
        temp = temp + 1;
        *i = temp;
        std::cout << "f1: " << *i << '\n';
        trava.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

// Exemplo simples de uso de thread em c++
int main() {

    std::cout << "Testando threads no cpp!\n";
    int i = 0;
    int size = 20;
    std::thread f0(funcao_f0, std::ref(i), std::ref(size));
    std::thread f1(funcao_f1, std::ref(i), std::ref(size));

    f0.join();
    f1.join();

    return 0;
}