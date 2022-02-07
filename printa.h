#pragma once

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int k;

void slow_print(const std::string& str, int delay_time)
{
	for (size_t i = 0; i != str.size(); ++i)
	{
		std::cout << str[i];
		Sleep(delay_time);
	}
}

enum Colors
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	PURPLE,
	YELLOW,
	WHITE
};

class Printa
{
public:
	const char* SetWhite()
	{
		SetConsoleTextAttribute(h, 15);
		return "";
	}
	const char* SetGreen()
	{
		SetConsoleTextAttribute(h, 10);
		return "";
	}
	const char* SetBlue()
	{
		SetConsoleTextAttribute(h, 9);
		return "";
	}
	const char* SetPurple()
	{
		SetConsoleTextAttribute(h, 13);
		return "";
	}
	const char* SetRed()
	{
		SetConsoleTextAttribute(h, 4);
		return "";
	}

	void Arrow(int color)
	{
		SetConsoleTextAttribute(h, color);
		std::cout << "-> ";
		SetWhite();
	}
	void Title(const std::string& str, int delay_time)
	{
		SetRed();
		for (size_t i = 0; i != str.size(); ++i)
		{
			std::cout << str[i];
			Sleep(delay_time);
		}
	}
	void OK(const char* text)
	{
		SetWhite();
		std::cout << " [";
		SetGreen();
		std::cout << "+";
		SetWhite();
		std::cout << "] ";
		std::cout << text << std::endl;
		SetWhite();
	}
	void Input(const char* text)
	{
		SetWhite();
		std::cout << " [ ";
		SetBlue();
		std::cout << "->";
		SetWhite();
		std::cout << " ] ";
		std::cout << text << "";
		std::cout << std::endl;
		SetWhite();
	}
	void Loading(const char* text)
	{
		SetWhite();
		std::cout << " [";
		SetPurple();
		std::cout << "<-->";
		SetWhite();
		std::cout << "] ";
		std::cout << text << std::endl;
		SetWhite();

	}
	void Fail(const char* text)
	{
		SetWhite();
		std::cout << " [";
		SetRed();
		std::cout << "-";
		SetWhite();
		std::cout << "] ";
		std::cout << text << std::endl;
		SetWhite();
	}

	void Print(const char* text)
	{
		std::cout << text << std::endl;
	}
	void PrintCol(const char* text, int color)
	{
		SetConsoleTextAttribute(h, color);
		std::cout << text << std::endl;
	}
	void Custom(std::string symbol, int symbolColor, const char* text, int textColor)
	{
		SetWhite();
		std::cout << " [ ";
		SetConsoleTextAttribute(h, symbolColor);
		std::cout << symbol;
		SetWhite();
		std::cout << " ] ";
		SetConsoleTextAttribute(h, textColor);
		std::cout << text << std::endl;
	}
	void Rainbow(std::string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			k > 14 ? k = 1 : k++;
			SetConsoleTextAttribute(h, k);
			std::cout << text.at(i);
		}

	}

	void Endl()
	{
		std::cout << std::endl;
	}
}Printa;