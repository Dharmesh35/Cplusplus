#include "header.cpp"
#include "implement.cpp"

int main()
{
	string answers[20] = {"B", "D", "A", "A", "C", "A", "B", "A", "C", "D", "B", "C", "D", "A", "D", "C", "C", "B", "D", "A"};
	TestGrader exam;
	exam.setKey(answers);
	string yourTest[20];
	int choice;
	do
	{
		for (int x = 0; x < 20; x++)
		{
			cout << "Enter the answer  " << x + 1 << ": ";
			cin >> yourTest[x];
			while (yourTest[x] > "D" || yourTest[x] < "A")
			{
				cout << "Please enter from A-D: ";
				cin >> yourTest[x];
			}
		}
		exam.grade(yourTest);
		cout << endl
			 << "Enter -1 to quit, else enter any number to retake the exam: ";
		cin >> choice;
	} while (choice != -1);
	return 0;
}