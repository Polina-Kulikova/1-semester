//Ввести натуральные числа A, B и C. Если A меньше B и B больше C, то вывести B+A-C,
// в противном случае если B кратно C, то вывести B/С-B, в остальных случаях вывести A*B-C.
//Ввести натуральное число N, обозначающее номер месяца в году.
// Используя оператор switch вывести названия всех месяцев года. Предусмотреть обработку ошибочного ввода N.
// Примеры: 2 7 5 вывод: 4
// 96 4 2 вывод: -2
// 7 2 5 вывод: 9
#include <iostream>
using std::cout;
int main()
    {
    int a,b,c;
    std::cin>> a>>b>>c;
    if ((a<b) and (b>c))
    {
        std::cout<<(b+a-c);
    }
    else if (b%c == 0)
    {
        std::cout <<(b/c-b);
    }
    else
    {
        std::cout<< (a*b-c);
    }
    int n;
    std::cin >> n;
    switch (n) {
        case 1:
            std::cout << "Январь";
            break;
        case 2:
            std::cout << "Февраль";
            break;
        case 3:
            std::cout << "Март";
            break;
        case 4:
            std::cout << "Апрель";
            break;
        case 5:
            std::cout << "Май";
            break;
        case 6:
            std::cout << "Июнь";
            break;
        case 7:
            std::cout << "Июль";
            break;
        case 8:
            std::cout << "Август";
            break;
        case 9:
            std::cout << "Сентябрь";
            break;
        case 10:
            std::cout << "Октябрь";
            break;
        case 11:
            std::cout << "Ноябрь";
            break;
        case 12:
            std::cout << "Декабрь";
            break;
        default:
            std::cout << "Ошибка, такого номера месяца не существует";
    }
    return 0;
}
