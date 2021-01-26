#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int value;
    int board[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> board[i][j];
        }
    }

    //std::cout << std::endl;
    int currentrow;
    int currentcolumn;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //std::cout << board[i][j] << " ";
            if (board[i][j] == 0)
            {
                currentrow = i;
                currentcolumn = j;
            }
        }
        //std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        //std::cout << board[i][j] << " ";
            if (board[i][j] == 0)
            {
                currentrow = i;
                currentcolumn = j;
            }
        }
        //std::cout << std::endl;
    }

    // std::string input;
    // std::getline(std::cin, input);
    // //int length = std::strlen(input);
    // std::cout << input << std::endl;

    std::string steps;
    for (unsigned i(0); i < 12 && std::cin >> steps; ++i)
    {
        if (steps == "D" && currentrow + 1 <= 2)
        {
            std::swap(board[currentrow][currentcolumn], board[currentrow + 1][currentcolumn]);
            currentrow = currentrow + 1;
            continue;
        }

        if (steps == "U" && currentrow - 1 >= 0)
        {
            std::swap(board[currentrow][currentcolumn], board[currentrow - 1][currentcolumn]);
            currentrow = currentrow - 1;
            continue;
        }

        if (steps == "L" && currentcolumn - 1 >= 0)
        {
            std::swap(board[currentrow][currentcolumn], board[currentrow][currentcolumn - 1]);
            currentcolumn = currentcolumn - 1;
            continue;
        }

        if (steps == "R" && currentcolumn + 1 <= 2)
        {
            std::swap(board[currentrow][currentcolumn], board[currentrow][currentcolumn + 1]);
            currentcolumn = currentcolumn + 1;
            continue;
        }

        if (steps == "U" || steps == "D" || steps == "L" || steps == "R")
        {
            continue;
        }

        break;
    }

    //Check
    int count = 0;

    bool valid = true;
    for (int i = 0; i < 3; i++)
    {
        if (board[2][2] == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                count++;
                if (board[i][j] != count && count < 9)
                {
                    valid = false;
                    break;
                }
            }
        }
        else
        {
            valid = false;
            break;
        }
    }

    if (valid == true)
    {
        std::cout << "Solution is good!" << std::endl;
    }
    else
    {
        std::cout << "Wrong solution!" << std::endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}