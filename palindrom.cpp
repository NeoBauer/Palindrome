#include <iostream>
#include <string>
#include <bits/stdc++.h>

bool isPalindrome(const std::string &text);

bool isPalindromeFlag=false;

std::string reverseString(std::string str);

std::string str;
int main()
{
	std::cout<<"Podaj wyraz, sprawdzimy czy jest palindromem"<<std::endl;
	std::cin>>str;
	if(isPalindrome(str))
	{
		std::cout << "To nie jest palindrom";
	}
	else 
	{
		std::cout << "To jest palindrom";
	}

	return 0;
}


bool isPalindrome(const std::string &text)
{
	std::string reversedString = reverseString(text);
	bool notEqualChars = reversedString.compare(text);
	return notEqualChars;
	
}

std::string reverseString(std::string str)
{
	std::reverse(str.begin(), str.end());
	std::cout << str<<std::endl;
	return str;
}



