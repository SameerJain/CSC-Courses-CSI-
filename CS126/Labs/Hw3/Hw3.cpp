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
    double score1[10];
    double score2[10];

    int counter = 0;
    while (!inputFile.eof())
    {

        inputFile >> name[counter] >> score1[counter] >> score2[counter];

        average1 += score1[counter];
        average2 += score2[counter];

        counter++;
    }

    for (int i = 0; i < counter; i++)
    {
        outputFile << "Name: " << name[i]
                   << "\t"
                   << "score1: " << score1[i] << " score2: " << score2[i] << endl;
    }

    outputFile << average1 / 10 << " " << average2 / 10;

    inputFile.close();
    outputFile.close();
}