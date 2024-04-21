#pragma once

public ref class Model {
private:
	int A = 0;
	int B;
	int C;
public:
	System::EventHandler^ observer;
	void set_value_A(int A) {
		if (A >= 0) {
			if (A <= B) this->A = A;
			else if (A <= C) { set_value_B(A); set_value_A(A); }
			else if (A <= 100) { set_value_B(A, true); set_value_A(A); }
		}
		else this->A = 0;
		observer->Invoke(this, nullptr);
	}
	void set_value_B(int B) {
		if (B >= A && B <= C) this->B = B;
		observer->Invoke(this, nullptr);
	}
	void set_value_B(int B, bool flag) {
		if (flag) { set_value_C(B); set_value_B(B); }
		else { set_value_A(B); set_value_B(B); }
	}
	void set_value_C(int C) {
		if (C <= 100) {
			if (C >= B) this->C = C;
			else if (C >= A) { set_value_B(C); set_value_C(C); }
			else if (C >= 0) { set_value_B(C, false); set_value_C(C); }
		}
		else this->C = 100;
		observer->Invoke(this, nullptr);
	}
	int get_value_A() {
		return A;
	}
	int get_value_B() {
		return B;
	}
	int get_value_C() {
		return C;
	}
};