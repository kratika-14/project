

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    char line[100];
    char ch;
    char lang[20];
    ifstream ifile,rfile,cfile;
    ofstream ofile,oufile,outfile;
    {
		ifile.open ("infile.txt",ios::in);
		ofile.open ("result.txt",ios::trunc|ios::out);
		cout<<"enter character to copy the lines from input file(f/m/r/s):";
		cin>>ch;
		while(!ifile.eof())
		{
			ifile.getline(line,100);
			if(line[9]==ch)
			{
				ofile<<line<<endl;
			}

		}
		cout<<"done\n";

		ifile.close();
		ofile.close();
	}
	{
		rfile.open("result.txt",ios::in);
		oufile.open("cleared.txt",ios::trunc|ios::out);
		cout<<"copying data\n ";
		while(!rfile.eof())
		{
			rfile.getline(line,100);
			int i=14;
			oufile<<"\"";
			while(line[i]!='"')
			{
			    oufile<<line[i];
			    i++;

			}
            oufile<<"\""<<"\n";

		}
		cout<<"done\n";
		rfile.close();
		oufile.close();
	}
	{
		cfile.open ("cleared.txt",ios::in);
		outfile.open ("final.bat",ios::trunc|ios::out);
		cout<<"program wanted to associate\n";
		cin>>lang;
		while(!cfile.eof())
		{
			cfile.getline(line,50);
			outfile<<lang<<line<<endl;

		}
		cout<<"done\n";
		cfile.close();
		outfile.close();
	}
return 0;
}

