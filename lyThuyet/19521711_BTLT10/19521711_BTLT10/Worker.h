#pragma once
#include <iostream>

using namespace std;

class Worker{
protected:
	int money;
	string born;
public:
	string fullName;
	virtual void input();
	virtual void output();
	int type;
};

class Worker1 : public Worker {
private:
	int workDay;
	int moneyHelp;
public:
	Worker1(){
		Worker::type = 1;
	}
	void input();
	void output();
};

class Worker2 : public Worker {
private:
	int numberProduct;
public:
	Worker2() {
		Worker::type = 2;
	}
	void input();
	void output();
};

class Worker3 : public Worker {
private:
	int a;
	int moneyRewar;
public:
	Worker3() {
		Worker::type = 3;
	}
	void input();
	void output();
};