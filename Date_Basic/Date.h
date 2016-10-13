

class Date
{
private:
	char m_day;
	char m_month;
	short m_year;

	short m_yearMin, m_yearMax;
	int m_idailyroutine;
	bool m_OK;

public:
	enum {YEAR_MIN_DEF= 1, YEAR_MAX_DEF=9999};
	enum { FEBRUARY=2, JULY = 7 };

	Date(); /*Date(Date this)*/ //constructor
	void Change(char day, char month, short year);         /*Change(Date this, char day, char month, short year)*/
	void Validation();

	char lastDayMonth() const; /*Date(Date this)*/
	bool leapYear() const; /*Date(Date this)*/

	void Print() const;
};