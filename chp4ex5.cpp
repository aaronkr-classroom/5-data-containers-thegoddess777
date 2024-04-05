#include <iostream>
#include <vector>
#include <unordered_map> //word: count

using namespace std;

int main()
{
	vector<string> words;
	unordered_map<string, int> wordCount;

	cout << "Enter words(CTRL + Z to stop): " << endl;

	//1. read words (cin)
	string word;
	while (cin >> word) {
		words.push_back(word);
	}

	//2. count words (for)
	for (auto& w : words) { // for (i in vec)
		wordCount[w]++;
	}
	//3. printf results
	cout << "Word count: " << words.size() << "¹ø" << endl;
	for (auto& pair : wordCount) {
		cout << pair.first << ": " << pair.second << "¹ø" << endl;
	}
	return 0;
}