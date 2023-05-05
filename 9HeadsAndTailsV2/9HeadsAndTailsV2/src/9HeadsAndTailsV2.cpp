// 9HeadsAndTailsV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string toBinary(int);

int main()
{
    //cout << "Hello World!"<<endl;

    int numb;
    cout << "Enter a number between 0 and 511: ";
    cin >> numb;
    
    string binaryOfNumb = toBinary(numb);
    string temp;
    int k = 0;
    string result[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (binaryOfNumb.at(k) == '0') {
                temp = "H";
            }
            else {
                temp = "T";
            }
            result[i][j] = temp;
            k++ ;
        }
    }

    //printing out result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout<<endl;
    }
}

string toBinary(int numb) {
    string binary = "";
    int temp1;
    string temp2;
    for (int i = 0; i < 9; i++) {
        temp = numb % 2;
        numb /= 2;
        /*if (temp1 == 0) {
            temp2 = "0";
        }
        else {
            temp2 = "1";
        }*/
        //temp2 << temp1;
        binary =  to_string(temp) + binary;
    }
    //cout << binary;
    return binary;
}


