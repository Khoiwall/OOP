#pragma once
#include <iostream>

using namespace std;

class Player {
protected:
	string name;
	int age;
	int codeNumber;
};

class youngPlayer:public Player {
private:
	string school;
	int high;
public:
	void input();
	void output();
	int getHigt();
	int getAge();
};