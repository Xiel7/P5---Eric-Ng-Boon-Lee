//#include <iostream>
//
//using namespace std;
//
//bool contains(const char* const str, char a);
//
//
//int main()
//{
//	char word[22], letter;
//
//	cout << "Enter a word : ";
//	cin >> word;
//	cout << "Enter a letter : ";
//	cin >> letter;
//	
//	cout<<contains(word, letter);
//}
//
//bool contains(const char* const str, char a)
//{
//	for (int i = 0; i < sizeof(str); i++)
//	{
//		if (str[i] == a || toupper(str[i]) == a)
//		{
//			return true;
//			break;
//		}
//		
//	}
//
//	return false;
//}