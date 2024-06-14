#include <iostream>
#include <locale.h>
#include "daoCiudad.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_CTYPE, "Spanish");
    principal();
    return 0;
}