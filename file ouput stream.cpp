#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;    //create stream

    fout.open("my.txt");    //load file in ram

    fout << "Radhey radhey govind \n govind radhey ";       //writing data into file

    fout.close();            //closing the file

    return 0;
}