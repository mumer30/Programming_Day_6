#include<iostream>
using namespace std;
float calculateAverage(float,float,float,float,float);
string calculateGrade(float);
main()
{
    string name;
    float m1,m2,m3,m4,m5;
    cout  <<"Enter student name: ";
    cin >> name;
    cout <<"Enter marks for English : ";
    cin >> m1; 
    cout <<"Enter marks for Maths : ";
    cin >> m2; 
    cout <<"Enter marks for Chemistry : ";
    cin >> m3; 
    cout <<"Enter marks for Social Sciences : ";
    cin >> m4; 
    cout <<"Enter marks for Biology : ";
    cin >> m5; 
    float per = calculateAverage(m1,m2,m3,m4,m5);
    string grade = calculateGrade(per);
    cout <<endl<<endl;
    cout <<"Student Name: "<<name<<endl;
    cout <<"Percentage: "<<per <<"%"<<endl;
    cout <<"Grade: "<<grade ;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float Total_marks = 500.0;
    float avg = 100*(marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology)/Total_marks;
    return avg;
}
string calculateGrade(float average)
{
    if (average >= 90  &&  average <=100)
        return "A+";
    else if (average >=80)
        return "A";
    else if (average >=70)
        return "B+";
    else if (average >=60)
        return "B";
    else if (average >=50)
        return "C";
    else if (average >=40)
        return "D";
    else
        return "F";                
}