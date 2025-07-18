#include "hola.hpp"

hola::hola() {
    // Constructor por defecto
}

hola::hola(const hola &other) {
    *this = other;
}

hola &hola::operator=(const hola &other) {
    if (this != &other) {
        // Copiar los atributos aquí
    }
    return *this;
}

hola::~hola() {
    // Destructor
}