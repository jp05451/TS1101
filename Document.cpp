#include"Document.h"

Document::Document()
{
				text = "";
}
Document::Document(string bodytext)
{
				text = bodytext;
}
string Document::getText() const
{
				return text;
}
void Document::setText(string body) 
{
				text = body;
}

Document& Document::operator = (const Document& docu) 
{
				text = docu.text;
				return *this;
}
