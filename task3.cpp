#include<iostream>
#include<string.h>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    int day;
    string month;
    cout <<"Enter the day of birth :  ";
    cin >> day;
    cout <<"Enter the month of birth :  ";
    cin >>month;
    string sign = findZodiacSign(day,month);
    cout <<"Ziodic Sign : "<<sign;

}

string findZodiacSign(int day, string month)
{
    if (month == "January")
        {
            if (day >0  &&  day <20)
                return "Capricorn";
            else if (day >=20  &&  day <32)
                return "Aquarius";
            else 
                return "Invalid Date";
        }
    else if (month == "February")
        {
            if (day >0  &&  day <19)
                return "Aquarius";
            else if (day >=19  &&  day <29)
                return "Pisces";
            else  
                return "Invalid Date";    
        }
    else if (month == "March")
        {
            if (day >0  &&  day <=20)
                return "Pisces";
            else if (day >=21  &&  day <32)
                return "Aries";
            else 
                return "Invalid Date";
            
        }
    else if (month == "April")
        {
            if (day >0  &&  day <20)
                return "Aries";
            else if (day >=20  &&  day <31)
                return "Taurus";
            else 
                return "Invalid Date";
            
        }
    else if (month == "May")
        {
            if (day >0  &&  day <=20)
                return "Taurus";
            else if (day >=20  &&  day <32)
                return "Gemini";
            else 
                return "Invalid Date";
            
        } 
    else if (month == "June")
        {
            if (day >0  &&  day <21)
                return "Gemini";
            else if (day >=21  &&  day <31)
                return "Cancer";
            else 
                return "Invalid Date";
            
        }
    else if (month == "July")
        {
            if (day >0  &&  day <23)
                return "Cancer";
            else if (day >=23  &&  day <32)
                return "Leo";
            else 
                return "Invalid Date";
            
        }
    else if (month == "August")
        {
            if (day >0  &&  day <23)
                return "Leo";
            else if (day >=23  &&  day <32)
                return "Virgo";
            else 
                return "Invalid Date";
            
        }
            
    else if (month == "September")
        {
            if (day >0  &&  day <24)
                return "Virgo";
            else if (day >=24  &&  day <31)
                return "Libra";
            else 
                return "Invalid Date";
            
        }
    else if (month == "October")
        {
            if (day >0  &&  day <24)
                return "Libra";
            else if (day >=24  &&  day <32)
                return "Scorpio";
            else 
                return "Invalid Date";
            
        }
    else if (month == "November")
        {
            if (day >0  &&  day <23)
                return "Scorpio";
            else if (day >=23  &&  day <31)
                return "Sagittarius";
            else 
                return "Invalid Date";
            
        }  
    else if (month == "December")
        {
            if (day >0  &&  day <23)
                return "Sagittarius";
            else if (day >=23  &&  day <32)
                return "Capricorn";
            else 
                return "Invalid Date";
            
        } 
    else 
        return "Invalid Month";                     
}   