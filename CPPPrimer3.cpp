// CPPPrimer3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
using std::vector;

//inline char myupper(char c) {
//	if (c >= 'a' && c <= 'z') {
//		return c + ('A' - 'a');
//	}
//	return c;
//}

//inline char mylower(char c) {
//	if (c >= 'A' && c <= 'Z') {
//		return c + ('a' - 'A');
//	}
//	return c;
//}

 

int main()
{
	/*string s1;
	string s2;
	cin >> s1 >> s2;
	if (s1 == s2)
		cout << s1 << " is equal to " << s2 << endl;
	else {
		if (s1 > s2)
			cout << s1 << " is larger than " << s2 << endl;
		else
			cout << s2 << " is larger than " << s1 << endl;
	}
	return 0;*/

	/*string s1;
	string s2;
	cin >> s1 >> s2;
	if (s1.size() == s2.size())
		cout << s1 << " has the same length as " << s2 << endl;
	else {
		if (s1.size() > s2.size())
			cout << s1 << " is longer than " << s2 << endl;
		else
			cout << s2 << " is longer than " << s1 << endl;
	}*/

	/*string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;

	for (auto c : s) {
		if (ispunct(c))
			++punct_cnt;
	}
	cout << punct_cnt << " punctuation characters in " << s << endl;
	return 0;*/

	/*string s;

	for (char &c : s) {
		c = 'x';
	}
	cout << s << endl;
	return 0;

	for (string::size_type ind = 0 ; ind < s.size() ; ++ind ) {
		s[ind] = 'x';

	}
	cout << s << endl;

	string s2;
	cout << s2[0] << endl;*/

	/*cin >> s;
	for (auto c : s) {
		if (!ispunct(c))
			cout << c;
	}

	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15" << " separated by spaces. Hit ENTER when finished:" << endl;
	string result;
	string::size_type n;
	while (cin >> n) {
		if (n < hexdigits.size())
			result += hexdigits[n];
	}
	cout << "Your hex number is: " << result << endl;*/

	/*vector<string> v1{10};
	vector<string> v2{10, "hi"};
	for (auto e : v1)
		cout << e << endl;
	for (auto f : v2)
		cout << f << endl;*/

		/*int numbers;
		vector<int> v1;
		while (cin >> numbers)
			v1.push_back(numbers);
		vector<unsigned> grades(11, 0);
		for (auto g : v1) {
			if (g <= 100)
				++grades[g/10];
	}
	for (auto g : grades)
		cout << g << " ";

	return 0;*/

		/*vector<int> v1;
		cout << "v1 has size " << v1.size() << endl;
		for (auto e : v1)
			cout << e << " ";
		cout << endl;

		vector<int> v2(10);
		cout << "v2 has size " << v2.size() << endl;
		for (auto e : v2)
			cout << e << " ";
		cout << endl;

		vector<int> v3(10, 42);
		cout << "v3 has size " << v3.size() << endl;
		for (auto e : v3)
			cout << e << " ";
		cout << endl;

		vector<int> v4{10};
		cout << "v4 has size " << v4.size() << endl;
		for (auto e : v4)
			cout << e << " ";
		cout << endl;

		vector<int> v5{ 10, 42 };
		cout << "v5 has size " << v5.size() << endl;
		for (auto e : v5)
			cout << e << " ";
		cout << endl;

		vector<string> v6{ 10 };
		cout << "v6 has size " << v6.size() << endl;
		for (auto e : v6)
			cout << e << " ";
		cout << endl;

		vector<string> v7{ 10, "hi" };
		cout << "v7 has size " << v7.size() << endl;
		for (auto e : v7)
			cout << e << " ";
		cout << endl;*/

	/*string words;
	vector<string> v1;
	while (cin >> words)
		v1.push_back(words);
	for (auto& e : v1) {
		transform(e.begin(), e.end(), e.begin(), ::toupper);
	}

	for (decltype(v1.size()) id = 0; id != v1.size(); ++id) {
		cout << v1[id] << " ";
		if ((id + 1) % 4 == 0 && id > 0)
			cout << endl;
	}
	return 0;*/

	/*int numbers;
	vector<int> v1;
	while (cin >> numbers)
		v1.push_back(numbers);
	for (auto iter1 = v1.cbegin(), iter2 = v1.cend() - 1; iter1 < iter2; ++iter1, --iter2) {
		cout << (iter1 - iter2)/2 << " ";
	}
	for (decltype(v1.size()) id1 = 0, id2 = v1.size() - 1 ; id1 < id2 ; ++id1, --id2) {
		cout << v1[id1] + v1[id2] << " ";
		
	}
	cout << endl;*/

	/*vector<int> v2(10, 1);
	cout << "v2 has size " << v2.size() << endl;
	for (auto e = v2.begin(); e != v2.end(); ++e) {
		*e *= 2;
		cout << *e << " ";
	}
	cout << endl;*/

	/*int numbers;
	vector<int> v1;
	while (cin >> numbers)
		v1.push_back(numbers);
	vector<unsigned> grades(11, 0);
	auto d = grades.begin();
	for (auto g = v1.cbegin(); g != v1.cend(); ++g) {
		if (*g <= 100) {
			++(*(d + *g / 10));
		}
	}
	for (auto g : grades)
		cout << g << " ";*/
	
	/*constexpr size_t array_size = 10;
	int ab[array_size];
	for (size_t ac = 0; ac < array_size; ++ac)
		ab[ac] = ac;
	
	int b1[array_size];
	for (size_t b2 = 0; b2 < array_size; ++b2)
		b1[b2] = ab[b2];
	int* p1 = begin(ab);
	int* p2 = end(ab);
	int* p3 = begin(b1);
	int* p4 = end(b1);

	while (p1 < p2 && p3 < p4) {
		if (*p1 == *p3) {
			++p1;
			++p3;
		}
		else {
			break;
			cout << "The two arrays are not equal." << endl;
		}
	}
	cout << "The two arrays are equal." << endl;*/
	/*int* p1 = b1;
	int* p2 = end(b1);
	while (p1 < p2) {
		*p1 = 0;
		++p1;
	}*/

	/*const char ca[] = "Hello.";
	char buffer[80];
	strcpy(buffer, ca);
	cout << buffer << endl;

	const char ca2[] = " World.";
	strcat(buffer, ca2);
	cout << buffer << endl;*/

	int intarray[] = { 1, 2, 3, 4, 5 };
	vector<int> intv(begin(intarray), end(intarray));

	int intarray2[5];
	for (size_t i = 0; i < 5; ++i)
		intarray2[i] = intv[i];

	return 0;

	
}