#include <iostream>
#include <fstream>
// step 1

using namespace std;
int main()
{

    int average1;
    int average2;
    ifstream inputFile;
    ofstream outputFile;

    inputFile.open("input.txt");
    outputFile.open("output.txt", ios::app);

    if (!inputFile)
    {
        cout << "the input file is not opened." << endl;
        exit(1);
    }
    if (!outputFile)
    {
        cout << "the output file is not opened." << endl;
        exit(1);
    }

    string name[10];
    double scores[2][10];

    int y = 0;
    int x;

    while (!inputFile.eof())
    {

        inputFile >> name[y];
        y++;

        x = 0;

        while (x <= 2)
        {

            inputFile >> scores[y][x];

            x++;
        }

        y++;
    }

    for (int i = 0; i < y; i++)
    {
        outputFile << "Name: " << name[i] << "\t";

        outputFile << "score1: " << scores[y][x]

                   << " score2: " << score2[i] << endl;
    }

    inputFile.close();
    outputFile.close();
}