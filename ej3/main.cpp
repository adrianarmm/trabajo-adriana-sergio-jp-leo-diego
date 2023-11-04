#include <iostream>
#include <stdexcept>
//Función que envia/lanza la excepción
void lanzarExcepción() {
    std::cout <<"Lanzando una excepción. " << std::endl;
    throw std::runtime_error("Esta es una excepcion no manejada.");
}
//Función en la entra la excepción
void funcionIntermedia() {
    std::cout << "Entrando en la funcion intermedia. " << std::endl;
    lanzarExcepción();  //Llama a la función que lanza la excepción. Línea 4.
    std::cout << "Saliendo de la funicon intermedia. " << std::endl;
}
//Función principalque llame a la intermedia
int main () {
    try {
        std::cout << "Entrando en la funcion principal. " << std::endl;
        funcionIntermedia(); // Llama a la función intermedia. Linea 9.
        std::cout << "Saliendo de la fuancion principal. " << std::endl;
    }
    //Mensaje de error que confirma que la excepción fue capturada.
    catch (const std::exception &e) {
        std::cerr << "Excepción caputrada: " << e.what() << std::endl;
    }
    return 0;
}