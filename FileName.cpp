#include <iostream>
#include <cstring>
using namespace std;

// ������� ��� ��������� ������� ������� "+", "-", "=" � �����.
int CountOccurrences(const char* str) {
    int count = 0;  // ����� ��� ��������� ������� �������.
    for (int i = 0; str[i] != '\0'; ++i) {  // ������ ������� ������� �����.
        if (str[i] == '+' || str[i] == '-' || str[i] == '=') {  // ��������, �� ������ ���� �� �������.
            ++count;  // ���� ��������, �������� ��������.
        }
    }
    return count;  // ��������� ������� ��������� �������.
}

// ������� ��� ����� ������� ������� "+", "-", "=" �� ���� ������ "**".
void ReplaceSymbols(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {  // ������ ������� ������� �����.
        if (str[i] == '+' || str[i] == '-' || str[i] == '=') {  // ���� ������ ���� �� �������.
            str[i] = '*';  // ����� ������� �� '*'.
            for (int j = i + 1; str[j] != '\0'; ++j) {  // �������� ���������� �������.
                str[j] = '*';  // ����� ���������� ������� �� '*'.
                break;  // �������� � ����� ���� ����� ���� �������.
            }
        }
    }
}

int main() {
    char str[101];  // ���������� ������ ��� �������� �����.
    cout << "Enter string:" << endl;  // ����� �� �������� �����.
    cin.getline(str, 100);  // �������� ����� � ���������� �� 100 �������.
    cout << "Total occurrences of '+', '-', '=': " << CountOccurrences(str) << endl;  // ��������� ������� ������� "+", "-", "=".
    ReplaceSymbols(str);  // ������ ������� ��� ����� �������.
    cout << "Modified string: " << str << endl;  // ��������� �������������� �����.
    return 0;  // ���������� ��������.
}