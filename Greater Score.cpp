#include<iostream>
using namespace std;
int main()
{
	int s=0;
	int z;
	cout<<"Enter the list of scores:";
	cin>>z;
	int playerscore[80];
	cout<<"List of scores of Player.\n";
	for(int q=0;q<z;q++)
	{
		cin>>playerscore[q];
	}

	for(int n=0;n<z;n++)
	{
	for(int y=1;y<z;y++)
		{
			if(playerscore[n]>=playerscore[y])
			{
				s++;
			}
		}
			if(s==(z-1))
			{
				cout<<"Highest Score of the player:";
				cout<<playerscore[n];
				break;
			}
			else
			{
				s=0;
			}
		}
	
		
	 return 0;
	
}

