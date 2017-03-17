#pragma once
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
enum MyIdType { UString, Integer};
class MyId{
	public:
		boost::uuids::uuid getMyId();
	private:
		MyId(MyIdType identifierType){
			mIdType = identifierType;
			mUUID = generator();
		} 
		MyIdType mIdType;
		boost::uuids::uuid mUUID; 
};
