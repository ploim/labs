//683a
#include <iostream>
#include <cstdlib>
#include <ctime>

void swapRows(int** matrix, int row1, int row2, int size) // Функция для перестановки строк
{
    for (int i = 0; i < size; i++)
    {
        int temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}
void swapColumns(int** matrix, int col1, int col2, int size) // Функция для перестановки столбцов
{
    for (int i = 0; i < size; i++)
    {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}
void printMatrix(int** matrix, int size) // Функция для вывода марицы
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
int main()
{
    std::srand(time(0)); // Инициализируем генератор псевдослучайных чисел
    float n;
    std::cout << "Программа, перемещающая максимальный по модулю элемент матрицы в левый верхний её угол:" << std::endl;
    std::cout << "(Используя только перестановку двух строк или столбцов)" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "Введите значение для n: ";
    std::cin >> n;
    if((n == int(n)) && (n > 0)) // Проверка n на натуральность
    {
        const int size = n;
        int** matrix = new int*[size];
        for (int i = 0; i < size; i++)
        {
            matrix[i] = new int[size];
            for (int j = 0; j < size; j++)
            {
                matrix[i][j] = rand() % 100 - 50; // Заполняем матрицу псевдослучайными числами из диапазона [-50;49]
            }
        }
        
        std::cout << "Исходная матрица:" << std::endl;
        printMatrix(matrix, size);
        
        // Находим индексы наибольшего элемента
        int maxRowIndex = 0;
        int maxColIndex = 0;
        int maxElement = matrix[0][0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (abs(matrix[i][j]) > abs(maxElement))
                {
                    maxElement = matrix[i][j];
                    maxRowIndex = i;
                    maxColIndex = j;
                }
            }
        }
        
        // Переставляем строку с наибольшим элементом с первой строкой
        swapRows(matrix, 0, maxRowIndex, size);
        
        // Переставляем столбец с наибольшим элементом с первым столбцом
        swapColumns(matrix, 0, maxColIndex, size);
        
        std::cout << "Матрица после перестановки:" << std::endl;
        printMatrix(matrix, size);
        
        // Освобождаем выделенную память
        for (int i = 0; i < size; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
    else
    {
        std::cout << "Ошибка. Введите натуральное n.";
    }
    return 0;
}