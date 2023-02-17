﻿// var_0.cpp : 
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct Record
{
	char surName[17];
	char ident[12];
	unsigned short year;
	float salary;
	bool isEmpty;
};


struct Record CreateRecord() {
	struct Record newRecord;
	// ToDo cin 

	return newRecord;
}

struct Record ReadRecord(struct Record *records, int index) {
	struct Record newRecord;
	// ToDo cin 
	return newRecord;
}


struct Record UpdateRecord(struct Record inRecord, int index) { 
	return inRecord;
}

void deleteRecord(struct Record inRecord, int index) {
	
}


void DrawLine() {
	for (int i = 0; i < 80; i++) {
		cout << "-";
	}
	cout << "\n";
}

char* GetSpacebar(int count) {
	char* msg = new char[count];
	for (int i = 0; i < count; i++)
	{
		msg[i] = ' ';
	}
	msg[count] = '\0';
	return msg;
}

int GetSize(char* msg) {
	int size = 0;
	while (msg[size] != '\0')
		size++;
	return size;
}

void Draw(struct Record * records) {

	DrawLine();
	cout << "| Отдел кадров" << GetSpacebar(80 - sizeof("| Отдел кадров")) << "|\n";
	DrawLine();
	//|Фамилия |Инициалы |Год рожд | Оклад|
	cout << "| Фамилия" << GetSpacebar(21 - sizeof("| Фамилия"));
	cout << "| Инициалы" << GetSpacebar(21 - sizeof("| Инициалы"));
	cout << "| Год рожд" << GetSpacebar(21 - sizeof("| Год рожд"));
	cout << "| Оклад" << GetSpacebar(20 - sizeof("| Оклад")) << "|\n";
	DrawLine();
	for (int i = 0; i < 3; i++) {
		cout << "| " << records[i].surName << GetSpacebar(18 - GetSize(records[i].surName));
		cout << "| " << records[i].ident << GetSpacebar(18 - GetSize(records[i].ident));
		cout << "| " << records[i].year << GetSpacebar(18 - to_string(records[i].year).size());
		cout << "| " << records[i].salary << GetSpacebar(22 - to_string(records[i].salary).size()) << "|\n";
		DrawLine();
	}
	cout << "| Примечание: оклад установлен по состоянию на 1 января 2000 года" << GetSpacebar(80 - sizeof("| Примечание: оклад установлен по состоянию на 1 января 2000 года")) << "|\n";
	DrawLine();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct Record records[10];

	records[0] = { "Иванов", "И. И.", 1975, 517.50, true };
	records[1] = { "Петренко", "П.П.", 1956, 219.10, true };
	records[2] = { "Панковский", "М.С.", 1967, 300.10, true };

	Draw(records);
}