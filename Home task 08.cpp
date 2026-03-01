 #include<iostream>
 using namespace std;
 int main()
{
 float veg,fruit;
 int total_veg_price,total_fruit_price;
 cout<<"enter vegetable price per kilogram(in coins):";
 cin>>veg;
 cout<<"enter fruit price per kilogram(in coins): ";
 cin>>fruit;
 cout<<"enter total kilograms of vegetables:";
 cin>>total_veg_price;
 cout<<"enter total kilograms of fruits:";
 cin>>total_fruit_price;
 float vegetables, fruits, total;
 vegetables=(veg*total_veg_price)/1.94;
 fruits=(fruit*total_fruit_price)/1.94;
 total=vegetables+fruits;
 cout<<"total earnings in rupees "<<total;
 }
