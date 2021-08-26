#include <iostream>
class Apple {
public:
	Apple() {
		massa = 0.0f;
		num_of_seeds = 0;
		strcpy_s(color, "0\0");
		strcpy_s(ripeness, "0\0");
	}
	int get_growth() {
		return growth;
	}
	void set_growth(int _growth) {
		growth = _growth;
	}
	int get_massa() {
		return massa;
	}
	void set_massa(float _massa)
	{
		massa = _massa;
	}
	int get_seeds() {
		return num_of_seeds;
	}
	void set_seeds(int _num_of_seeds)
	{
		num_of_seeds = _num_of_seeds;
	}
	void show_inform() {
		std::cout << "massa = " << massa << "\nnumber of seeds = " << num_of_seeds << "\ncolor: " << color << "\nripeness: " << ripeness << "\n";
	}
	void print_mas_apple(Apple* mas, int n) {
		for (int i = 0; i < n; i++)
		{
			std::cout << "apple " << i + 1 << ":";
			mas[i].show_inform();
		}
	}
	void enter_apple() {
		std::cout << "enter mas: ";
		float _massa;
		std::cin >> _massa;
		set_massa(_massa);
		std::cout << "enter number of seeds: ";
		int seeeds;
		std::cin >> seeeds;
		set_seeds(seeeds);
		std::cout << "enter apple growth(growth change occurs from 1 to 3): ";
		int growing_apple;
		std::cin >> growing_apple;
		set_growth(growing_apple);
		switch (get_growth()) {
		case 1:
			strcpy_s(color, "green\0");
			strcpy_s(ripeness, "not ripe\0");
			break;
		case 2:
			strcpy_s(color, "red\0");
			strcpy_s(ripeness, "ripe\0");
			break;
		case 3:
			strcpy_s(color, "brown\0");
			strcpy_s(ripeness, "rotten\0");
			break;
		default:
			std::cout << "error.\n";
			break;
		}
		system("pause");
		system("cls");
	}
private:
	float massa;
	int num_of_seeds;
	char color[30];
	int growth;
	char ripeness[30];
};

int main()
{
	Apple test;
	test.show_inform();
	test.enter_apple();
	test.show_inform();
}