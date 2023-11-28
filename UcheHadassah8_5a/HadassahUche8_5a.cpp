/*Name:Uche Hadassah
This program makes use of pointers to read a word and check if it's a palindrome*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char  word[MAX];
	char* p;
	int i;
	cout << "Enter a word:";
	cin >> word;
	p = word;
	for (i = 0; word[i] != '\0'; i++);
	i--;
	while (p < (word + i))//(word + i) basically means null character since it adds i to the position of the first element
	{
		if (*p != word[i])
		{
			cout << "It is not a palindrome.";
			break;
		}
		p++;
		i--;
	}
	if (p >= (word + i))//in case of even numbers too
		cout << "It is a palindrome.";
}