//#include<iostream>
//#include<string>
//using namespace std;
//class book
//{
//	string title;
//	string author;
//	string pyear;
//public:
//	void settitle(string name)
//	{
//		title = name;
//	}
//	void setauthor(string name)
//	{
//		author = name;
//	}
//	void setpyear(string name)
//	{
//		pyear = name;
//	}
//	string gettitle()
//	{
//		return title;
//	}
//	string getauthor()
//	{
//		return author;
//	}
//	string getpyear()
//	{
//		return pyear;
//	}
//};
//class library
//{
//	book* b;
//public:
//	void setb(int num)
//	{
//		b = new book[num];
//	}
//	void setlt(int num,string name)
//	{
//		b[num].settitle(name);
//	}
//	void setln(int num, string name)
//	{
//		b[num].setauthor(name);
//	}
//	void setly(int num, string name)
//	{
//		b[num].setpyear(name);
//	}
//	string getlt(int num)
//	{
//		return b[num].gettitle();
//	}
//	string getln(int num)
//	{
//		return b[num].getauthor();
//	}
//	string getly(int num)
//	{
//		return b[num].getpyear();
//	}
//};
//int main()
//{
//	library l;
//	cout << "--------------------Wellcome to library-------------------" << endl;
//	int num = 0;
//	cout << "How many books you want to add: " << endl;
//	cin >> num;
//	l.setb(num);
//	string n;
//	string t;
//	string y;
//	cin.ignore();
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Enter title of the book: " << endl;
//		getline(cin, t);
//		l.setlt(i, t);
//		cout << "Enter author of the book: " << endl;
//		getline(cin, n);
//		l.setln(i, n);
//		cout << "Enter publication year of the book: " << endl;
//		getline(cin, y);
//		l.setly(i, y);
//		cout << "-------------------------------------" << endl;
//		n = "";
//		t = "";
//		y = "";
//
//	}
//	int choice = 0;
//	while (choice != -1)
//	{
//		cout << "What you want to do: Press 1 to display all books, 2 to search book by title, 3 to search book by author, -1 to exit! " << endl;
//		cin >> choice;
//		if (choice == 1)
//		{
//			cout << "Outputting all books! " << endl;
//			for (int i = 0; i < num; i++)
//			{
//				cout << "Book " << i+1 << endl;
//				cout << "Book title: " << l.getlt(i)<<endl;
//				cout << "Author title: " << l.getln(i)<<endl;
//				cout << "Pubication year: " << l.getly(i)<<endl;
//				cout << "--------------------------------------" << endl;
//			}
//		}
//		if (choice == 2)
//		{
//			string st;
//			cout << "Enter the title of the book you want to search! " << endl;
//			cin >> st;
//			bool tfound = 0;
//			for (int i = 0; i < num; i++)
//			{
//				if (st == l.getlt(i))
//				{
//					cout << "Book found! " << endl;
//					cout << "Book " << i + 1 << endl;
//					cout << "Book title: " << l.getlt(i) << endl;
//					cout << "Author title: " << l.getln(i) << endl;
//					cout << "Pubication year: " << l.getly(i) << endl;
//					cout << "--------------------------------------" << endl;
//					tfound = 1;
//				}
//			}
//			if (tfound == 0)
//			{
//				cout << "Book not found! " << endl;
//			}
//		}
//		 if (choice == 3)
//		{
//			string st;
//			cout << "Enter the name of author of the book you want to search! " << endl;
//			cin >> st;
//			bool tfound = 0;
//			for (int i = 0; i < num; i++)
//			{
//				if (st == l.getln(i))
//				{
//					cout << "Book found! " << endl;
//					cout << "Book " << i + 1 << endl;
//					cout << "Book title: " << l.getlt(i) << endl;
//					cout << "Author title: " << l.getln(i) << endl;
//					cout << "Pubication year: " << l.getly(i) << endl;
//					cout << "--------------------------------------" << endl;
//					tfound = 1;
//				}
//			}
//			if (tfound == 0)
//			{
//				cout << "Book not found! " << endl;
//			}
//
//		}
//		 if (choice == -1)
//		 {
//			 return 0;
//		 }
//	}
//
//}