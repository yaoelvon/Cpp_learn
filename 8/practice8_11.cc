#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(int argc, const char *argv[])
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;

	while(getline(cin, line))
	{
		PersonInfo info;
		//每次读写完成后，要清除状态，
		//否则，如果上次结束状态为fail或eof，
		//则无法继续使用流
		record.clear();
		record.str(line);
		//istringstream record(line);
		record >> info.name;
		while(record >> word)
		{
			info.phones.push_back(word);
		}
		people.push_back(info);

	}

	for(auto &pi : people)
	{
		cout << pi.name << " ";
		for(auto &s : pi.phones)
		{
			cout << s << " ";
		}
		cout << endl;
	}

	return 0;
}


