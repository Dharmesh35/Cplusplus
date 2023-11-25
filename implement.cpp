#include"header.cpp"

class TestGrader{
private:
	string answer[20];
public:
	void setKey(string[]);
	void grade(string[]);
};

void TestGrader::setKey(string correct[]){
	for (int x = 0; x < 20; x++){
		answer[x] = correct[x];
	}
}
void TestGrader::grade(string test[]){
	int right = 0,wrong = 0,count = 0;
	for (int x = 0; x < 20; x++)
	{
		if (test[x] == answer[x]){
			right += 1;
			count += 1;
		}
		else if (test[x] != answer[x]){
			wrong += 1;
		}
	}
	if (count >= 15){
		cout << "PASSED" << endl;
	}
	else{
		cout << "FAILED" << endl;
	}
	cout << "You got a total of " << right << " right answers and a total of " << wrong << " wrong answers in the test" << endl;
	cout << "You got questions ";
	for (int x = 0; x < 20; x++){
		if (test[x] != answer[x]){
			cout << x + 1 << " ";
		}
	}
	cout << "wrong" << endl;};
