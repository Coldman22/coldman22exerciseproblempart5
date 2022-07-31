//Swap Number in cyclic order using call by reference
#include <iostream>
using namespace std;

void cyclic_swap(int* ,int*, int*);
int main(){
    int a,b,c;

    cout<<"Enter values of a,b,c: ";
    cin>>a>>b>>c;

    cout<<"Values before swapping: ";
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;

    cyclic_swap(&a,&b,&c);
    cout<<"Values after swapping: ";
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;

    return 0;
}
void cyclic_swap(int*n1, int*n2, int*n3){
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}
/*
EXPLANATION:

In the example, the three numbers entered by the user are stored in variable a,b,c respectively.

The addresses of these numbers are passes to the cyclic_swap() function, which are assigned to the pointers
n1,n2,n3 in the function definition.

//function call;
cyclic_swap(&a, &b, &c)

//function definition
cyclic_swap(int *n1, int*n2, int *n3){
    //code
}

*/