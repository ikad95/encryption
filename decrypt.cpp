#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;

ifstream g;

int main()
{
	char key = 'x'; 
    char c;
    cout<<"Enter key! : ";
    cin>>key;
    g.open("encoded.txt");
	g>>noskipws>>c;
	int i=0;
	cout<<"YOUR MESSEGE IS :"<<endl<<endl;
	while(!g.eof()){
		cout<<char(c^(key + i++));
		g>>noskipws>>c;
	}
	cout<<endl<<endl;
	return 0;
}
