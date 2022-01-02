 #include<iostream>

#include<cstring>

using namespace std;
//// Thenumerator=soorat , Denominator=makhraj.
class Deduction {

public:
	int Thenumerator,Denominator;

	Deduction() {
		cout << "Enter: Thenumerator : ";
		cin >> this->Thenumerator;
		cout << "Enter : Denominator ";
		cin >> this->Denominator;
	}

	void Deduction1(string S) {
		cout << S << endl;
		
		for (int i = this->Thenumerator; i >= 1; i--) {
			if (this->Thenumerator%i == 0 && this->Denominator%i == 0)
			{
				this->Thenumerator /= i;
				this->Denominator /= i;
			}
		}

		cout << this->Thenumerator << "/" << this->Denominator << endl;
	}

	Deduction sum(Deduction deduction2)
	{
		int s, m;
		m = (this->Denominator*deduction2.Denominator);
		s = (this->*deduction2.Thenumerator) + (this->*deduction2.Denominator);
		deduction2.Thenumerator = s;
		deduction2.Denominator = m;
		return deduction2;
	}
	Deduction sub(Deduction deduction2) {

		int s, m;
		m = (this->Denominator*deduction2.Denominator);
		s = (this->*deduction2.Denominator) - (this->Denominator*deduction2.Thenumerator);
		deduction2.Thenumerator = s;
		deduction2.Denominator = m;
		return deduction2;
	}
	Deduction mul(Deduction deduction2) {
		int s, m;
		m = (this->Denominator*deduction2.Denominator);
		s = (this->Thenumerator*deduction2.Thenumerator);
		deduction2.Thenumerator = s;
		deduction2.Denominator = m;
		return deduction2;
	}
	Deduction div(Deduction deduction2) {
		int s, m;
		m = (this->Denominator*deduction2.Thenumerator);
		s = (this->Thenumerator*deduction2.Denominator);
		deduction2.Thenumerator = s;
		deduction2.Denominator = m;
		return deduction2;
	}
};

int main()
{
	cout << "Deduction 1 : " << endl;
	Deduction deduction1;
	cout << "Deduction2 : " << endl;
	Deduction deduction2;
	Deduction1.sum(deduction2).Deduction("Sum : ");

	Deduction1.sub(deduction2).Deduction("Sub : ");

	Deduction1.mul(deduction2).Deduction("Mul : ");

	Deduction1.div(deduction2).Deduction("Div : ");
	
	
	
	
	system("pause>n");
	return 0;