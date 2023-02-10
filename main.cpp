#include "sha256.h"
#include <string>
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    if (argc > 1) {
	string hash_dig = crypto::sha256(argv[1]); 
	cout << hash_dig << endl;
    }
}


