#include<iostream>
using namespace std;

void price_after_disc(string country_name, float ticket_price);
 
int main()
{
   string country_name;
   float ticket_price;
   cout << "Enter country name: ";
   cin >> country_name;
   cout << "Enter ticket price: $";
   cin >> ticket_price;
   price_after_disc(country_name, ticket_price);
   return 0;
}

void price_after_disc(string country_name, float ticket_price)
{
   if (country_name == "Pakistan" || country_name == "pakistan")
   {
      ticket_price = ticket_price - ticket_price*0.05;
      cout << "Price after discount: $" << ticket_price;
   }
   if (country_name == "Ireland" || country_name == "ireland")
   {
      ticket_price = ticket_price - ticket_price*0.1;
      cout << "Price after discount: $" << ticket_price;
   }
   if (country_name == "India" || country_name == "india")
   {
      ticket_price = ticket_price - ticket_price*0.2;
      cout << "Price after discount: $" << ticket_price;
   }
   if (country_name == "England" || country_name == "england")
   {
      ticket_price = ticket_price - ticket_price*0.3;
      cout << "Price after discount: $" << ticket_price;
   }
   if (country_name == "Canada" || country_name == "canada")
   {
      ticket_price = ticket_price - ticket_price*0.45;
      cout << "Price after discount: $" << ticket_price;
   }

}

