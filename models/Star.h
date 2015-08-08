class Star

 {
     public:
    double DEC,RA,mag; // Элемент данных
	char string_out(Star star_one){
   Point obj_one;
    obj_one.RA=star_one.RA;
    obj_one.DEC=star_one.DEC;
    obj_one = Map::transformate(obj_one);
    double r = (6-star_one.mag)*20;

	return '<circle cx="200px" cy="200px" r="104px" fill="black"/>';
	}
 };
