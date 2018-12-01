#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>
using namespace std;

class Persona{
	private:
		string dni_;
		string email_;
		string nombre_;
		string apellido1_;
		string apellido2_;
		int telefono_;
		string direccionPostal_;
		string fechaNacimento_;

	public:

		inline string getDni() {return dni_;};
		bool setDni(const string cad);

		inline string getEmail() {return email_;};
		//bool setEmail(const string cad){}; // por que era bool?

		inline string getNombre() {return nombre_;};
		inline void setNombre(const string cad) {nombre_=cad;};

		inline string getApellido1() {return apellido1_;};
		inline void setApellido1(const string cad) {apellido1_=cad;};

		inline string getApellido2() {return apellido2_;};
		inline void setApellido2(const string cad) {apellido2_=cad;};

		inline int getTelefono() {return telefono_;};
		inline void setTelefono(int numero) {telefono_=numero;};

		inline string getDireccionPostal() {return direccionPostal_;};
		inline void setDireccionPostal(const string cad) {direccionPostal_=cad;};

		inline string getFechaNacimiento() {return fechaNacimento_;};
		inline void setFechaNacimiento(const string cad) {fechaNacimento_=cad;}; 
};


#endif