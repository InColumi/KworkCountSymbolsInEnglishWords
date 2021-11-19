#include <iostream>
#include <string>

using namespace std;

int GetLengthEnglishWordth(int number)
{
	int result = 0;
	switch(number)
	{
		case 1: // one
		case 2: // two
		case 6: // six
			result = 3;
			break;
		case 4: // four
		case 5: // five
		case 9: // nine
			result = 4;
			break;
		case 3: // three
		case 7: // seven
		case 8: // eight
		case 40: // forty
		case 50: // fifty
		case 60: // sixty
			result = 5;
			break;
		case 11: // eleven
		case 12: // twelve
		case 20: // twenty
		case 30: // thirty
		case 80: // eighty
		case 90: // ninety
			result = 6;
			break;
		case 15: // fifteen
		case 16: // sixteen
		case 70: // seventy
			result = 7;
			break;
		case 14: // fourteen
		case 18: // eighteen
		case 19: // nineteen
			result = 8;
			break;
		case 13: // thierteen
		case 17: // seventeen
			result = 9;
			break;
		default:
			//throw std::invalid_argument("Unknow number " + number);
			result = 0;
			break;
	}
	return result;
}

int Convert(int number)
{
	int hunred = number / 100.0; // вычисление сотен
	int dozens = number - hunred * 100; // вычисление десятков
	int unit = dozens - (int)(dozens / 10.0) * 10; // вычисление единци
	int result = 0;
	if(hunred >= 1 && hunred <= 9)
	{
		result += 7; // hundred(7) 
		if(dozens == 0 && unit ==0 )
		{
			result += 3; // and(3)
		}
		result += GetLengthEnglishWordth(hunred);
	}

	if(dozens >= 10 && dozens <= 19)
	{
		result += GetLengthEnglishWordth(dozens);
	}
	else
	{
		result += GetLengthEnglishWordth(dozens - unit);
		result += GetLengthEnglishWordth(unit);
	}

	return result;
}

int main()
{
	int sum = 0;
	for(size_t i = 1; i <= 1000; i++)
	{
		sum += Convert(i);
	}
	cout << "sum: " << sum << endl;
	system("pause");
	return 0;
}