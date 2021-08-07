#pragma once
#include"Document.h"
#include<iostream>
#include<string>

using namespace std;

class Email : public Document
{
public:
				Email();
				Email(string body, string sender, string recipient, string title);
				void setEmail(string body, string sender, string recipient, string title);
				string getSender() const;
				string getRecipient() const;
				string getTitle() const;
				Email& operator = (Email& email) ;
private:
				string sender;
				string recipient;
				string title;
};