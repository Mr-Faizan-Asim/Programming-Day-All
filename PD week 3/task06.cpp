#include<iostream>
using namespace std;
main()
{

float bag_size,cost_of_bag,area_covered,per_pound,area_per_feet;
cout<<"Enter Size of the Fertilizer Bag in Pounds: ";
cin>> bag_size;
cout<<"Enter Cost of the Fertilizer Bag: ";
cin>> cost_of_bag;
cout<<"Enter Area covered by each Fertilizer Bag: ";
cin>> area_covered;
cout<<"___________________________________________________"<<endl;

per_pound = cost_of_bag/bag_size;
cout<<"Cost of the fertilizer per pound: "<< per_pound<<endl;
area_per_feet = cost_of_bag/area_covered;
cout<<"Cost of fertilizing the area per square foot: "<<area_per_feet;

















}