#pragma once
#include <tuple>
#include <string>

class Module
{
public:
	Module(std::string nom, float td, float controle, int coef);
	~Module(){};

	void set_note(float td, float controle);
	void set_coef(float coef);

	std::tuple<float, float> get_note();
	int get_coef();
	float get_moyennModule();
	std::string get_mouleName() { return this->m_nomModule; }

private:
	// note de TD et note de controle
	std::string m_nomModule;
	std::tuple<float, float> m_note;
	int m_coef;
	float m_moyennModule;
};
