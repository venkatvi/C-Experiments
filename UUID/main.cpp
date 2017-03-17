#include <iostream>
#include "MyStringId.hpp"
#include <boost/uuid/uuid_io.hpp>
#include <string>
using namespace std;
int main(int argc, char** argv){
	MyStringId id(std::string("temp"));
	std::cout << id.getMyId() << std::endl;
}
