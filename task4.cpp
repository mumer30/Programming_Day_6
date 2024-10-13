#include<iostream>
using namespace std;
float calculate_amount(char code,char time,int minutes);
main()
{
    char code,time;
    int minutes;
    string service_Type;
    cout <<"Enter the service code(R/r for regular and P/p for Premeire): ";
    cin >> code;
    if (code != 'r' &&  code != 'R' )
    {
        cout <<"Enter the time of the call (D/d for day  and N/n for Night) : ";
        cin >> time;
    }
    else 
        time = 'a';// random value
    cout <<"Enter the number of minutes used:  ";
    cin >> minutes;
    float amount = calculate_amount(code,time,minutes);
    cout <<endl;
    if (code == 'p'  ||  code == 'P')
    {
        service_Type = "Premium";
    }    
    else if (code == 'r'  ||  code == 'R')
    {
        service_Type = "Regular";
    }    
    else
    {
        service_Type = "Wrong";
    }    
    cout <<"Service Type : "<<service_Type<<endl;
    cout <<"Total minutes used: "<<minutes<<" minutes"<<endl;
    cout <<"Amount Due: "<<amount ;
  
}
float calculate_amount(char code,char time,int minutes)
{
    if (code == 'r'  ||  code =='R')
    {
        if (minutes <= 50)
            return 10.00;
        else 
            return float( minutes * 0.20);
    }
    else if (code == 'p'   ||  code == 'P')
    {
        if (time == 'D' ||  time == 'd')
        {
            if (minutes <= 75)
                return 25.00;
            else 
                return (minutes * 0.10);  
        }
        else if (time == 'N' ||  time == 'n')
        {
            if (minutes <= 100)
                return 25.00;
            else 
                return (minutes * 0.05);
        }
    }
    else
    { 
        cout <<"Invalid code ";
        return 0.0;
    }
}