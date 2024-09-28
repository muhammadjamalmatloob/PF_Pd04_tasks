#include<iostream>
using namespace std;

void flowerShop(float red_rose, float white_rose, float tulips);

int main()
{
   float red_rose, white_rose, tulips;
   cout << "Red Roses: ";
   cin >> red_rose;
   cout << "White Roses: ";
   cin >> white_rose;
   cout << "Tulips: ";
   cin >> tulips;
   flowerShop(red_rose, white_rose, tulips);
   return 0;
}

void flowerShop(float red_rose, float white_rose, float tulips)
{
   float original_price = red_rose*2 + white_rose*4.1 + tulips*2.5;
   cout << "Original Price: $" << original_price << "\n";
   if (original_price>200) 
   {
      float after_disc = original_price - original_price*0.2;
      cout << "Price after discount: $" << after_disc;
   }
   else
   {
      cout << "No discount.";
   } 
}


