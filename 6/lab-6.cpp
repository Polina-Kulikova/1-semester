#include "lab-6.hpp"
#include <cmath>
#include <iostream>
namespace kp
{
    bool isPrime(int x)
    {
        if (x < 2)
            return false;
        if (x >= 2)
        {
            for (int d = 2; d <= sqrt(x); d++)
            {
                if (x % d == 0)
                    return false;
            }
        }
        return true;
    };

    int che(int mas[100], int n)
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (isPrime(mas[i]))
            {
                c += 1;
            }
        }
        return c;
    }

    void dff(int matrix[100][100], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                std::cin >> matrix[i][j];
        }
    }
    void fdd(int matrix[100][100], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << matrix[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
}