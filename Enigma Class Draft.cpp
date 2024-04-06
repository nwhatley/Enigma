

// using rotors as data members

class Enigma {

	rotor rotor_A;
	rotor rotor_B; 
	rotor rotor_C;

	string reflector = "YRUHQSLDPXNGOKMIEBFZCWVJAT";

	Enigma(rotor pos_1, rotor pos_2, rotor pos_3) // rotor offset
	
	{

	rotor_A = pos_1;
	rotor_B = pos_2;
	rotor_C = pos_3;

	}

	//aaaAAAAAaaaa

	void Keystroke(char keystroke) {}
	void Move(rotor rotor_input) {
	rotor_input.traversed += 1;
	rotor_input.current_position += 1;
	if (rotor_C.current_position == rotor_C.notch)
	//next rotor must move and so on
	
	}

};

string entry =     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string rotor_1 =   "EKMFLGDQVZNTOWYHXUSPAIBRCJ";

int starting_position;
int offset;

int current_position;

char loc;

loc = entry[current_position]
next = rotor_1[int(loc)]

position = current_position + 1 % 25 
// wraps around but advances within string length


int chartoloc(char n) {

toupper(n) // <cctype>

return (int(n) - 65) //65 = 'A' ... 
}