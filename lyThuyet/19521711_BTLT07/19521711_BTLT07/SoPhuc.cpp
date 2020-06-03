#include <iostream>
#include "SoPhuc.h"

using namespace std;

// tra ve phan thuc
int SoPhuc::getThuc() {
	return this->thuc;
}


//tra ve phan ao
int SoPhuc::getAo() {
	return this->ao;
}

// sua doi phan thuc
void SoPhuc::setThuc(int newThuc) {
	this->thuc = newThuc;
}

// sua doi phan ao
void SoPhuc::setAo(int newAo) {
	this->ao = newAo;
}

/*
	SoPhuc operator+(SoPhuc A, SoPhuc B){
		SoPhuc result;
		result.thuc = A.thuc + B.thuc;
		result.ao = A.ao + B.ao;
		return result;
	}
*/

//+
SoPhuc SoPhuc::operator+(SoPhuc A) {
	SoPhuc result;
	//tinh phep toan +
	result.thuc = this->thuc + A.thuc;
	result.ao = this->ao + A.ao;
	// tra ve ket qua
	return result;
}

/*
	SoPhuc operator-(SoPhuc A, SoPhuc B){
		SoPhuc result;
		result.thuc = A.thuc - B.thuc;
		result.ao = A.ao - B.ao;
		return result;
	}
*/
