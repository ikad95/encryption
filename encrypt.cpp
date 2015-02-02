#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;

ofstream f;
ifstream g;

int main()
{
	int w=0; 
	char key = 'x';
    char c;
	cout<<"Enter key! :";
	cin>>key;
    g.open("raw.txt");
    f.open("encoded.txt");
	g>>noskipws>>c;
	int i=0;
	while(!g.eof()){
		f<<char(c^(key + i++));
		g>>noskipws>>c;
	}
	return 0;
}
