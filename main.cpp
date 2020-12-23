#include <iostream>
#include <string>
using namespace std;

void help(){
	
	int width = 80; // a typical assumption of 80 unit width console.
	
	string WelcomeLine = "...........WELCOME TO TODO............";
	
	int halfWelcomeLineLength = WelcomeLine.length() / 2;
    int halfOutputWidth = width / 2;
	
	int leadingSpaces = halfOutputWidth-halfWelcomeLineLength;
	int leftMargin = leadingSpaces + 8;
	
	std::cout<<std::string(leadingSpaces,' ')<<std::string(11,'.')<<"WELCOME TO TODO"<<std::string(11,'.')<<"\n"
          "\n"
          <<std::string(leftMargin,' ')<<"1. Add a new to do\n"
          <<std::string(leftMargin,' ')<<"2. Show remaining todos\n"
          <<std::string(leftMargin,' ')<<"3. Delete a todo\n"
          <<std::string(leftMargin,' ')<<"4. Complete a todo\n"
          <<std::string(leftMargin,' ')<<"5. Statistics\n"
          <<std::string(leftMargin,' ')<<"6. Exit\n"
          <<std::string(leadingSpaces,' ')<<std::string(38,'.')<<endl;
	
	
	}

int main()
{   
  help();

  return 0;
}

