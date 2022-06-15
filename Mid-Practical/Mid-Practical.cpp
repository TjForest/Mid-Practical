#include <iostream>
#include <string>


void Question1()
{
    int answer;

    while (true)
    {
        std::cout << "What is the hex value of blue?" << "\n";
        std::cout << "1. #FF0000" << "\n"
                  << "2. #00FF00" << "\n"
                  << "3. #0000FF" << "\n"
                  << "4. #00F0F0" << "\n";

        std::cin >> answer;

        if (std::cin.fail())
        {
            std::cout << "Invalid input\n";
        }
        else
        {
            if (answer < 1 || answer > 4)
            {
                std::cout << "Invalid input\n";
            }
            else
            {
                switch (answer) {
                case 1:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 2:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 3:
                {
                    std::cout << "Correct!" << "\n\n";
                    return;
                }
                case 4: 
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                }
            }
        }
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
}

void Question2()
{
    int answer;

    while (true)
    {
        std::cout << "What is the best PC Game marketplace?" << "\n";
        std::cout << "1. Steam" << "\n"
                  << "2. Origin" << "\n"
                  << "3. EA Desktop" << "\n"
                  << "4. Epic Games" << "\n";

        std::cin >> answer;

        if (std::cin.fail())
        {
            std::cout << "Invalid input\n";
        }
        else
        {
            if (answer < 1 || answer > 4)
            {
                std::cout << "Invalid input\n";
            }
            else
            {
                switch (answer) {
                case 1:
                {
                    std::cout << "Correct!" << "\n\n";
                    return;
                }
                case 2:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 3:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 4:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                }
            }
        }
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
}

void Question3()
{
    int answer;

    while (true)
    {
        std::cout << "How many bits in a byte?" << "\n";
        std::cout << "1. 1" << "\n"
                  << "2. 8" << "\n"
                  << "3. 16" << "\n"
                  << "4. 64" << "\n";

        std::cin >> answer;

        if (std::cin.fail())
        {
            std::cout << "Invalid input\n";
        }
        else
        {
            if (answer < 1 || answer > 4)
            {
                std::cout << "Invalid input\n";
            }
            else
            {
                switch (answer) {
                case 1:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 2:
                {
                    std::cout << "Correct!" << "\n\n";
                    return;
                }
                case 3:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 4:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                }
            }
        }
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
}

void Question4()
{
    int answer;

    while (true)
    {
        std::cout << "What is the bestselling console of all time?" << "\n";
        std::cout << "1. Atari 2600" << "\n"
                  << "2. Xbox 360" << "\n"
                  << "3. Nintendo Wii" << "\n"
                  << "4. Playstation 2" << "\n";

        std::cin >> answer;

        if (std::cin.fail())
        {
            std::cout << "Invalid input\n";
        }
        else
        {
            if (answer < 1 || answer > 4)
            {
                std::cout << "Invalid input\n";
            }
            else
            {
                switch (answer) {
                case 1:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 2:
                {
                    std::cout << "incorrect" << "\n\n";
                    return;
                }
                case 3:
                {
                    std::cout << "incorrecrt" << "\n\n";
                    return;
                }
                case 4:
                {
                    std::cout << "Correct!" << "\n\n";
                    return;
                }
                }
            }
        }
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
}

int main()
{
    srand(time(NULL));
    bool again = true;
    bool valid = false;
    int answer;

    while (again)
    {
        int rando = rand() % 4 + 1;

        switch (rando) {
        case 1:
        {
            Question1();
            break;
        }
        case 2:
        {
            Question2();
            break;
        }
        case 3:
        {
            Question3();
            break;
        }
        case 4:
        {
            Question4();
            break;
        }
        }
        valid = false;
        while (!valid)
        {
            std::cout << "Would you like to play again?" << "\n";
            std::cout << "1. Yes" << "\n"
                      << "2. No" << "\n";

            std::cin >> answer;

            if (std::cin.fail())
            {
                std::cout << "Invalid input\n";
            }
            else
            {
                if (answer < 1 || answer > 2)
                {
                    std::cout << "Invalid input\n";
                }
                else
                {
                    switch (answer) {
                    case 1:
                    {
                        valid = true;
                        break;
                    }
                    case 2:
                    {
                        valid = true;
                        again = false;
                        break;
                    }
                    }
                }
            }
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "\n";
        }
    }
}
