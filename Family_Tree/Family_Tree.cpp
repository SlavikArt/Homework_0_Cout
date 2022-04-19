#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 1);
    cout << R"(------------------------------------------------------------)" << "\n";
    cout << R"(|                                                          |)" << "\n";
    SetConsoleTextAttribute(console, 14);
    cout << R"(|                Ivanov Petya Vasiliyvich                  |)" << "\n";
    SetConsoleTextAttribute(console, 1);
    cout << R"(|                          |                               |)" << "\n";
    cout << R"(|                         / \                              |)" << "\n";
    cout << R"(|                        /   \                             |)" << "\n";
    cout << R"(|                       /     \                            |)" << "\n";
    cout << R"(|                      /       \                           |)" << "\n";
    cout << R"(|                ------         ------                     |)" << "\n";
    cout << R"(|               /                     \                    |)" << "\n";
    cout << R"(|              /                       \                   |)" << "\n";
    cout << R"(|             /                         \                  |)" << "\n";
    cout << R"(|            /                           \                 |)" << "\n";
    cout << R"(|           /                             \                |)" << "\n";
    SetConsoleTextAttribute(console, 14);
    cout << R"(| Ivanov Vasya Genadich          Ivanova Lena Sergeevna    |)" << "\n";
    SetConsoleTextAttribute(console, 1);
    cout << R"(|          |                               |               |)" << "\n";
    cout << R"(|         / \                             / \              |)" << "\n";
    cout << R"(|        /   \                           /   \             |)" << "\n";
    cout << R"(|       /     \                         /     \            |)" << "\n";
    cout << R"(|      /       \                       /       \           |)" << "\n";
    cout << R"(|     /         \                     /         \          |)" << "\n";
    cout << R"(|    /           \                   /           \         |)" << "\n";
    SetConsoleTextAttribute(console, 14);
    cout << R"(|Ded Gena   Babushka Alya       Ded Sergey   Babushka Katya|)" << "\n";
    SetConsoleTextAttribute(console, 1);
    cout << R"(|-----------------------------------------------------------)" << "\n";
    SetConsoleTextAttribute(console, 7);
}