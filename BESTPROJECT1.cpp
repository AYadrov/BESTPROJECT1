#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x = 0;
	printf("Добрый день! Пожалуйста, введите целое число: ");
	scanf_s("%d", &x);
	printf("Куб данного числа равен %d", x*x*x);
	return 0;
}