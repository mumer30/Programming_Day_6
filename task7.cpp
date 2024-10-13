#include<iostream>
#include<string>
using namespace std;
string checkStudentStatus(int hour1,int min1,int hour2,int min2)
{
    int hour_diff,min_diff,Total_time,hh=0,mm;
    if (hour1 == hour2   &&   min1 == min2)
    {
        return "On Time";
    }
    //Early OR On Time
    if (hour1>=hour2)
    {
        hour_diff = (hour1 - hour2); 
        min_diff = (min1-min2); 
        Total_time = (hour_diff*60) + min_diff;
        if (Total_time >=60)
        {
            hh = Total_time / 60;
            mm = Total_time - (60*hh);
        }
        else 
        {
            mm = Total_time;
        }
        if (hh == 0  &&  mm  <=30)
        {
            return "On Time\n"+to_string(mm)+" minutes before the start";
        }
        else 
        {
            return "Early\n"+to_string(hh)+":"+to_string(mm)+" hours before the start";
        }
    } 
    //Late
    else
    {
        hour_diff = (hour2 - hour1); 
        min_diff = (min2-min1);
        Total_time = (hour_diff*60) - min_diff;
        if (Total_time  >=60)
        {
            hh = Total_time / 60;
            mm = Total_time - (60*hh);
        }
        else 
        {
            mm = Total_time;
        }
        if (hh == 0 )
        {
            return "Late\n"+to_string(mm)+" minutes after the start";
        }
        else 
        {
            return "Late\n"+to_string(hh)+":"+to_string(mm)+" hours after the start";
        }


    } 
      
}

main()
{
    int hour1,min1,hour2,min2;
    cout <<"Enter the Starting time (Hour): ";
    cin >> hour1;
    cout <<"Enter the Starting time (minutes): ";
    cin >> min1;
    cout <<"Enter the hour of arrival: ";
    cin >> hour2;
    cout <<"Enter the minute of arrival: ";
    cin >> min2;
    string status = checkStudentStatus(hour1,min1,hour2,min2);
    cout <<status;
}