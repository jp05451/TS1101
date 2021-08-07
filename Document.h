#pragma once
#include<iostream>
#include<string>

using namespace std;

class Document
{
public:
				Document();
				Document(string bodytext);
				void setText(string body) ;
				string getText() const;
				Document& operator = (const Document& docu);
private:
				string text;
};
