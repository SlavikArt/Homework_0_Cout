#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "                                                                                                                 \n";
	SetConsoleTextAttribute(console, 3);
	cout << "     ****             ****         **** ******               ****        *************************************** \n";
	cout << "   *********         *****        ***** **   **             *****        *************************************** \n";
	cout << "  ***     ***       **  **       **  ** **   **            **  **        *************************************** \n";
	cout << " ***               **   **      **   ** *******           **   **        *************************************** \n";
	cout << " ***              **    **     ******** ********         ********        *************************************** \n";
	SetConsoleTextAttribute(console, 14);
	cout << " ***             **     **    ********* **     **       *********        *************************************** \n";
	cout << "  ***     ***   **      **   **      ** **      **     **      **        *************************************** \n";
	cout << "   *********   **       **  **       ** **       **   **       **        *************************************** \n";
	cout << "     ****     **        ** **        ** ************ **        **        *************************************** \n";
	SetConsoleTextAttribute(console, 7);
	cout << "                                                                                                                 \n";
}