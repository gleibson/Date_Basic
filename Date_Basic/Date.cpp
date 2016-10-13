#include <iostream>
#include "Date.h"

Date::Date()
{
	m_yearMin = YEAR_MIN_DEF;
	m_yearMax = YEAR_MAX_DEF;
	m_OK = false;
}

void Date::Change( char day, char month, short year)
{
	m_day = day; // this->m_day = day;
	m_month = month;
	m_year = year;

	Validation();
}

void Date::Validation()
{
	m_OK = m_year >= m_yearMin && m_year <= m_yearMax && m_month >= 1 && m_month <= 12 && m_day >= 1 && m_day <= lastDayMonth();
		
}

void Date::Print() const
{
	if (m_OK)
	{
		std::cout.fill('0');
		std::cout.width(2);
		std::cout.width << m_day << '/';
		std::cout.width(2);
		std::cout.width << m_month << '/';
		std::cout.width(4);
		std::cout.width << m_year << '/';

	}
	else
	{
		std::cout << "***ERROR**** \n";
	}
}