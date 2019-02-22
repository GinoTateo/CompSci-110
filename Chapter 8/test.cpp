//
//  test.cpp
//  Chapter 8
//
//  Created by Gino Tateo on 11/7/18.
//  Copyright © 2018 Gino Tateo. All rights reserved.
//


#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
            ifstream fin;
            string fileName;// = "/Users/ginotateo/Desktop/Pwnd/Chapter 10/Chapter 10/secret.txt";
            cin >> fileName;
            fin.open(fileName.c_str());
            if (!fin.good()) throw "I/O error";
    
    while (true)
    {
        if (!fin.good()) break;
        string lineFromFile;
        getline(fin, lineFromFile);
        cout << lineFromFile << endl;
    } // while
    fin.close();
} // main

