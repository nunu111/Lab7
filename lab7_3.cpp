#include<iostream>

using namespace std;
int adiff(int x,int y)
{
  while(x >= 360)
  {
    x = x-360;
  }
  while(y >= 360)
  {
    y = y-360;
  }
  if(x <0)//x -
  {
    if(y<0)//y -
    {
      if(x<y)
      {
        return y-x;
      }
      if(y<x)
      {
        return x-y;
      }
    }
    if(y>=0)//y+
    {
      return (x*-1)+y;
    }
  }
  if(x >= 0)//x+
  {
    if(y<0)//y-
    {
      return x+(y*-1);
    }
    if(y>=0)//y+
    {
      }
      if(x>y)
      {
        return x-y;
        if(x-y>180)
        {
          return 360-(x-y);
        }
      }
      if(y>x)
      {
        if(y-x>180)
        {
          return 360-(y-x);
        }
        return y-x;
      }
    }
  if(x==y)
      {
        return 0;
      }
      return 0;
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
