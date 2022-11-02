﻿/*Задание 7. Биолаборатория* (дополнительное задание)
Что нужно сделать
В борьбе со всемирной эпидемией коринебактерий исследователи компании «Терран Биотех» открыли новый антибиотик. Напишите программу, помогающую протестировать его.

В чашку Петри исследователи кладут N бактерий и добавляют X капель антибиотика. Известно, что число коринебактерий в чашке Петри увеличивается в два раза каждый час, а каждая капля антибиотика в первый час убивает 10 бактерий, во второй час — 9 бактерий, в следующий — 8 и так далее, пока антибиотик не перестанет действовать. Заметьте, что сначала число коринебактерий увеличивается, а затем действует антибиотик. Пользователь вашей программы вводит N и X, а программа печатает на экране, сколько бактерий останется в чашке Петри в конце каждого часа, до тех пор, пока не закончатся бактерии или антибиотик не перестанет действовать. Судьба человечества — в ваших руках. Обеспечьте контроль ввода.

Пример выполнения

			Введите количество бактерий: 12
			Введите количество антибиотика: 1
			После 1 часа бактерий осталось 14
			После 2 часа бактерий осталось 19
			После 3 часа бактерий осталось 30
			После 4 часа бактерий осталось 53
			…

Что оценивается
Цикл не бесконечный.
Количество бактерий и антибиотика не становится отрицательным.
После того как количество антибиотики или бактерий становиться равным нулю выполнение программы должно быть завершено.*/

#include <iostream>

int main()
{
	int maxWidth = 50;

	std::cout << "Введите общую ширину колонтитула: ";
	int widthFooter;
	std::cin >> widthFooter;
	while (widthFooter < 0 || widthFooter > maxWidth) {
		std::cout << "Ширина колонтитула должна быть в пределах от 0 до " << maxWidth << ". Введите снова: ";
		std::cin >> widthFooter;
	}

	std::cout << "Введите количество восклицательных знаков: ";
	int nuberExclamation;
	std::cin >> nuberExclamation;
	while (nuberExclamation < 0 || nuberExclamation > maxWidth) {
		std::cout << "Количество восклицательных знаков должно быть в пределах от 0 до " << maxWidth << ". Введите снова: ";
		std::cin >> nuberExclamation;
	}

	int beginPositionExclamation = (widthFooter / 2) - (nuberExclamation / 2);

	//Выводим левую половину колотитула
	for (int i = 0; i < beginPositionExclamation; i++) std::cout << "~";

	//Выводим восклицательные знаки
	for (int i = 0; i < nuberExclamation; i++) std::cout << "!";

	//Выводим правую половину колотитула
	for (int i = beginPositionExclamation + nuberExclamation + 1; i <= widthFooter; i++) std::cout << "~";

}