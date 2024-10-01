// Sphesihle Duma 59365552
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream myfile("test.txt");
    myfile << "Testing the first file";
    myfile.close(); 

    return 0;
}
