//Дана последовательность целых чисел {Aj}.
// Найти сумму отрицательных чисел, кратных 7, наибольшее из таких чисел и номер этого числа в последовательности.

#include <iostream>
int main()
{
    int n;
    std::cin>> n;
    int x;
    int sum = 0;
    int el=0;
    int maxim=INT_MIN;
    for(int i=0; i<n; i++)
    {
        std::cin>>x;
        if (x<0 && x % 7 == 0)
        {
            sum += x;
            if (x > maxim)
            {
                maxim = x;
                el = i + 1;
            }
        }
    }
    std::cout<<"Сумма отрицательных чисел "<<sum<<std::endl;
    std::cout<<"Наибольшее "<<maxim<<std::endl;
    std::cout<<"Номер числа "<<el<<std::endl;
    return 0;
}
