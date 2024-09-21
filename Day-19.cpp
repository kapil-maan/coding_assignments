// Ques 1: Write a C++ program that take txt file input and write your details inside that file through c++ and then print this details.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //file name
    string filename = "details.txt" ;

    // open file in write mode
    ofstream outfile(filename);

    //check if file is open or not
    if(outfile.is_open()){
        outfile<< "Name: Kapil Kumar\n";
        outfile<< "Age: 19\n";
        outfile<< "State: Rajasthan\n";
        outfile<< "Country: India\n";
        outfile.close() ;
    }
    else{
        cout<<"Unable to open file for writing."<< endl;
    }

    // open file in read mode
    ifstream infile(filename);

    string line;

    //check if file is open or not
    if(infile.is_open()){
        // read/fetch & print content of file 
        while(getline(infile,line)){
            cout<<line<<endl;
        }
        infile.close(); // close the file
    }
    else{
        cout<<"Unable to open file for reading" <<endl;
    }

    return 0;
}


// Ques 2: Write C++ program that take input from the txt file and then print output inside terminal. Take any txt file by yourself.


#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    string filename = "input.txt";

    ifstream infile(filename) ;
    string line;

    if (infile.is_open()){
        while (getline(infile, line)){
            cout<<line<<endl;
        }
        infile.close() ;
    }
    else{
        cout<<"Unable to open file for reading."<< endl ;
    }

    return 0;
}