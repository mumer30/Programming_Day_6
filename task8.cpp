#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    string yearType;
    int holidays,hometownWeekends;
    cout <<"Enter year type: ";
    cin >> yearType;
    cout <<"Enter number of holidays: ";
    cin >> holidays;
    cout <<"Enter number of weekends: ";
    cin >> hometownWeekends;
    int res = calculateVolleyballGames(yearType,holidays,hometownWeekends);
    cout <<res;


}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    float weeks_in_sofia,play_in_sofia,play_on_holiday;
    weeks_in_sofia = 48 - hometownWeekends;
    play_in_sofia = weeks_in_sofia * 0.75;
    play_on_holiday = 0.67 * holidays;
    float total_play = play_on_holiday + play_in_sofia + hometownWeekends;
    if (yearType == "normal")
        return int(total_play);
    else if (yearType == "leap")
        return int(total_play*1.15);
    else 
    {
        cout <<"Invalid year"<<endl;
        return 0;
    }

}
