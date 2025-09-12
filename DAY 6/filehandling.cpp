#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    //writing into a file
    ofstream outputFile;   //("output.txt");
    outputFile.open("output.txt",ios::app);//open in append mode
    if(outputFile.is_open())
    {
        // outFile<<"this is the first line ."<<endl;
        // outFile<<"this is the second line ."<<endl;
        outputFile<<"\nLog entry at"<<"12-09-2006 2 42"<<endl;
        outputFile.close();
        outputFile<<"data appended successfully."<<endl;
    }
    else
    {
        cerr<<"error opening file for writing,"<<endl;           
    }
    //reading from the file

    ifstream inFile("output.txt");
    if(inFile.is_open())
    {
        string line;
        while(getline(inFile,line))
        {
            cout<<"Read: "<<line<<endl;
        }
        inFile.close();
    }
    else
    {
        cerr<<"error opening file for reading. "<<endl;
    }
}