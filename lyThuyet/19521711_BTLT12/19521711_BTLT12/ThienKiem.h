#pragma once

#include <iostream>
#include <string>

using namespace std;

class figure {
protected:
	string fiveElement;
	string nameHero;
	int level;
public:
	int type;
	string Name;
	int numberFiveElement;
	virtual void input(int x) {
		cin.ignore();
		cout << "nhap he tuong vd (He Kim, He Thuy, He Tho, He Moc, He Hoa) 2 chu cai dau viet hoa: " << endl;
		getline(cin, fiveElement);
		if (fiveElement == "He Kim") {
			numberFiveElement = 1;
		}
		else if (fiveElement == "He Thuy") {
			numberFiveElement = 2;
		}
		else if (fiveElement == "He Moc") {
			numberFiveElement = 3;
		}
		else if (fiveElement == "He Hoa") {
			numberFiveElement = 4;
		}
		else {
			numberFiveElement = 5;
		}

		if (x == 1) {

			if (fiveElement == "He Kim") {
				cout << "ban chi co the chon 2 tuong Thieu Lam va Thien Vuong" << endl;
				getline(cin, nameHero);
				cout << "ten nhan vat" << endl;
				getline(cin, Name);
			}
			else if (fiveElement == "He Thuy") {
				cout << "ban chi co the chon 2 tuong Nga My va Thuy Yen" << endl;
				getline(cin, nameHero);
				cout << "ten nhan vat" << endl;
				getline(cin, Name);
			}
			else if (fiveElement == "He Tho") {
				cout << "ban chi co the chon 2 tuong Con Lon va Vo Dang" << endl;
				getline(cin, nameHero);
				cout << "ten nhan vat" << endl;
				getline(cin, Name);
			}
			else if (fiveElement == "He Moc") {
				cout << "ban chi co the chon 2 tuong Ngu Doc va Duong Mon" << endl;
				getline(cin, nameHero);
				cout << "ten nhan vat" << endl;
				getline(cin, Name);
			}
			else {
				cout << "ban chi co the chon 2 tuong Cai Bang va Thien Nhan" << endl;
				getline(cin, nameHero);
				cout << "ten nhan vat" << endl;
				getline(cin, Name);
			}
		}

		cout << "nhap level: " << endl;
		cin >> level;
	}
	virtual int output() {
		return 0;
	}

	string getNameHero() {
		return nameHero;
	}

	string getFiveElement() {
		return fiveElement;
	}
};

class monter: public figure {
public:
	monter() {
		figure::type = 2;
	}

	virtual void input(int x) {
		figure::input(x);
	}

	int _type;

	virtual int output() {
		figure::output();

		return 0;
	}
};

class monterNomar : public monter {
public:

	monterNomar() {
		monter::_type = 1;
	}

	void input(int x) {
		monter::input(x);
	}

	int output() {
		return level * 3;
		monter::output();
	}
};

class monterBoss : public monter {
public:
	monterBoss() {
		monter::_type = 2;
	}

	void input(int x) {
		monter::input(x);
	}

	int output() {
		return level * 7;
		monter::output();
	}
};

class Hero: public figure{
public:
	Hero() {
		figure::type = 1;
	}

	void input(int x) {
		figure::input(x);
	}

	int output() {
		figure::output();

		return level * 5;
	}
};