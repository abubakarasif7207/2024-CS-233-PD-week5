#include<iostream>
#include<iomanip>
using namespace std;
float pyramid(float length,float width,float height,float volume,string unit);

main(){

int length,width,height;
string unit;
cout<<"Enter the length of the pyramid(in meters): ";
cin>>length;
cout<<"Enter the width of the pyramid(in meters): ";
cin>>width;
cout<<"Enter the height of the pyramid(in meters): ";
cin>>height;
cout<<"enter the desired output unit (milimeters,centimeters,meters,kilograms): ";
cin>>unit;

float volume=pyramid( length, width, height,volume,unit);
cout<<fixed<<(volume)<<"The volume of pyramid is : "<<volume<<"  cubic meters";
 
}
float pyramid(float length,float width,float height,float volume,string unit)
{

if(unit=="meters"){
volume=(length*width*height)/3;
return volume;
}
else if(unit=="centimeters")
{
volume=((length*100)*(width*100)*(height*100)/3);
return volume;
}
else if(unit=="milimeters")
{
volume=((((length*1000)*(width*1000)*(height*1000)))/3);
return volume;
}
else if(unit=="kilometers"){
volume=((length/1000)*(width/1000)*(height/1000)/3);
return volume;
}
}



