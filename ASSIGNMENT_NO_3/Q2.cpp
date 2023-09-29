/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)*/

#include<iostream>
using namespace std;
class tollbooth
{
    private:

    int unsigned cars;
    double amt;

    public:

    tollbooth()
    {
        this->cars=0;
        this->amt=0;
    }

    void payingCars()
    {
        this->cars = cars + 1;
        this->amt = amt + 0.50;
    }

    void noPayCar()
    {
        this->cars=cars + 1;
    }

    void printOnConsole()
    {
        cout<<"number of cars passed are " <<this->cars<<endl;
        cout<<"Total collected amount is "<<this->amt<<endl;
    }
};

int main()
{
    tollbooth t1;
    int choice;
   
    do
    {
        cout<<"*************************"<<endl;
        cout<<"Press 1 to see total number of cars paased and total amount\n";
        cout<<"press 2 to see cars passed and not paid the amount\n";
        cout<<"press 0 to exit\n";
        cin>>choice;
        cout<<"*************************"<<endl;

        switch(choice)
        {
            case 1:
            t1.payingCars();
            t1.printOnConsole();
            break;

            case 2:
            t1.noPayCar();
            t1.printOnConsole();
            break;

            default:
            cout<<"You have entered wrong input....."<<endl;
            cout<<"thanks for using our application"<<endl;

        }

    }while(choice!=0);
    

    return 0;

}





