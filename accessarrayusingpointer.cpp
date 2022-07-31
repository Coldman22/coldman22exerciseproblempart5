//Access Array elements Using Pointers.
#include <iostream>
using namespace std;

int main(){
    int data[5];
    cout<<"Enter the elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin>>data[i];
    }
    cout<<"You have enetered: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<*(data+i)<<", ";
    }
    return 0;
}

/*
EXPLANATION:
In C++, the code data[i] tells the compiler to access the memory address of the ith element of the data.
In order to perform the same task using pointer notation, we replace data[i] by *(data+i).

In Summary
@ data[0] is quivalent to *data
@ data[1] is quivalent to *(data+1)
@ data[2] is quivalent to *(data+2)
@ data[3] is quivalent to *(data+3)
@ and so on.

NOTES: 
@ &data[0] is equivalent to data
@ &data[1] is equivalent to data+1
@ and so on

*/