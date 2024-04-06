


string entry =     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string rotor_1 =   "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
string rotor_2 =   "AJDKSIRUXBLHWTMCQGZNPYFVOE";
string rotor_3 =   "BDFHJLCPRTXVZNYEIWGAKMUSQO";
string reflector = "YRUHQSLDPXNGOKMIEBFZCWVJAT";
int position;
int offset; // ring offset 
int next position = position % offset; // change this should be + 

int starting_position; // intial letter faceup for a given rotor
int current_position; // % 25 to wrap around

int lmrpos; // 0-25
int mmrpos;
int rmrpos;


// Historic Rotor 1
struct rotor {
string wiring = "EKMFLGDQVZNTOWYHXUSPAIBRCJ"
int intial_position;
int ring_offset;
int traversed;
int notch; // when it flips the next rotor (and itself aswell) (unless lmr)
bool left_most; // is next to reflector or not?
// position = (intial + offset + traversed) % 25
}


// Using One Rotor 

// Incoming Letter 
// Assume Using Struct rotor 

char n = L; // L is pressed

ChartoInt(n); // Converts L to 0-25 index

RotorMove(rotor rotor1 , char n) {

rotor.intial + rotor.ring_offset + rotor.traversed % 25 // ugh

}

n = rotor.wiring[n] // Rotor Doesnt 'Move' :/ 

// n now equals T