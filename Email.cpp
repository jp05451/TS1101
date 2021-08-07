#include"Email.h"

Email::Email():Document()
{
				this->sender = "";
				this->recipient = "";
				this->title = "";
}
Email::Email(string body, string sender, string recipient, string title) :Document(body) 
{

				this->sender = sender;
				this->recipient = recipient;
				this->title = title;
}
void Email::setEmail(string body, string sender, string recipient, string title)
{
				setText(body);
				this->sender = sender;
				this->recipient = recipient;
				this->title = title;
}
string Email::getSender() const
{
				return sender;
}
string Email::getRecipient() const
{
				return recipient;
}
string Email::getTitle() const
{
				return title;
}


Email& Email::operator = (Email& email)
{
				title = email.title;
				sender = email.sender;
				recipient = email.recipient;
				setText(email.getText());
				return *this;
}
