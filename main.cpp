#include <iostream>
using namespace std; 

const long MIN = -2147483647;
const long MAX = 2147483647;

class Integer 
{
	private:
		int num;

	public:
		Integer(int numk) : num(numk) 
		{ }
		Integer() : num(0)
		{ }
		Integer operator + (Integer num2)
		{
			if ((num + num2.num) > MAX){
				cout << "Value too big.\n";
			}
			else {
				return Integer(num + num2.num);
			}
		}
		Integer operator - (Integer num2)
		{
			if ((num - num2.num) < MIN){
				cout << "Value too small.\n";
			}
			else {
				return Integer(num - num2.num);
			}
		}
		Integer operator * (Integer num2)
		{
			if ((num * num2.num) > MAX){
				cout << "Value too big.\n";
			}
			else {
				return Integer(num * num2.num);
			}
		}
		Integer operator / (Integer num2)
		{
			if ((num / num2.num) < MIN){
				cout << "Value too small.\n";
			}
			else {
				return Integer(num / num2.num);
			}
		}
		int get_val() const
		{
			return num;
		}
		operator int() const
		{
			return num;
		}
};

int main() 
{
	Integer int1 = 2;
	Integer int2 = 4;
	Integer int3 = 5;
	int int4;

	int3 = int1 - int2;

	cout << int3.get_val() << endl;

	int4 = int1;

	cout << int4 << endl;

	cout << int2;

	return 0;
}
