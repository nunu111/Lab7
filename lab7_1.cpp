#include<iostream>
#include<string>

using namespace std;

string func1(string x)
{
	int i = 0, L = x.size();
	string y = "";
	while(i < L)
	{
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x)//เล็กกลายเป็นใหญ่
{
	int i = 0, L = x.size();
	string y = "";
	while(i < L)
	{
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x) //ใหญ่กลายเป็นเล็ก
{
	int i = 0, L = x.size();
	string y = "";
	while(i < L)
	{
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string checkLet(string x, string y)	
	{
		if (x==y)
		{
			string z = "Yes";
			return z;
		}
		else
		{
			string z ="No";
			return z;
		}
	}

int main()
{
	string input;
    cout << "Input text: ";
	cin >> input;
    cout << "Reversed text: "<< func1(input) <<endl;
    cout << "Palindrome: "<< checkLet(func2(input),func2(func1(input)));



    return 0;
}
