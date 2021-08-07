#pragma once
#include"Document.h"
#include<iostream>
#include<string>

using namespace std;

class File : public Document 
{
public: 
				File();
				File(string body, string path);
				void setPathname(string path) ;
				string getPathname() const;
				File& operator = (File& file) ;
private:
				string pathName;
};