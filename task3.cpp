#include<iostream>
using namespace std;
float tax_calculator(char type,float price);

main()
{
char type;
float price;
cout<<"Enter the vehicle type code(M,E,S,V,T): ";
cin>>type;
cout<<"Enter the price of the vehicle:  $";
cin>>price;
float result=tax_calculator( type, price);
cout<<"The final price of the vehicle of type E after adding the tax is  $"<<result<<".00";

}
float tax_calculator(char type,float price)
{
float tax_amount,tax_rate,final_price;
if(type=='E')
{
tax_amount=(price*(0.08/100))*100;
final_price=price+tax_amount;
return final_price;
}
else if(type=='M')
{
tax_amount=(price*(0.06/100))*100;
final_price=price+tax_amount;
return final_price;
}
else if(type=='S')
{
    tax_amount=(price*(0.10/100))*100;
final_price=price+tax_amount;
return final_price;
}
else if(type=='V')
{
    tax_amount=(price*(0.12/100))*100;
final_price=price+tax_amount;
return final_price;
return final_price;
}
else if(type=='T')
{
    tax_amount=(price*(0.15/100))*100;
final_price=price+tax_amount;
return final_price;
return final_price;
}


}

