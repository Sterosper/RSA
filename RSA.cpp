
//============================================================================
// Name        : RSA.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : RSA impelementation in C++
//============================================================================

#include <string>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

  long p = 61;
	long q = 53;
	long e = 17;
	long d = 2753;
	long n = p * q;

int CreateKey(){

	return 17;
}

long * Encrypt(string plaintext){

	char *text = new char[plaintext.size()+1];
	long *cipher = new long[plaintext.size()+1];
	
	text[plaintext.size()] = 0;
	strcpy (text, plaintext.c_str());

	for(int i = 0; text[i] != 0; i++) {
		 
		cipher[i] = (long) pow((int)text[i] % 26, e);
		cout << (long) text[i] << " = " <<  cipher[i] << endl;
	}

	return cipher;

}

string Decrypt(string ciphertext){

	return ciphertext;
}

int Factor(){

	return 1337;
}
int main() {

	string plaintext = "";
	long * ciphertext;

	cout<<"Enter plaintext: ";
	cin>>plaintext;


	

//	e = CreateKey();

	ciphertext = Encrypt(plaintext);

	cout<< "Encrypted. Ciphertext = " << ciphertext;

//	plaintext = Decrypt(ciphertext);

//	cout<< "Decrypted. Plaintext = %s\n" << plaintext;


	return 0;
}





