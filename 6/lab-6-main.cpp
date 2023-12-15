//Вариант-6.
//Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100.
// Если в матрице есть еще один элемент, равный ее максимальному элементу,
// упорядочить строки матрицы по невозрастанию количества простых чисел среди элементов строк.
#include <iostream>
#include "lab-6.hpp"
int main()
{
    int matrix[100][100];
    int n;
    int c;
    std::cin >> n;
    kp::dff( matrix, n);
    int max_i = 0, max_j = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (matrix[max_i][max_j] < matrix[i][j])
            {
                max_i = i;
                max_j = j;
            }
    std::cout << "Max element: "<< matrix[max_i][max_j] << std::endl;
    int k = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if (matrix[max_i][max_j] == matrix[i][j])
                k += 1;
    std::cout<<"Количество чисел равных максимальному: " << k << std::endl;
    if (k>=1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int r = kp::che(matrix[i], n);
                int t = kp::che(matrix[j], n);
                if (r < t)
                    std::swap(matrix[i], matrix[j]);
            }
        }
    }
    kp::fdd(matrix,n);
    return 0;
}