#include<iostream>

using namespace std;

void currency(int amount)
{

	int notes[9] = {2000, 500, 200, 100, 50, 20, 10, 5, 1};
	int notesCnt[9] = {0};

	for(int i = 0; i < 9; i++)
	{
		if(amount >= notes[i])
		{
			notesCnt[i] = amount/notes[i];
			amount = amount - notesCnt[i] * notes[i];
		}
	}

	cout << "currency  :  note_count \n";
	for(int i = 0; i < 9; i++)
	{
		if(notesCnt != 0)
			cout << notes[i] << " : " << notesCnt[i] << endl; 
	} 

}

int main()
{

	int amount = 700;
	currency(amount);

	return 0;
}
