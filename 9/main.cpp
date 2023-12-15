//Вариант 6
//Найти объём куба
#include <iostream>
#include <cmath>
class Cube
{
private:
    // 1 принцип: Абстракция - от реального объекта берем минимальный набор параметров,
    // необходимых для решения задачи
    float m_a = 0;

// 2 принцип: Инкапсуляция - разграничение доступа к полям и методам класса
public:
    // Конструктор
    Cube(float a)
    {
        m_a = a;
    }

    // Деструктор
    ~Cube() {}

    bool Side(float a)
    {
        if (a <= 0)
        {
            std::cout<<"Error in side" << std::endl;
            return false;
        }
        return true;
    }
    float Volume (float a)
    {
        return pow(a,3);
    }
};

int main()
{
    float a;
    std::cin>> a;
    Cube cube1(a);
    cube1.Side(a);
    std::cout << cube1.Volume(a) <<std::endl;
    return 0;
}
