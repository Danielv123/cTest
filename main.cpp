#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello world!"<<endl;

    int number1;
    int number2;
    int number3;

    cout<<"x+y = z\nPlease input x.\n";
    cin>>number1;
    cin.clear();
    cout<<number1<<"+y = z\nPlease input y.\n";
    cin>>number2;
    cin.clear();
    number3 = number1 + number2;
    cout<<number1<<"+"<<number2<<" = "<<number3<<"\nMATH COMPLETED\n";
    std::cin.ignore();
    return 0;
}
