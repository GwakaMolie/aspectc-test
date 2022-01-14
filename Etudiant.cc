#include "Etudiant.h"
#include <iostream>
#include <string>

Etudiant::Etudiant(std::string name,
				   std::string year,
				   std::vector<Module> listModules)
	: m_fullName(name), m_year(year), m_listModules(listModules)
{
	this->m_moyenneGeneral = calculerMoyenneGeneral();
}

float Etudiant::calculerMoyenneGeneral()
{
	float moyenSum = 0;
	float coefSum = 0;

	for (auto it = this->m_listModules.begin(); it != this->m_listModules.end(); ++it)
	{
		moyenSum = it->get_moyennModule() * it->get_coef();
		coefSum += it->get_coef();
	}
	return (moyenSum / coefSum);
}

void Etudiant::ecrireReleve()
{
	TextTable t('-', '|', '+');

	t.add("Nom: " + this->m_fullName);
	t.add("Class: " + this->m_year);
	t.add("");
	t.endOfRow();

	t.add("Module");
	t.add("TD");
	t.add("Exam");
	t.endOfRow();

	for (auto it = this->m_listModules.begin(); it != this->m_listModules.end(); ++it)
	{
		std::cout << std::setprecision(2) << std::fixed;
		float td = std::get<0>(it->get_note());
		float exam = std::get<1>(it->get_note());

		t.add(it->get_mouleName());
		t.add(std::to_string(td));
		t.add(std::to_string(exam));
		t.endOfRow();
	}

	t.add("");
	t.add("Moyenne");
	t.add(std::to_string(this->m_moyenneGeneral));
	t.endOfRow();

	this->logFile(t);
}

Etudiant::~Etudiant()
{
}