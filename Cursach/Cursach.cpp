
#include <iostream>
#include<cstdlib>
#include<Windows.h>
#include<fstream>
#include<string>
#include<vector>

using namespace std;
class book{
private:
	string name, author, genre;
	int vol,n;
	float  price, pricep;
public:
	book() {
		name = " ";
		author = " ";
		genre = " ";
		price = 0;
		vol = 0;
		pricep = 0;
		n = 0;
	}
	string name1() {
		string a = name;
		return a;
	}
	string author1() {
		string a = author;
		return a;
	}
	string genre1() {
		string a = genre;
		return a;
	}
	int vol1() {
		int a = vol;
		return a;
	}
	int n1() {
		int a = n;
		return a;
	}
	float price1() {
		float a = price;
		return a;
	}
	float pricep1() {
		float a = pricep;
		return a;
	}
	

	void set(int n_,string name_, string author_, string genre_, float price_,int vol_,float x)
	{
		if(n_!=0)n = n_;
		if (name_ != " ")name = name_;
		if (author_ != " ")author = author_;
		if (genre_ != " ")genre = genre_;
		if (price_ != 0)price = price_;
		if (vol_ != 0)vol = vol_;
		if (price_ != 0)pricep = price *x;
	}


	void get()
	{
		if (price != 0) {
			
			cout << "||"<<n<<"\t||" << name << "\t\t||" << author << "\t\t||"<<genre<<"\t||"<<price<< "  \t\t  ||"<<vol<<"\t||"<<pricep<<"\t\t    ||"<<endl;
			cout << "||-------------------------------------------------------------------------------------------------------------------------||" << endl;

		}
	}
}obj;
void list(vector<book>& vec);
void exxit(vector<book>& vec);
int limit(int x,int y) {
	string str; int option;
	do{
		cin >> str;
	option = atoi(str.c_str());
	if (option < x || option>y)cout << "Введите число от " << x << " до " << y<<endl;

} while (option < x || option>y);
return option;
}
	int menu1()
	{
		system("cls");
		string str;
		int option;
		do
		{
			cout << "\n                                            M      E      N      U                                            " << endl;
			cout << "//==============================================================================================================\\\\" << endl;
			cout << "||                                 | 1 |        ПРОСМОТР КНИГ        |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | 2 |         ДОБАВЛЕНИЕ          |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | 3 |       РЕДАКТИРОВАНИЕ        |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | 4 |          УДАЛЕНИЕ           |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | 5 |           ПОИСК             |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | 6 |         СОРТИРОВКА          |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | 7 |      ПОДСЧЕТ ВЫРУЧКИ        |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | 8 |     ВЫХОД ИЗ ПРОГРАММЫ      |                                          ||" << endl;
			cout << "||---------------------------------+---+-----------------------------+------------------------------------------||" << endl;
			cout << "||                                 | № |  Выберите номер  варианта   |                                          ||" << endl;
			cout << "\\\\==============================================================================================================//" << endl;
			cout << "___________________________________________________________________" << endl;
			cout << "Выберите вариант действий:\t\t\t(От 1 до 8)" << endl;
			cin >> str;
			option = atoi(str.c_str());
			system("cls");
		} while (option < 1 || option>8);
		return option;
	}
	void add(vector<book>& vec, float x) {
		string name_, author_, genre_, buf;
		int vol_, n_, i = vec.size();
		float price_;
		bool b;

		cout << "Введите данные:\n";
		do {
			b = true;
			cout << "Код продукта(число больше нуля): ";
			cin >> buf;
			n_ = atoi(buf.c_str());
			for (int i = 0; i < vec.size(); i++)if (n_ == vec[i].n1())b = false;
			if (n_ < 1 || b == false)cout << "Код продукта дожен быть индивидуальным числом и должен быть больше нуля.\n";
		} while (n_ < 1 || b == false);

		    cout << "Название: "; cin >> name_;
		    cout << "Автор: "; cin >> author_;
		    cout << "Жанр: "; cin >> genre_;
		do {cout << "Себестоимость: "; cin >> buf;
			price_ = atoi(buf.c_str());
			if (price_ < 1)cout << "Себестоимость не можеть быть отрицательная и не может быть буквой!\n";
		} while (price_ < 1);
		do {
			cout << "Кол-во проданных экземпляров:"; cin >> buf;
			vol_ = atoi(buf.c_str());
			if (vol_ < 1)cout << "Количество не можеть быть отрицательным и не может быть буквой!\n";
		} while (vol_ < 1);
			vec.push_back(obj);
			vec[i].set(n_, name_, author_, genre_, price_, vol_,x);
		}
	
	void edit(vector<book>& vec, float a) {
		string str, y, buf; int i, x, j = 0; float z; bool b = true;
		list(vec);
		cout << "Введите код продукта, который хотите изменить:"<< endl;
		do {
			
			cin >> buf;
			i = atoi(buf.c_str());
			if (i < 1)cout << "Код продукта не может быть отрицательным числом и буквой.\n";
		} while (i < 1);
		for (int k = 0; k < vec.size(); k++)if( i== vec[k].n1()) b = false;
		if (b == true)cout << "Продукта с таким кодом нет.\n";
		else{
			for (j; j < vec.size(); j++)if (vec[j].n1() == i)break;
			cout << "Что вы хотите изменить ?" << endl;
			cout << "(1)Код продукта.\n";
			cout << "(2)Название .\n";
			cout << "(3)Автора.\n";
			cout << "(4)Жанр.\n";
			cout << "(5)Себестоимость.\n";
			cout << "(6)Кол-во проданых экземпляров.\n";
			cout << "Выберите вариант действий:\t\t\t(От 1 до 6)" << endl;
			switch (limit(1, 6))
			{
			case 1: do {
				b = false;
				cout << "Введите код продукта(число больше нуля): ";
				cin >> buf;
				x = atoi(buf.c_str());
				for (int i = 0; i < vec.size(); i++)if (x == vec[i].n1()) b = true;
				if (x < 1 || b == true)cout << "Код продукта дожен быть индивидуальным числом и должен быть больше нуля.\n";
			} while (x < 1 || b == true);
			vec[j].set(x, " ", " ", " ", 0, 0,a); break;

			case 2:cout << "Введите название: "; cin >> y; vec[j].set(0, y, " ", " ", 0, 0,a); break;
			case 3:cout << "Введите автора: "; cin >> y; vec[j].set(0, " ", y, " ", 0, 0,a); break;
			case 4:cout << "Введите жанр: "; cin >> y; vec[j].set(0, " ", " ", y, 0, 0,a); break;
			case 5:cout << "Введите cебестоимость: ";
				do {
				 cin >> buf;
					z = atoi(buf.c_str());
					if (z < 1)cout << "Себестоимость не можеть быть отрицательная и не может быть буквой!\n";
				} while (z < 1);
				vec[j].set(0, " ", " ", " ", z, 0,a); break;
			case 6:cout << "Введите кол-во проданых экземпляров. ";
				do {
					 cin >> buf;
					x = atoi(buf.c_str());
					if (x < 1)cout << "Количество не можеть быть отрицательным и не может быть буквой!\n";
				} while (x < 1);
				vec[j].set(0, " ", " ", " ", 0, x,a); break;
			}
		}
	}

	void del(vector<book>& vec) {
		cout << "Вы хотите удалить весь список(1) или конретный продукт(2)? ";
		cout << "Выберите вариант действий(1 или 2):" << endl;
		if (limit(1, 2) == 1) {
			vec.clear();
			cout << "Список успешно удален!\n";
		}
		else {
			int a, i;
			bool b = true;
			string buf;
			list(vec);
			cout << "Введите код продукта, который хотите удалить: ";
			do {
				cin >> buf;
				a = atoi(buf.c_str());
				if (a < 1)cout << "Код продукта дожен быть больше нуля и не может быть буквой.\n";
			} while (a < 1 );
			for (i = 0; i < vec.size(); i++)if (a == vec[i].n1()) { b = false; break; }
			
			if (b == true)cout << "Такого продукта нет.\n";
			else {
				for (i; i < vec.size() - 1; i++) {
					vec[i] = vec[i + 1];
				}
				vec.pop_back();
				cout << "Продукт успешно удален!\n";
			}
		}
	}
	void search(vector<book>& vec) {
		int n, i = 0;
		string buf,a;
		float f;
		bool b = true;
		cout << "Поиск по" << endl;
		cout << "(1)Коду продукта.\n";
		cout << "(2)Названию .\n";
		cout << "(3)Автору.\n";
		cout << "(4)Жанру.\n";
		cout << "(5)Себестоимости.\n";
		cout << "(6)Кол-ву проданых экземпляров.\n";
		cout << "Выберите вариант действий:\t\t\t(От 1 до 6)" << endl;
		switch (limit(1, 6))
		{
		case 1: 
			cout << "Введите код продукта: ";
			do {
				cin >> buf;
				n = atoi(buf.c_str());

				if (n < 1)cout << "Код продукта должен быть больше нуля и не может быть буквой.\n";
			} while (n < 1);
			for (i = 0; i < vec.size(); i++)if (n == vec[i].n1()) 
			{
				b = false;
				break;
			}
			if (b == true)cout << "Такого продукта нет.\n";
			else {
				//for (i = 0; i < vec.size(); i++)if (n == vec[i].n1())break;
				cout << "\n//=========================================================================================================================\\\\" << endl;
				cout << "||КОД\t||\tНАЗВАНИЕ\t||\tАВТОР\t\t||\tЖАНР\t||СЕБЕСТОИМОСТЬ(Р)||  КОЛ-ВО(ШТ)||ОТПУСКНАЯ ЦЕНА(Р)||" << endl;
				cout << "||=========================================================================================================================||" << endl;
				vec[i].get(); 
			}break;
		case 2: 
			cout << "Название: "; cin >> a;
			for (i; i < vec.size(); i++)if (a == vec[i].name1())b = false;
				if (b ==true)cout << "Такого названия нет.\n";                              
			else {
				for (i=0; i < vec.size(); i++)if (a == vec[i].name1())break;
				cout << "\n//=========================================================================================================================\\\\" << endl;
				cout << "||КОД\t||\tНАЗВАНИЕ\t||\tАВТОР\t\t||\tЖАНР\t||СЕБЕСТОИМОСТЬ(Р)||  КОЛ-ВО(ШТ)||ОТПУСКНАЯ ЦЕНА(Р)||" << endl;
				cout << "||=========================================================================================================================||" << endl;
				vec[i].get();
			}
			break;
		case 3: cout << "Автор: "; cin >> a;
			for (i; i < vec.size(); i++)if (a == vec[i].author1())b = false;;
			if (b == true)cout << "Такого автора нет.\n";
			else {
				cout << "\n//=========================================================================================================================\\\\" << endl;
				cout << "||КОД\t||\tНАЗВАНИЕ\t||\tАВТОР\t\t||\tЖАНР\t||СЕБЕСТОИМОСТЬ(Р)||  КОЛ-ВО(ШТ)||ОТПУСКНАЯ ЦЕНА(Р)||" << endl;
				cout << "||=========================================================================================================================||" << endl;
				for (i=0; i < vec.size(); i++) {
					if (a == vec[i].author1())vec[i].get();
				}
			}
			break;

		case 4: 
			cout << "Жанр: "; cin >> a;
			for (i; i < vec.size(); i++)if (a == vec[i].genre1())b = false;;
			if (b == true)cout << "Такого жанра нет.\n";
			else {
				cout << "\n//=========================================================================================================================\\\\" << endl;
				cout << "||КОД\t||\tНАЗВАНИЕ\t||\tАВТОР\t\t||\tЖАНР\t||СЕБЕСТОИМОСТЬ(Р)||  КОЛ-ВО(ШТ)||ОТПУСКНАЯ ЦЕНА(Р)||" << endl;
				cout << "||=========================================================================================================================||" << endl;
				for (i = 0; i < vec.size(); i++) {
					if (a == vec[i].genre1())vec[i].get();
				}
			}
		  break;
		case 5: cout << "Введите себестоимость продукта: ";
			do {
				cin >> buf;
				f = atoi(buf.c_str());

				if (f < 1)cout << "Себестоимость должна быть неотрицательным числом.\n";
			} while (f < 1);
			for (i; i < vec.size(); i++)if (f == vec[i].price1())b = false;
			if (b == true)cout << "Такого продукта нет.\n";
			else {
			
				cout << "\n//=========================================================================================================================\\\\" << endl;
				cout << "||КОД\t||\tНАЗВАНИЕ\t||\tАВТОР\t\t||\tЖАНР\t||СЕБЕСТОИМОСТЬ(Р)||  КОЛ-ВО(ШТ)||ОТПУСКНАЯ ЦЕНА(Р)||" << endl;
				cout << "||=========================================================================================================================||" << endl;
				for (i = 0; i < vec.size(); i++) {
					if (f == vec[i].price1())vec[i].get();
				}
			}
				break;
		case 6: cout << "Введите кол-во проданых экземпляров: ";
				do {
					cin >> buf;
					n = atoi(buf.c_str());

					if (n < 1)cout << "Кол-во проданых экземпляров не может быть буквой и отрицательным числом.\n";
				} while (n < 1);
				for (i = 0; i < vec.size(); i++)if (n == vec[i].vol1())b = false;

				if (b == true)cout << "Такого продукта нет.\n";
				else {
					cout << "\n//=========================================================================================================================\\\\" << endl;
					cout << "||КОД\t||\tНАЗВАНИЕ\t||\tАВТОР\t\t||\tЖАНР\t||СЕБЕСТОИМОСТЬ(Р)||  КОЛ-ВО(ШТ)||ОТПУСКНАЯ ЦЕНА(Р)||" << endl;
					cout << "||=========================================================================================================================||" << endl;
					for(i = 0; i < vec.size(); i++) {
						if (n == vec[i].vol1())vec[i].get();
					}
				}break;
		}
		
	}
	void  revenue(vector<book>& vec) {
		float sum = 0, p, pp, n;
		string a;
		bool b=true;
		cout << "Подсчет выручки по" << endl;
		cout << "(1)Всем книгам.\n";
		cout << "(2)Автору.\n";
		cout << "(3)Жанру.\n";

		cout << "Выберите вариант действий:\t\t\t(От 1 до 3)" << endl;
		switch (limit(1, 3))
		{
		case 1:
			for (int i = 0; i < vec.size(); i++) {
				pp = vec[i].pricep1();
				p = vec[i].price1();
				n = (float)vec[i].vol1();
				sum += (pp - p) * n;
			}
			cout <<"Выручка по всем книгам состовляет "<< sum<< " рублей.\n";
			break;
		case 2:
			cout << "Введите автора: "; cin >> a;
			for (int i=0; i < vec.size(); i++)if (a == vec[i].author1())b = false;;
			if (b == true)cout << "Такого автора нет.\n";

			else {

				for (int i = 0; i < vec.size(); i++) {
					if (a == vec[i].author1())
					{
						pp = vec[i].pricep1();
						p = vec[i].price1();
						n = (float)vec[i].vol1();
						sum += (pp - p) * n;
					}
				}
				cout << a<<", выручка с книг автора состовляет " << sum << " рублей.\n";
			}
			break;
		case 3: 
			cout << "Введите жанр "; cin >> a;
			for (int i = 0; i < vec.size(); i++)if (a == vec[i].genre1())b = false;;
			if (b == true)cout << "Такого жанра нет.\n";

			else {

				for (int i = 0; i < vec.size(); i++) {
					if (a == vec[i].genre1())
					{
						pp = vec[i].pricep1();
						p = vec[i].price1();
						n = (float)vec[i].vol1();
						sum += (pp - p) * n;
					}
				}
				cout << a << ", выручка с книг этого жанра состовляет " << sum << " рублей.\n";
			}break;
		}
	}
	void qsort(vector<int>& vec, int left, int right)
	{
		int i = left, j = right;
		int tmp;
		int pivot = vec[(left + right) / 2];

		while (i <= j)
		{
			while (vec[i] < pivot) i++;
			while (vec[j] > pivot) j--;
			if (i <= j)
			{
				tmp = vec[i];
				vec[i] = vec[j];
				vec[j] = tmp;
				i++;
				j--;
			}
		}
		if (left < j)
			qsort(vec, left, j);
		if (i < right)
			qsort(vec, i, right);
		system("cls");
	}

	void sort(vector<book>& vec) {
		vector<int>veccopy;
		int o,k=0,x=0;
		book p;
		char t[] = { 'А','Б','В','Г', 'Д','Е', 'Ё','Ж', 'З','И', 'Й','К', 'Л','М', 'Н','О', 'П','Р', 'С','Т', 'У','Ф', 'Ч','Ц', 'Ч','Ш', 'Щ','Э', 'Ю','Я' };
		cout << "Сортировка по" << endl;
		cout << "(1)Коду.\n";
		cout << "(2)Автору.\n";
		cout << "(3)Жанру.\n";

		cout << "Выберите вариант действий:\t\t\t(От 1 до 3)" << endl;
		switch (limit(1, 3))
		{
		case 1:
			cout << "Сортировка по возрастанию(1) или по убыванию(2).\nВыберете пункт:";
			x=limit(1, 2);
			for (int i = 0; i < vec.size(); i++)
			{
				o = vec[i].n1();
				veccopy.push_back(o);
			}
			qsort(veccopy, 0,veccopy.size() - 1);
			for (int i = 0; i < veccopy.size(); i++) 
			{
				for (int j = 0; j < vec.size(); j++) 
				{
					if (veccopy[i] == vec[j].n1()) {
						p = vec[j];
						vec[j] = vec[k];
						vec[k] = p;
						k++;
					}
				}
			}if (x == 2)reverse(vec.begin(),vec.end());
			list(vec);
			break;
		case 2:
			cout << "Сортировка от А до Я (1) или от Я до А (2).\nВыберете пункт:";
			x = limit(1, 2);
			for (int i = 0; i < 29; i++)
			{
				for (int j = 0; j < vec.size(); j++)
				{
					if (t[i] == (vec[j].author1().c_str())[0]) {
						p = vec[j];
						vec[j] = vec[k];
						vec[k] = p;
						k++;
					}
				}
			}if (x == 2)reverse(vec.begin(), vec.end());
			list(vec);
			break;
		case 3:
			cout << "Сортировка от А до Я (1) или от Я до А (2).\nВыберете пункт:";
			x = limit(1, 2);
			for (int i = 0; i < 29; i++)
			{
				for (int j = 0; j < vec.size(); j++)
				{
					if (t[i] == (vec[j].genre1().c_str())[0]) {
						p = vec[j];
						vec[j] = vec[k];
						vec[k] = p;
						k++;
					}
				}
			}if (x == 2)reverse(vec.begin(), vec.end()); 
			list(vec);
			break;
		}
	}
	
	void menu(vector<book>&vec,float x) {
	
		switch (menu1())
		{
		case 1: list(vec); break;
	    case 2: add(vec,x); break;
		case 3: edit(vec,x); break;
		case 4: del(vec); break;
		case 5: search(vec); break;
		case 6: sort(vec); break;
		case 7: revenue(vec); break;
		case 8: exxit(vec); break;

		}
	}
	
	void list(vector<book>& vec) {
		if (vec.empty())cout << "\n\t\t\t\t\t\tМЕНЮ ПУСТОЕ\n";
		else {
			cout << "\n//=========================================================================================================================\\\\" << endl;
			cout << "||КОД\t||\tНАЗВАНИЕ\t||\tАВТОР\t\t||\tЖАНР\t||СЕБЕСТОИМОСТЬ(Р)||  КОЛ-ВО(ШТ)||ОТПУСКНАЯ ЦЕНА(Р)||" << endl;
			cout << "||=========================================================================================================================||" << endl;
			for (unsigned i = 0; i < vec.size(); i++)vec[i].get();
		}
	}
	void exxit(vector<book>&vec) {
		string name, author, genre;
		int vol, n;
		float  price;
		int x = vec.size();
		ofstream fout("myfile.txt");// для записи
		for (int i = 0; i < x; i++) {
			name = vec[i].name1();
			author = vec[i].author1();
			genre = vec[i].genre1();
			vol = vec[i].vol1();
			n = vec[i].n1();
			price = vec[i].price1();
			if(price!=0)fout << n <<" "<< name << " " << author << " " << genre << " " << price << " " << vol<<endl;
		}

	    fout.close();
		exit(0);
	}
	int write_vec(vector<book>& vec,float x) {
		string name, author, genre;
		int vol, i = 0, n;
		float price;
		ifstream fin("myfile.txt");//для чтения
		if (fin.is_open() == 0)return -1;
		else {
			while (!fin.eof()) {
				name = " "; author = " "; genre = " "; vol = 0; n = 0; price = 0;
				vec.push_back(obj);
				fin >> n >> name >> author >> genre >> price >> vol;
				if (price > 0)vec[i].set(n, name, author, genre, price, vol,x);
				i++;
			}
			return 0;
			fin.close();
		}
	}
	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		system("color F");
		setlocale(0, "");
		vector<book>vec;
		float x; string str;
		cout << "Перед началом работы программы введите глобальный параметр в процентах для расчета отпускных цен на книги.\n";
		do {
			cout << "Ввод :";
			cin >> str;
			x = atoi(str.c_str());
			if (x <1 )cout << "Нельзя вводить буквы и отирацтельные числа.\n";
		} while (x < 1);
		x *= 0.01;
		x += 1;
		if (write_vec(vec,x) == -1)cout << "Файл не открыт!\n";
		else {
			while (1)
			{
				menu(vec,x);
				system("pause");
				system("cls");
			}
		}
	}

