//
// Created by rishi on 12/16/2019.
//
#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

// Driver program to test above function
int main()
{
    string num = "10101001";
    cout << binaryToDecimal(num) << endl;
}



/*string bin_string = "10101010";
int number =0;

number = stoi(bin_string, 0, 2);
cout<<"bin_string: "<<bin_string<<endl;
cout<<"number: "<<number<<endl;

bin_string = "111100001100111010";
number = stoi(bin_string, 0, 2);
cout<<"bin_string: "<<bin_string<<endl;
cout<<"number: "<<number<<endl;

return 0;
}*/