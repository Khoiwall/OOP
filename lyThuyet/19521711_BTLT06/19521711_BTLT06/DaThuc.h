#pragma once
class DaThuc {
private:
	int n;
	int arr[100];
public:
	DaThuc() {
		this->n = 0;
		arr[0] = 0;
	}
	void intputDT();
	void outputDT();
	friend DaThuc operator+(DaThuc A, DaThuc B);
	friend DaThuc operator-(DaThuc A, DaThuc B);
	friend bool operator!=(DaThuc A, DaThuc B);
	int getResult(int x);
};
