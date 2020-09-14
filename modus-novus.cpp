# include <iostream>
#include <string>

#include <vector>
#include <string>
#include <unistd.h>
#include <experimental/random>


std::string intervals[5][3] = {{"2m", "2M"}, {"3m", "3M"}, {"4p", "t", "5p"}, {"6m", "6M"}, {"7m", "7M"}};
std::string direction[2] = {"->", "<-"};



int main() {
    
    std::cout << " 1. Segundas \n 2. Terceras \n 3. Cuarta, Tritono y Quinta \n 4. Sextas \n 5. Septimas \n 6. Todos \n"
        << "Seleccione un grupo de intervalos para estudiar: \n";

    int category;
    std::cin >> category;


    switch (category) {
    case 1:
        std:: cout << "Segundas \n";
        for (int i = 0; i < 10; i++) {
            int random = std::experimental::randint(0, 1);
            int randomThree = std::experimental::randint(0, 1);
            std::cout << intervals[0][random] << direction[randomThree] <<  "\n";
        }
        break;
    case 2:
        std:: cout << "Terceras \n";
        for (int i = 0; i < 10; i++) {
            int random = std::experimental::randint(0, 1);
            int randomThree = std::experimental::randint(0, 1);
            std::cout << intervals[1][random] << direction[randomThree] << "\n";
        }
        break;
    case 3:
        std:: cout << "Cuarto, Tritono y Quinta \n";
         for (int i = 0; i < 10; i++) {
            int random = std::experimental::randint(0, 2);
            int randomThree = std::experimental::randint(0, 1);
            std::cout << intervals[2][random] << direction[randomThree] << "\n";
        }
        break;
    case 4:
        std:: cout << "Sextas \n";
        for (int i = 0; i < 10; i++) {
            int random = std::experimental::randint(0, 1);
            int randomThree = std::experimental::randint(0, 1);
            std::cout << intervals[3][random] << direction[randomThree] << "\n";
        }
        break;
    case 5:
        std:: cout << "Septimas \n";
        for (int i = 0; i < 10; i++) {
            int random = std::experimental::randint(0, 1);
            int randomThree = std::experimental::randint(0, 1);
            std::cout << intervals[4][random] << direction[randomThree] << "\n";
        }
        break;
    case 6:
        std:: cout << "Todos \n";
        for (int i = 0; i < 10; i++) {
            int random = std::experimental::randint(0, 1);
            int randomTwo = std::experimental::randint(0, 4);
            int randomThree = std::experimental::randint(0, 1);
            std::cout << intervals[randomTwo][random] << direction[randomThree] << "\n";
        }
        break;
     default:
        std::cout << "Ingresa el digito que corresponde a la cateogira que deseas estudiar";
    }
    return 0;
}



