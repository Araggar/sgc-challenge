#include <stdio.h>
#include <libcryptosec/MessageDigest.h>

int main(int argc, char **argv) {
	printf("Hello There!\n");
	
	MessageDigest::loadMessageDigestAlgorithms();
	
	return 0;
}
