//Loop through an array using pointers
#include <iostream>
using namespace std;

int main(){
    int num[5], *ptr;
    cout<<"Enter th elements: ";

    for(ptr= &num[0]; ptr<= &num[4]; ++ptr){
        cin>>*ptr;
    }
    cout<<"The num are: "<<endl;
    for (ptr = num; ptr<=&num[4]; ++ptr)
    {
        cout<<*ptr<<", ";
    }
    return 0;
}
/*
EXPLANATION:

In the example, we have used the ptr pointer to iterate through the num[] array intwo for loops.

for(ptr = &num[0]; ptr<= &num[4]; ++ptr){
    //code
}

The loops works as follows:
@ ptr is initialized to &num[0] (address of the first array elements)
@ the loop terminates if ptr contains any address that comes after &num[4].
@ in each iteration, the update statement ++ptr increments the memory address by 4 bytes(size of int types.)

Inside the loops, we dereferenced the pointers using the code *ptr to get the arrayinput and output.
cin>>*ptr; //array input
cout<<*ptr<<", "; //array output.
*/