#include<iostream>
using namespace std;

int adiff(int x,int y)
{
int z;
z = x - y;
if(z<0)
{
  z=z*(-1);
}
z = z%360;
if(z > 180){
    return 360-z;
}
return z;
}

int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
}
