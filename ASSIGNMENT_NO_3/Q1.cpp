/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/

#include<iostream>
using namespace std;
class Box
{
    private:
    double lenght;
    double width;
    double height;

    public:
    
    void enterInputs()
    {
        cout<<"enter lenght\n";
        cin>>this->lenght;
        cout<<"enter width\n";
        cin>>this->width;
        cout<<"enter height\n";
        cin>>this->height;
    }

    void displayOutputs()
    {
        cout<<" volume of the box is = "<<this->lenght*this->width*this->height<<endl;
    }
};

int main()
{
    Box B1;
    int choice;
    do
    {
        cout<<"*************************"<<endl;
        cout<<"enter 1 for accept data\n";
        cout<<"enter 2 for display data\n";
        cout<<"enter 0 for exit\n";
        cout<<"*******************"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            B1.enterInputs();
            break;

            case 2:
            B1.displayOutputs();
            break;

            default:
            cout<<"You have entered wrong input.....:("<<"\n"<<"Thanks for using our app.....:)"<<endl;
            break;

        }
    }while(choice!=0);

    

    return 0;
 
}