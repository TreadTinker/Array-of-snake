// Array-of-snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>


int main()
{
    //CONST'S
    const int ROWS = 10;
    const int COLS = 10;

    int stroka = 0, stolbec = 0, k = 0, s = 1;

    int** arr = new int* [ROWS];
    for (int i = 0; i < ROWS; i++) {
        arr[i] = new int[COLS];
    }
    while (stroka < ROWS) {
        arr[stroka][stolbec] = k++;
        stolbec += s;
        if (stolbec == COLS - 1) {
            arr[stroka][stolbec] = k++;
            stroka++;
            s = -1;
        }
        else if (stolbec == 0) {
            arr[stroka][stolbec] = k++;
            stroka++;
            s = 1;
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << std::setw(4) << arr[i][j];
        }
        std::cout << std::endl;
    }
}

