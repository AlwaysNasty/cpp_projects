#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const char* dictionary[][2] = {
		"pencil", "Инструмент для рисования.",
		"keyboard", "Устройство ввода.",
		"plane", "Воздушное судно с неподвижными крыльями.",
		"shotgun", "плечевое огнестрельное оружие.",
		"net", "Группа соединенных между собой компьютеров.",
		"",""
	};
	char word[80];

	cout << "Введите слов: ";
	cin >> word;

	int i;
	for (i = 0; *dictionary[i][0]; i++)
	{
		if (!strcmp(dictionary[i][0], word))
		{
			cout << dictionary[i][1] << "\n"; 
			break;
		}
	}

	if (!*dictionary[i][0])
		cout << word << " не найдено.\n";
}
