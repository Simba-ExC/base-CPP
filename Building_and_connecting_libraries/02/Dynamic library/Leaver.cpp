#include "Leaver.h"

Leaver::Leaver(std::string nameOfPerson)
{
	leavingPerson_ = "�� ��������, " + nameOfPerson + "!";
}

std::string Leaver::leave()
{
	return leavingPerson_;
}