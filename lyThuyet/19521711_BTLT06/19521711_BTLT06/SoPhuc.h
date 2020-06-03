#pragma once
class SoPhuc {
private:
	int thuc, ao;
public:
	SoPhuc() {
		this->thuc = 0;
		this->ao = 0;
	}
	void inputSoPhuc();
	void outputSoPhuc();
	int getThuc();
	int getAo();
	void setThuc(int a);
	void setAo(int b);
	//friend SoPhuc operator+(SoPhuc A, SoPhuc B);
	SoPhuc operator+(SoPhuc A);
	//friend SoPhuc operator-(SoPhuc A, SoPhuc B);
	SoPhuc operator-(SoPhuc A);
};
