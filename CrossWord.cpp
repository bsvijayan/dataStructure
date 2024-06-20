#include <iostream>

int main()
{
    const int row = 4;
    const int column = 4;
    bool match = false;  
    char val[row][column] = {
        {'a','b','c','d'},
        {'c','d','e','f'},
        {'f','g','h','t'},
        {'f','g','h','t'}
    };
    std::string str = "abc";

     
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= column - str.length(); j++) 
        {
            bool found = true;
            for (int k = 0; k < str.length(); k++)
            {
                if (val[i][j + k] != str[k])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                match = true;
                break;
            }
        }
        if (match) break;  
    }

     
    if (!match) 
    {
        for (int i = 0; i <= row - str.length(); i++)
        {
            for (int j = 0; j < column; j++)
            {
                bool found = true;
                for (int k = 0; k < str.length(); k++)
                {
                    if (val[i + k][j] != str[k])
                    {
                        found = false;
                        break;
                    }
                }
                if (found)
                {
                    match = true;
                    break;
                }
            }
            if (match) break; 
        }
    }

    if (match)
    {
        std::cout << "Match found";
    }

    return 0;
}
