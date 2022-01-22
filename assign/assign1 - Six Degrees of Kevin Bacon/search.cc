#include <iostream>

#include "path.h"

#include "imdb.h"
using namespace std;

static const int kWrongArgumentCount = 1;
static const int kDatabaseNotFound = 2;

int main(int argc, char *argv[]) {
	if (argc != 3) {
		cerr << "Usage: " << argv[0] << " <source-actor> <target-actor>" << endl;
		return kWrongArgumentCount;
	}
	imdb db(kIMDBDataDirectory);
	if (!db.good()) {
		cerr << "Data directory not found!  Aborting..." << endl; 
		return kDatabaseNotFound;
	}
	// implement your code here
	return 0;
}

