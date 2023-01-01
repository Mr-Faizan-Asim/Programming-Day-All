#include<iostream>
using namespace std;
main()
{

float veg_price_per_kg,fruit_price_per_kg,total_kilograms_of_vegetables,total_kilograms_of_fruits,vg_cost,fr_cost,total,exchange;
cout<<"Vegetable price per kilogram: ";
cin>> veg_price_per_kg;
cout<<"Fruit price per kilogram: ";
cin>> fruit_price_per_kg;
cout<<"total kilograms of vegetables: ";
cin>> total_kilograms_of_vegetables;
cout<<"total kilograms of fruits: ";
cin>> total_kilograms_of_fruits;
vg_cost = veg_price_per_kg*total_kilograms_of_vegetables;
fr_cost = fruit_price_per_kg*total_kilograms_of_fruits;

total = vg_cost + fr_cost;
cout<<"Total Amount: "<<total <<endl;
exchange = total*0.5154;
cout<<"In Rupee: "<<exchange <<endl;









}