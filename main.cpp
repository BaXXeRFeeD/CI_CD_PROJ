#include <iostream>
#include <list>
#include <fstream>
using namespace std;

int main() {
    int width = 16;
    int length = 16;
    fstream filein;
    filein.open("book (1).tsv");
    long long array[width][length];
    std::string stringgetline;
    int point;
    int k = 0;
    std::string filename = "text";
    for (int i = 0; i < width; i++) {
        getline(filein, stringgetline);
        stringgetline = "\t" + stringgetline;
        point = 0;
        for (int j = 1; j < stringgetline.size(); j++) {
            if (stringgetline[j] == '\t') {
                array[i][k] = stoi(stringgetline.substr(point, j - point + 1));
                point = j;
                k++;
            }
        }
        array[i][k] = stoi(stringgetline.substr(point, stringgetline.size() - point + 1));
        k = 0;
    }
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++)
            std::cout << array[i][j] << " ";
    }
    std::cout << '\n';
    return 0;
}