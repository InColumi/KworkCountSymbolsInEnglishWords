#include <iostream>
#include <string>
#include <map>

using namespace std;

int ConvertNumberToLengthWord(int number)
{
	int value = 0;
	switch(number)
	{
		case 1: // one
		case 2: // two
		case 6: // six
			value = 3;
		case 4: // four
		case 5: // five
		case 9: // nine
			value = 4;
			break;
		case 3: // three
		case 7: // seven
		case 8: // eight
		case 40: // forty
		case 50: // fifty
		case 60: // sixty
			value = 5;
			break;
		case 11: // eleven
		case 12: // twelve
		case 20: // twenty
		case 30: // thirty
		case 80: // eighty
		case 90: // ninety
			value = 6;
			break;

		case 15: // fifteen
		case 16: // sixteen
		case 70: // seventy
			value = 7;
			break;

		case 14: // fourteen
		case 18: // eighteen
		case 19: // nineteen
			value = 8;
			break;

		case 13: // thierteen
		case 17: // seventeen
			value = 9;
			break;

		default:
			throw std::invalid_argument("Unknow number " + number);
			break;
	}
	return value;
}


int main()
{
	system("pause");
	return 0;
}