#include<iostream>
using namespace std;
string calculateHotelPrices(string month, int numberofStays);
main()
{
    string month;
    int numberofStays;
    cout <<"Enter the month (May , June ,July ,August ,September or October): ";
    cin >> month;
    cout <<"Enter the number of stays:  ";
    cin >>numberofStays;
    string res = calculateHotelPrices(month,numberofStays);
    cout <<res;
}
string calculateHotelPrices(string month, int numberofStays)
{
    float studio=0,appartment=0;
    if (month == "May"  ||  month == "October")
    {
        if (numberofStays > 7  &&  numberofStays <= 14)
        {
            studio = 50.0 * numberofStays *0.95;
        }
        else
        {
            studio = 50.0 * numberofStays *0.70;
            appartment = 65.0 * numberofStays* 0.90;
        } 
        
    }
    else if (month == "June"  ||  month == "September")
    {
        if (numberofStays>14)
        {
        studio = 75.20 * numberofStays * 0.80;
        appartment = 68.70 * numberofStays * 0.90;
        }
        else 
        {
        studio = 75.20 * numberofStays;
        appartment = 68.70 * numberofStays;   
        }
    }
    else if (month == "July"  ||  month == "August")
    {
        if (numberofStays>14)
        {
        appartment = 77.0 * numberofStays*.90;
        }
        else 
        {
            appartment = 77.0 * numberofStays;
        }
        studio = 76.0* numberofStays;
        
    }
    else 
    {
        cout <<"Invalid Month";
    }
    

    string st = to_string(studio);
    string app = to_string(appartment);
    return "Appartment : " + app + "$\nStudio : " + st + "$";
    
}