//Дана целочисленная матрица {Aij}i=1..n,j=1..m (n,m<=100).
// Найти строку с наибольшим произведением элементов
// и заменить все элементы этой строки этим произведением.
#include <iostream>
int main()
{
    int matrix[3][3];
    int max_pr = INT_MIN;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            std::cin >> matrix[i][j];
    //std::cout << matrix[0][0] << std::endl;//элемент под номером 1,1
    int a = 1;
    int num_line = 0;
    for (int i = 0; i < 3; i++)
    {
            for (int j = 0; j < 3; j++)
            {
                a *= matrix[i][j];
                if (a > max_pr)
                {
                    max_pr = a;
                    num_line = i;
                }
            }
            a = 1;
    }
        //std::cout << matrix[i][i] << " ";//выведет главную диагональ
    for (int j = 0; j < 3; j++)
    {
        matrix[num_line][j] = max_pr;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout<<std::endl;
    }
}
