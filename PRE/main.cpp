#include <systemc.h>
#include "SYSTEM.h"
#include "PRE.h"
#include "tb.h"

SYSTEM* top = NULL;

int sc_main(int argc, char* argv[]) {
	sc_set_time_resolution(1, SC_PS);
	top = new SYSTEM("top");
	sc_start();
	return 0;
}