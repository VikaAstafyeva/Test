
#include <Windows.h>
#include <iostream>
#include <cstdlib>

using namespace std;

void Print(int* M, int n);   // виведення масиву
void RandomFill(int* M, int n);   // заповнення массиву рандомними числами
void Sort(int* M, int n);   // сортування масиву

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 12;
    int* A = new int[n];
    RandomFill(A, n);
    Sort(A, n);
    Print(A, n);
    delete[] A;
    getchar;
    return 0;
}
// заповнення массиву рандомними числами
void RandomFill(int* M, int n)
{
    for (int i = 0;i < n;i++)
    {
        M[i] = rand() % 100;
    }
}

void Sort(int* M, int n)   // сортування масиву
{
    int i, j, rab;
    for (i = 0;i < n;i++)
    {
        rab = M[i];
        j = i;
        while (j > 0 && rab > M[j - 1])
        {
            M[j] = M[j - 1];
            j--;
        }
        M[j] = rab;
    }
}

// виведення масиву
void Print(int* M, int n)
{
    cout << "Вісортований по спаданню масив" << endl;
    for (int i = 0;i < n;i++)
    {
        cout << M[i] << " ";
    }
    cout << endl;
}