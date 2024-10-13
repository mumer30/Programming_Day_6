#include<iostream>
using namespace std;
string decideActivity(string temp,string humidity)
{
    if (temp == "warm"  &&  humidity == "dry")
        return "Play tennis";
    else if (temp == "warm"  &&  humidity == "humid")
        return "swim";
    else if (temp == "cold"  &&  humidity == "dry")
        return "Play basketball";
    else if (temp == "cold"  &&  humidity == "humid")
        return "Watch tv";
    else 
        cout <<"Invalid Input"<<endl;
        return "No Activity Recommended";
}
main()
{
    string temp,humidity;
    cout <<"Enter temperature (warm or cold): ";
    cin >> temp;
    cout <<"Enter humidity (warm or cold): ";
    cin >> humidity;
    string act = decideActivity(temp,humidity);
    cout <<"Recommended activity: "<<act;   
}