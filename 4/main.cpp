//Дана последовательность натуральных чисел {aj}j=1...n (n<=10000).
// Если в последовательности нет ни одного простого числа, упорядочить последовательность по неубыванию.

#include <iostream>
#include <cmath>
int main()
{
    const int N =3;
    int k = 0;
    int temp;
    int mas[N];
    for (int d=0; d<N; d++)
        std::cin>>mas[d];
    bool isPrime = true;
    for (int d=0; d<N; d++)
    {
        for (int i = 2; i <= sqrt(mas[d]); i++)
            if (mas[d] % i == 0)
            {
                isPrime = false; // Составное число
                break;
            }
        if (isPrime)
            k += 1;
    }
        if (k == 0)
        {
            for (int i = 0; i < N - 1; i++)
            {
                for (int j = i + 1; j < N; j++)
                {
                    if (mas[i] > mas[j])
                    {
                        std::swap(mas[i], mas[j]);
                    }
                }
            }
            for (int i = 0; i < N; i++)
                std::cout << mas[i] << std::endl;
        }
}
