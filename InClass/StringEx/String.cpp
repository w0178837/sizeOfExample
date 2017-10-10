#define _CRT_SECURE_NO_WARNINGS
//
// Created by inet2005 on 10/10/17.
//
#include <iostream>
#include <cstdio>
#include <cstring>
#include "String.h"
using namespace std;

String::String() {
    cout << "default constructor fired" <<endl;
    this->strMem = NULL;
}

String::String(char *strIn) {
    cout << "single argument constructor fired" <<endl;
    int length = strlen(strIn); // figures out length of incoming string
    this->strMem = new char[length+1]; // new local array
    strcpy(this->strMem,strIn); // copy into mem
}

String::String(const String &strIn) {
    cout << "copy constructor fired" <<endl;
    int len = strlen(strIn.strMem); // len of incoming string
    this->strMem = new char[len+1]; // new local array
    strcpy(this->strMem, strIn.strMem); //copy into mem
}

//String::~String() {} //default causes mem leak by not de allocating the array

String::~String() { // custom destructor
    cout << "custom destructor fired" <<endl;
    if(this->strMem!= NULL) {
        delete []this->strMem; //tell it that it is dealing with an array
    }
}

String String::operator=(String &strIn) {
    cout << "overloaded = fired" <<endl;
    int len = strlen(strIn.strMem);
    this->strMem = new char[len +1];
    strcpy(this->strMem,strIn.strMem);
    return *this;
}

String String::operator+=(String &strIn) {
    cout << "overloaded += fired" <<endl;
    char *temp = this->strMem; // store copy of mem
    int len;
    if(this->strMem!=NULL){
        len = strlen(this->strMem) + strlen(strIn.strMem) + 1;
    } else
        len = strlen(strIn.strMem) + 1;
    this->strMem = new char[len]; // destroy mem and create larger one
    if(temp!=NULL) {
        strcpy(this->strMem, temp);
    }
    strcat(this->strMem,strIn.strMem);
    delete []temp; // prevent leak
    return *this; // for cascades ie a= a+a+a+...+a
}

ostream &operator<<(ostream &output, String &strIn) {
    cout << "overloaded << fired" <<endl;
    output << strIn.strMem;
    return output; // return an output stream
}



