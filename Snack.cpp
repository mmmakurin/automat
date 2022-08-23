#include "Snack.h"
#include <iostream>
#include <string>
using namespace std;
namespace snack
{
	Snack::Snack(std::string name, short calories, short proteins, short fats, short carbohydrates, int price)
	{
		nameSnack = name;
		caloriesSnack = calories;
		proteinsSnack = proteins;
		fatsSnack = fats;
		carbohydratesSnack = carbohydrates;
		priceSnack = price;
	}
	Snack::Snack(std::string name, short calories, short proteins, short fats, short carbohydrates)
	{
		nameSnack = name;
		caloriesSnack = calories;
		proteinsSnack = proteins;
		fatsSnack = fats;
		carbohydratesSnack = carbohydrates;
	}
	Snack::Snack(std::string name, short calories, short proteins, short fats)
	{
		nameSnack = name;
		caloriesSnack = calories;
		proteinsSnack = proteins;
		fatsSnack = fats;
	}
	Snack::Snack(std::string name, short calories, short proteins)
	{
		nameSnack = name;
		caloriesSnack = calories;
		proteinsSnack = proteins;
	}
	Snack::Snack(std::string name, short calories)
	{
		nameSnack = name;
		caloriesSnack = calories;
	}
	Snack::Snack(std::string name)
	{
		nameSnack = name;
	}
	Snack::Snack(const Snack& other)
	{
		this->nameSnack = other.nameSnack;
		this->caloriesSnack = other.caloriesSnack;
		this->proteinsSnack = other.proteinsSnack;
		this->fatsSnack = other.fatsSnack;
		this->carbohydratesSnack = other.carbohydratesSnack;
		this->priceSnack = other.priceSnack;
	}
	void Snack::setNameSnack(string value)
	{
		nameSnack = value;
	}
	string Snack::getNameSnack() const
	{
		return nameSnack;
	}
	void Snack::setCalories(short value)
	{
		caloriesSnack = value;
	}
	short Snack::getCalories() const
	{
		return caloriesSnack;
	}
	void Snack::setProteins(short value)
	{
		proteinsSnack = value;
	}
	short Snack::getProteins() const
	{
		return proteinsSnack;
	}
	void Snack::setFats(short value)
	{
		fatsSnack = value;
	}
	short Snack::getFats() const
	{
		return fatsSnack;
	}
	void Snack::setCarbohydrates(short value)
	{
		carbohydratesSnack = value;
	}
	short Snack::getCarbohydrates() const
	{
		return carbohydratesSnack;
	}
	void Snack::setPrice(int value)
	{
		priceSnack = value;
	}
	int Snack::getPrice() const
	{
		return priceSnack;
	}
	ostream& operator<<(ostream& output, const Snack& s) {
		output << "Имя товара: " << s.nameSnack << endl
			<< "Количество калорий: " << s.caloriesSnack << endl
			<< "Количество Белков: " << s.proteinsSnack << endl
			<< "Количество жиров: " << s.fatsSnack << endl
			<< "Количество углеводов: " << s.carbohydratesSnack << endl
			<< "Цена: " << s.priceSnack << endl;
		return output;
	}
}