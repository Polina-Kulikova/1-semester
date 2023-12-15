//Ввести последовательность натуральных чисел {Aj}j=1...n (n<=1000).
// Упорядочить последовательность по неубыванию суммы цифр числа,
//числа с одинаковыми суммами цифр дополнительно упорядочить по неубыванию произведения цифр числа,
//числа с одинаковыми суммами цифр и одинаковыми произведениями цифр дополнительно
// упорядочить по неубыванию самого числа.
#include <iostream>
#include <cmath>
int main()
{
    const int N = 1000;
    int mas[N];
    int sum[N];
    int mult[N];
    int n;
    std::cin >> n;
    for (int d=0; d<n; d++)
        std::cin>>mas[d];
    for (int d=0; d<n; d++)
    {
        int tmp = mas[d];
        sum[d] = 0;
        mult[d] = 1;
        while (tmp > 0)
        {
            sum[d] += tmp % 10;
            mult[d] *= tmp % 10;
            tmp /= 10;
        }
    }
    /*for (int i = 0; i < n; i++)
    {
        std::cout << mas[i] << " " << sum[i] << " " << mult[i] << std::endl;
    }*/
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sum[i] > sum[j] ||
                sum[i] == sum[j] && mult[i] > mult[j] ||
                sum[i] == sum[j] && mult[i] == mult[j] && mas[i] > mas[j]) {

                std::swap(sum[i], sum[j]);
                std::swap(mult[i], mult[j]);
                std::swap(mas[i], mas[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << std::endl;

}