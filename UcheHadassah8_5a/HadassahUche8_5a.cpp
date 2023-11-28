/*Repeat exercise 3a  from exercise sheet 6, using pointers.
3a)) Write a program which reads a word and checks if it is a palindrome 
by outputting the appropriate message: This is a palindrome accordingly. A 
word is a palindrome if the letters spell the same message when written both forward 
and backward. For example: madam, anna, bob, noon are palindromes.*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char word[MAX];
	char* p;
	int i;
	cout << "Enter a word:";
	cin >> word;
	p = word;
	for (i = 0; word[i] != '\0'; i++);
	while (*p <= i)
	{
		if (*p != word[i])
			cout << "This is not a palindrome!";
		if (*p == word[i])
			p++; i--;
		if (*p >= i)
			cout << "It is a palindrome.";
	}
}