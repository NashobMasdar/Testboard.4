#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
    int data[11] = { 12,17,10,05,15,25,11,07,25,16,19 };
    
    vector<int> myVector(data, data + 11);
    
    auto cetakVector = [](const vector<int> vec, const string& judul)
        {
            cout << judul << endl;
            for (int val : vec) 
            {
                cout << val << " | ";
            }
            cout << "\n=============================================================\n" << endl;
        };
    
    cetakVector(myVector, "\033[33mIsi vector awal : \033[0m");
    
    //ascending
    sort(myVector.begin(), myVector.end());
    cetakVector(myVector, "\033[36mIsi vector setelah sorting ASC\033[0m");

    //descending
    reverse(myVector.begin(), myVector.end());
    cetakVector(myVector, "\033[34mIsi vector setelah sorting DSC\033[0m");
}

