#include"File.h"

File::File():Document()
{
				pathName = "";
}
File::File(string body, string path):Document(body)
{
				pathName = path;
}
void File::setPathname(string path) 
{
				pathName = path;
}
string File::getPathname() const
{
				return pathName;
}
File& File::operator = (File& file) 
{
				pathName = file.pathName;
				setText( file.getText());
				return *this;
}

