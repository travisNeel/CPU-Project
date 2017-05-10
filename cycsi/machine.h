#ifndef MACHINE_H
#define MACHINE_H
#include <string>
using namespace std;

class Machine {
    public:
        // internal machine state
        int PC;                 // program counter
        int SP;                 // stack pointer
        int R1;                 // general purpose register 1
        int R2;                 // general purpose register 2
        int R3;                 // general purpose register 3
        string inst;            // current instruction
    public:
        // public methods
        Machine(bool debug);    // constructor
        void run(void);         // start the machine with this code file
        void load(string);      // load the code memory
        void reset(void);       // reset the machine
        void dump(void);        // dump memory
};

void Machine::load(string){
    
}



#endif
