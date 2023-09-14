#include <iostream>
#include <string>
#include <cstdint>

int main() {
    // Tipos de datos numéricos
    int entero = 42;
    double decimal = 3.14159;
    float flotante = 2.71828;
    char caracter = 'A';
    bool booleano = true;

    // Tipos de datos de tamaño fijo
    int8_t entero8 = 127;
    int16_t entero16 = 32767;
    int32_t entero32 = 2147483647;
    int64_t entero64 = 9223372036854775807;
    uint8_t enteroSinSigno8 = 255;
    uint16_t enteroSinSigno16 = 65535;
    uint32_t enteroSinSigno32 = 4294967295;
    uint64_t enteroSinSigno64 = 18446744073709551615;

    // Tipo de dato de caracteres
    char cadena[] = "Hola, mundo!";

    // Tipo de dato de cadena
    std::string cadenaTexto = "Este es un ejemplo de cadena de texto.";

    // Tipo de dato puntero
    int* punteroEntero = &entero;

    // Tipo de dato puntero a función
    int (*punteroFuncion)(int, int) = [](int a, int b) -> int {
        return a + b;
    };

    // Tipo de dato void
    void* punteroVoid = nullptr;

    // Imprimir los valores, tipos de datos y tamaños
    std::cout << "Entero (int): " << entero << " (Tamaño en bytes: " << sizeof(int) << ")" << std::endl;
    std::cout << "Decimal (double): " << decimal << " (Tamaño en bytes: " << sizeof(double) << ")" << std::endl;
    std::cout << "Flotante (float): " << flotante << " (Tamaño en bytes: " << sizeof(float) << ")" << std::endl;
    std::cout << "Caracter (char): " << caracter << " (Tamaño en bytes: " << sizeof(char) << ")" << std::endl;
    std::cout << "Booleano (bool): " << booleano << " (Tamaño en bytes: " << sizeof(bool) << ")" << std::endl;

    // Tipos de datos de tamaño fijo
    std::cout << "Entero 8 bits (int8_t): " << static_cast<int>(entero8) << " (Tamaño en bytes: " << sizeof(int8_t) << ")" << std::endl;
    std::cout << "Entero 16 bits (int16_t): " << entero16 << " (Tamaño en bytes: " << sizeof(int16_t) << ")" << std::endl;
    std::cout << "Entero 32 bits (int32_t): " << entero32 << " (Tamaño en bytes: " << sizeof(int32_t) << ")" << std::endl;
    std::cout << "Entero 64 bits (int64_t): " << entero64 << " (Tamaño en bytes: " << sizeof(int64_t) << ")" << std::endl;
    std::cout << "Entero sin signo 8 bits (uint8_t): " << static_cast<unsigned int>(enteroSinSigno8) << " (Tamaño en bytes: " << sizeof(uint8_t) << ")" << std::endl;
    std::cout << "Entero sin signo 16 bits (uint16_t): " << enteroSinSigno16 << " (Tamaño en bytes: " << sizeof(uint16_t) << ")" << std::endl;
    std::cout << "Entero sin signo 32 bits (uint32_t): " << enteroSinSigno32 << " (Tamaño en bytes: " << sizeof(uint32_t) << ")" << std::endl;
    std::cout << "Entero sin signo 64 bits (uint64_t): " << enteroSinSigno64 << " (Tamaño en bytes: " << sizeof(uint64_t) << ")" << std::endl;

    // Otros tipos de datos
    std::cout << "Cadena de caracteres (char[]): " << cadena << " (Tamaño en bytes: " << sizeof(cadena) << ")" << std::endl;
    std::cout << "Cadena de texto (std::string): " << cadenaTexto << " (Tamaño en bytes: " << sizeof(cadenaTexto) << ")" << std::endl;
    std::cout << "Puntero a entero (int*): " << *punteroEntero << " (Tamaño en bytes: " << sizeof(int*) << ")" << std::endl;
    std::cout << "Resultado de la función (int (*)(int, int)): " << punteroFuncion(5, 7) << " (Tamaño en bytes: " << sizeof(punteroFuncion) << ")" << std::endl;

    return 0;
}
