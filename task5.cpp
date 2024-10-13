#include<iostream>
using namespace std;
float calculate_amount(string fruit,string day,float quantity);
main()
{
   string fruit,day;
   float quantity; 
   cout <<"Enter the fruit name: ";
   cin >> fruit;
   cout <<"Enter the day of the week : ";
   cin >> day;
   cout <<"Enter the Quantity: ";
   cin >> quantity;
   float res = calculate_amount(fruit,day,quantity);
   cout <<res;
}
float calculate_amount(string fruit,string day,float quantity)
{
   if (day == "Monday"  ||  day == "Tuesday" ||  day == "Wednesday" ||  day == "Thursday" ||  day == "Friday" )
   {
      if (fruit == "banana")
         return quantity*2.50;
      else if (fruit == "apple")
         return quantity*1.20;
      else if (fruit == "orange")
         return quantity*0.85;
      else if (fruit == "grapefruit")
         return quantity*1.45;
      else if (fruit == "kiwi")
         return quantity*2.70;
      else if (fruit == "pineapple")
         return quantity*5.50;
      else if (fruit == "grapes")
         return quantity*3.85;

   }
   else if (day == "Sunday"  ||  day == "Saturday")
   {
      if (fruit == "banana")
         return quantity*2.70;
      else if (fruit == "apple")
         return quantity*1.25;
      else if (fruit == "orange")
         return quantity*0.90;
      else if (fruit == "grapefruit")
         return quantity*1.60;
      else if (fruit == "kiwi")
         return quantity*3.0;
      else if (fruit == "pineapple")
         return quantity*5.60;
      else if (fruit == "grapes")
         return quantity*4.20;

   }
   else 
      {
         cout <<"Invalid Input"<<endl;
         return 0;
      
      }
}
