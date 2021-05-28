#include <iostream>

using namespace std;

int main()
{
    int a;  //initialization
    a = 12; //declearation
    cout << "size of int: " << sizeof(a) << endl;
    //int is 4 bytes
    float b;
    b = 13;
    cout << "size of float: " << sizeof(b) << endl;
    //float is 4 bytes
    char c;
    cout << "size of character :" << sizeof(c) << endl;
    //char is 1 bytes
    short int i;
    long int j;
    cout << "size of short int i\t" << sizeof(i) << endl;
    cout << "size of long int j\t" << sizeof(j) << endl;

    return 0;
}