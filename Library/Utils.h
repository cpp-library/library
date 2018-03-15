#pragma once
#include <string>
#include <sstream>
using namespace std;
class Utils {

public:
	//����ת�ַ���
	template<typename T>
	static string toString(const T &v);

	//�ַ���ת����
	template<typename T>
	static T fromString(const string &str);


	//ʱ����� yyyy-MM-dd xx:xx:xx
	static string getNowTime();
};

template<typename T>
inline string Utils::toString(const T & v)
{
	ostringstream os;
	os << v;
	return os.str();
}

template<typename T>
inline T Utils::fromString(const string & str)
{
	istringstream is(str);
	T v;
	is >> v;	
	return v;
}