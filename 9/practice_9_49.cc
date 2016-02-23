#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	string ascender_str("bdfhklt");
	string descender_str("gjpqy");
	unsigned int max_len = 0;
	string word;
	string max_word;

	while(cin >> word)
	{
		if((word.find_first_of(ascender_str) != string::npos) 
				|| (word.find_first_of(descender_str) != string::npos))
		{
			continue;
		}
		else
		{
			if(word.size() > max_len)
			{
				max_len = word.size();
				max_word = word;
			}
		}
	}

	cout << "max_word: " << max_word << " ,it's length is : " << max_len << endl;

	return 0;
}
