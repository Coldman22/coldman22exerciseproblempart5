//Find the largest Number Using Dynamic Memory Allocation.
#include <iostream>
using namespace std;

int main(){
    int num;
    double *data;
    cout<<"Enter the numebr of elements: ";
    cin>>num;

    //allocating memory
    data = new double[num];

    //storing the number
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter number"<<i+1<<":";
        cin>>*(data+i);
    }
    //finding the largest number
    for (int i = 1; i < num; i++)
    {
        if (*data < *(data+i))
        {
            *data = *(data+i);
        }
        
    }
    cout<<"Laregst number= "<<*data;

    //erasing memory
    delete[] data;
    return 0;
}
/*
EXPLANATION: 
In the example, we ask the user to enter the number of elements, which is stored in variable num.

We have also created a pointer data to store the elements.
We then dynamically allocate memory for num number of double values using the num operators.
data = new double[num];

Then, we ask the user to enter the array elements.
These numbers are stored in the dynamically allocated memory with the help of the data pointer.

Finally, we find the largest number among the user input.
*/