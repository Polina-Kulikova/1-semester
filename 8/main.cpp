//Дано целое число типа unsigned int, выведите на экран содержимое каждого из его байтов,
// используя знания по указателям. Дайте обоснование полученному результату.
//&c - адрес
//char* p - указатель
//*p - разыменование
#include <iostream>
int main()
{
    unsigned int n;
    std::cin >> n;
    char* y = (char*) &n;
    for (int i = 0; i < 4; i++) //sizeof(unsigned int) = 4
    {
        std::cout << (int)(*(y + i)) << " " ;
    }
}
