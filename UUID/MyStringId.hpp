#pragma once
#include "MyId.hpp"
#include <string>
using namespace std;
class MyStringId:public MyId{
	
	public:
		MyStringId(const std::string& identifier):mIdType(MyIdType::UString), mIdentifier(identifier){
		}
		const std::string& getIdentifier() const {
			return mIdentifier;
		}		
	private: 
		std::string mIdentifier;
		
};
