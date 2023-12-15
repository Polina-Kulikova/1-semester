//Дана строка длиной не более 100 символов.
// Найти в ней позицию заданного символа или определить, что такого символа в строке нет.
#include <iostream>
#include <string>
#include <fstream>
int main()
{
    char str[100] = "g8qkK8VP6nJoQuwSxmdY5fnKUtdmW6QUFYiO0N1Lp5v7SvGMuqvHmuIIaCxLSDzxq8jX8swaHMHojuRIC5NSMtpoX3e3iCixLSk";
    char d;
    std::cout << "Введите символ: ";
    std::cin >> d;
    bool flag = false;
    for (int i = 0; i < 100; i++)//strlen(str)
    {
        if (str[i] == d)
        {
            std::cout << i+1<<std::endl;
            flag = true;
        }
    }
    std::cout<<" ";
    if (flag == false)
    {
        std::cout<<"No symbol";
    }
    return 0;
}
