#pragma once
#include <iostream>
#include <string>
#include <stack>
using namespace std;

#define N 100
class Bracket
{
public:
	Bracket() : top(-1){}
	~Bracket() {}

	int size = N;
	int a[N];

	bool isValid(const string &s);

private:

	int top;
};
