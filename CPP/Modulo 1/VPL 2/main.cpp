#include <iostream>
#include <string>

void printer(int size)
{
    char star = '*'; 
    std::cout << std::string(size, star) << std::endl;
}

// CI Testing
int main()
{
    int height;
    int printValue = 1;
    bool hasReachedMaxHeight = false;

    std::cout << "Insira a altura maxima da piramide: ";
    std::cin >> height;


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