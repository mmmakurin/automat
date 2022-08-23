#pragma once
#include <string>
using namespace std;

namespace snack
{
	class Snack
	{
	private:
		string nameSnack;
		short caloriesSnack;
		short proteinsSnack;
		short fatsSnack;
		short carbohydratesSnack;
		int priceSnack;

	public:
		//конструкторы
		Snack(string name, short calories, short proteins, short fats, short carbohydrates, int price);
		Snack(string name, short calories, short proteins, short fats, short carbohydrates);
		Snack(string name, short calories, short proteins, short fats);
		Snack(string name, short calories, short proteins);
		Snack(string name, short calories);
		Snack(string name);
		Snack(const Snack& other);
		//деструктор
		~Snack() = default;
		// Функция для вывода информации в консоль
		friend ostream& operator<<(ostream& output, const Snack& s);
		//геттеры и сеттеры
		string getNameSnack() const;
		void setNameSnack(string value);

		short getCalories() const;
		void setCalories(short value);

		short getProteins() const;
		void setProteins(short value);

		short getFats() const;
		void setFats(short value);

		short getCarbohydrates() const;
		void setCarbohydrates(short value);

		int getPrice() const;
		void setPrice(int value);
	};
}

