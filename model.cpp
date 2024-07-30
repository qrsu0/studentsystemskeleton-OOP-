#include <iostream>
using namespace std;

// classes 
// class sharedata
class shareData {
	private:
		int id;
		string name;
	public:
		//setter
		void setId(int id) {
			this->id = id;
		}
		void setName(string name) {
			this->name = name;
		}
		//getter
		int getId() {
			return id;
		}
		string getName() {
			return name;
		}

};
// BaseEntity class
class BaseEntity: public shareData {
private:
	
	int age;
	string phoneNumber;
public:
	//setter
	void setAge(int age) {
		this->age = age;
	}
	void setPhoneNumber(string phoneNumber) {
		this->phoneNumber = phoneNumber;
	}

	//getter
	int getAge() {
		return age;
	}
	string getPhoneNumber() {
		return phoneNumber;
	}

};

//Teacher
class Teacher : public BaseEntity {
private:

	double salary;
	int studentsIds[5];
public:
	//setter
	void setSalary(double salary) {
		this->salary = salary;
	}
	void setStudentIds(int studentsIds[5]) {
		for (int i = 0; i < sizeof(studentsIds) / sizeof(studentIds[0]
	; i++) {
			this->studentIds[i] == studentIds[i];
		};
	}
	//getter
		double getSalary() {
			return salary;
		}
		int* getStudentIds() {
			return studentsIds;
		}
};
	

// student class
class student : public BaseEntity {
private:

	double gpa;
	Teacher teachers[5];

public:
	//setter
	void setGpa(double gpa) {
		this->gpa = gpa;
		Teacher teachers[5];
	}
	void setTeachers(Teacher teachers[5]) {
		for (int i = 0; i < 5; i++) {
			this->teachers[i] = teachers[i];
		}
	}
	//getter
	double getGpa() {
		return gpa;
	}
	Teacher* getTeachers() {
		return teachers;
	}


};

// course class
class course: public shareData {
	private:
		int id;
		string name;
		double hour;
	public:
		//setter 
		//setter
		void setId(int id) {
			this->id = id;
		}
		void setName(string name) {
			this->name = name;
		}
		void setHour(double hour) {
			this->hour = name;
		}

		//getter
		int getId() {
			return id;
		}
		
		string getName() {
			return name;
		}
		double getHour() {
			return hour;
		}

};

