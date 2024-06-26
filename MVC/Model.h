#pragma once
#include <fstream>

public ref class Model {
private:
	int A;
	int B;
	int C;
public:
	System::EventHandler^ observer;
	Model() {
		System::IO::StreamReader^ file = gcnew System::IO::StreamReader("Data.txt");
		if (file != nullptr) {
			System::String^ line;
			if ((line = file->ReadLine()) != nullptr) {
				this->A = System::Convert::ToInt32(line);
			}
			if ((line = file->ReadLine()) != nullptr) {
				this->B = System::Convert::ToInt32(line);
			}
			if ((line = file->ReadLine()) != nullptr) {
				this->C = System::Convert::ToInt32(line);
			}
			file->Close();
		}
	}
	void update_values() {
		//observer->Invoke(this, nullptr);
	}
	void write_to_file() {
		System::String^ data = System::Convert::ToString(A) + "\n" + System::Convert::ToString(B) + "\n" + System::Convert::ToString(C);
		System::IO::File::WriteAllText("Data.txt", data);
	}
	void set_value_A(int A) {
		if (A >= 0) {
			if (A <= B) this->A = A;
			else if (A <= C) {
				this->B = A;
				this->A = A;
			}
			else if (A <= 100) { 
				this->C = A;
				this->B = A;
				this->A = A;
			}
		}
		else this->A = 0;
		observer->Invoke(this, nullptr);
	}
	void set_value_B(int B) {
		if (B >= A && B <= C) this->B = B;
		observer->Invoke(this, nullptr);
	}
	void set_value_C(int C) {
		if (C <= 100) {
			if (C >= B) this->C = C;
			else if (C >= A) {
				this->B = C;
				this->C = C;
			}
			else if (C >= 0) {
				this->A = C;
				this->B = C;
				this->C = C;
			}
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