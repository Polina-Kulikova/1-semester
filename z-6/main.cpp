//push_back, erase, insert
//emplace_back
//resize, reserve, shrink_to_fit, capacity
//clear
//оператор присваивания и []
//Узнайте размер вектора и будьте готовы объяснить, почему именно так.

#include <iostream>
#include <vector>
int main()
{
    std::vector <int> vec = {1, 2, 45}; //задаем вектор
    std::cout<<"Изначальный размер вектора: "<<vec.size()<<std::endl;
    vec.push_back(23);//push_back копирует параметр
    vec.erase(vec.begin());//используется для удаления одного или нескольких элементов из вектора
    for (int i = 0; i <vec.size(); i++)
        std::cout<<vec[i]<<" ";
    std::cout<<std::endl;
    vec.at(0) = 15;//операция присвания
    vec[1] = 12;
    vec.insert(vec.begin(), 99); //добавляет элемент
    for (int i = 0; i <vec.size(); i++)
        std::cout<<vec[i]<<" ";
    std::cout<<std::endl;
    vec.emplace_back(10);//добавляет элемент в конец контейнера. emplace_back создает объект непосредственно в конце вектора
    vec.resize(6,10);
    for (int i = 0; i <vec.size(); i++)
        std::cout<<vec[i]<<" ";
    std::cout<<std::endl;
    vec.reserve(9);//может только увеличить ёмкость до заданного числа элементов (выделит память, но никаких элементов создано не будет). Т.е. вызов reserve() не влияет на size.
    vec.shrink_to_fit();//Эта функция уменьшает количество используемой памяти нашего вектора (иначе говоря, у нас есть вектор из 10 элементов, но он пустой, эта функция возвращает память системе, которую занимал наш пустой вектор)
    //shrink_to_fit() возвращает дополнительную память системе
    vec.capacity();//capacity возвращает количество элементов, для которых в данный момент выделено место в контейнере. (можно получить общий объём выделенной памяти)
    vec.clear();
    std::cout<<"Размер вектора после clear:  "<<vec.size();
    return 0;
}
