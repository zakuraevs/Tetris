#include <iostream>
#include <string>

// Array of 7 strings
std::string tetromino[7];

int rotate(int x, int y, int r) {
    switch(r%4) {
        case 0: return y * 4 + x;
    }
    return 0;
}


int main() {

    tetromino[0].append("..X.");
    tetromino[0].append("..X.");
    tetromino[0].append("..X.");
    tetromino[0].append("..X.");

    tetromino[1].append("..X.");
    tetromino[1].append(".XX.");
    tetromino[1].append(".X..");
    tetromino[1].append("....");

    tetromino[2].append(".X..");
    tetromino[2].append(".XX.");
    tetromino[2].append("..X.");
    tetromino[2].append("....");

    tetromino[3].append("....");
    tetromino[3].append(".XX.");
    tetromino[3].append(".XX.");
    tetromino[3].append("....");

    tetromino[4].append("..X.");
    tetromino[4].append(".XX.");
    tetromino[4].append("..X.");
    tetromino[4].append("....");

    tetromino[5].append("....");
    tetromino[5].append(".XX.");
    tetromino[5].append("..X.");
    tetromino[5].append("..X.");

    tetromino[6].append("....");
    tetromino[6].append(".XX.");
    tetromino[6].append(".X..");
    tetromino[6].append(".X..");

    std::cout << tetromino[0] << std::endl;



    return 0;
}
