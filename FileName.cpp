#include <iostream>
#include <string>
#include <map>

struct Property {
	std::string name;
	float value;
	std::map<std::string,float> value;
};

struct Qbit {
	std::string name;
	float value;
	std::map<std::string,Property> properties;
};

//量子コンピュータでいえば、磁器反応は大切で、量子ビットの状態を変えることができます。
//その時影響しあう、ビットの状態はプロパティによって引き合うことが予想され、プロパティの名前と値を保存するための構造体を定義しました。