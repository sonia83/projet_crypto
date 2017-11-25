#include "openssl/sha.h"  //openssl est la biblio contenant la fonction de hachage "sha1"
#include <string.h>
#include <stdio.h>

int main(){
	// The data to be hashed
	const unsigned char data[] = "Notre phrase hashée!!";  //data = la phrase a hasher
	size_t length = sizeof(data);
	unsigned char hash[SHA_DIGEST_LENGTH];		 	// hash = ??
								//SHA_DIGEST_LENGTH == 20 octets de sortie 
	
	SHA1(data, length, hash);  			// sha1 = hachage du "data" de longueur "length" sur 160 bits 

	char mdString[SHA_DIGEST_LENGTH]; 		// ??
	 
	/* ---- Affichage de la phrase hashé ----- */
	for(int i = 0; i < (SHA_DIGEST_LENGTH/2) - 1; i++)      
           sprintf(&mdString[i*2], "%02x", (unsigned int)hash[i]);
    	printf("sha1 digest: %s\n", mdString);

	return 0;
}
