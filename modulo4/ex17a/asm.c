unsigned int greater_date(unsigned int date1, unsigned int date2) {

	short year1 = (short)(date1 >> 8);			
	short year2 = (short)(date2 >> 8);			

	if (year1 > year2) return date1;
	
	if (year2 > year1) return date2;
	
	char month1 = (char)(date1 >> 24);			
	char month2 = (char)(date2 >> 24);			
	
	if (month1 > month2) return date1;
	
	if (month2 > month1) return date2;
	
	char day1 = (char)date1;				 
	char day2 = (char)date2;				   
	
	if (day1 > day2) return date1;
	
	if (day2 > day1) return date2;
	
	return date1;
}