#pragma once
#include "Module.h"
#include <string>
#include <vector>
#include "TextTable.h"

class Etudiant
{
public:
	Etudiant(std::string name, std::string year, std::vector<Module> listModules);

	float calculerMoyenneGeneral();
	void ecrireReleve();
	// place holder function utilise comme joinpoint pour l'aspect logging
	void logFile(TextTable t){};
	~Etudiant();

private:
	std::string m_fullName;
	std::string m_year;
	// list des modules
	std::vector<Module> m_listModules;
	bool m_hasFailed;
	float m_moyenneGeneral;
};
