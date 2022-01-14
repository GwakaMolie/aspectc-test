#include "Module.h"

Module::Module(std::string nom, float td, float controle, int coef)
{
	m_coef = coef;
	m_nomModule = nom;
	set_note(td, controle);
	// moyenn du module est 60% controle 40% td
	m_moyennModule = (controle * 0.6) + (td * 0.4);
}

void Module::set_note(float td, float controle)
{
	this->m_note = std::make_tuple(td, controle);
};

void Module::set_coef(float coef)
{
	this->m_coef = coef;
};

std::tuple<float, float> Module::get_note()
{
	return this->m_note;
};

float Module::get_moyennModule()
{
	return m_moyennModule;
}
int Module::get_coef()
{
	return this->m_coef;
};