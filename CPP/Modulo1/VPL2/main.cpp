#include <iostream>
#include <string>

void printer(int size)
{
    char star = '*'; 
    std::cout << std::string(size, star) << std::endl;
}

// Travis CI
int main(int argc, char** argv)
{
    int height;
    int printValue = 1;
    bool hasReachedMaxHeight = false;

    std::cout << "Insira a altura maxima da piramide: ";
    if (argc)
    {
        height = std::atoi(argv[1]);
    } else
    {
        std::cin >> height;
    }
    std::cout << std::endl;
    for (int i = 0; i < ((height*2)-1); i++)
    {
        if (printValue < height && !hasReachedMaxHeight)
        {
            printer(printValue);
            printValue++;
            hasReachedMaxHeight = (printValue == height) ? true : false;
        } else
        {
            printer(printValue);
            printValue--;
        }
    }
}