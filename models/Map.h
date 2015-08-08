class Map {

public:
static Point transformate(Point in_coords){
in_coords.x=in_coords.RA*12;
in_coords.y=20*(in_coords.DEC+90);
return in_coords;
}
double min_mag_star=6;

};
