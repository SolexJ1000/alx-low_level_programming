#include <stdio.h>

int one = 1; 
void combination(int pool, int need, unsigned int chosen, int at) { 
	if (pool < need + at) return; 
	if (!need) { 
		for (at = 0; at < pool; at++) 
			if (chosen & (one << at)) putchar(at+'0'); 
		putchar('\n'); 
		return; 
	} 
	combination(pool, need - 1, chosen | (one << at), at + 1); 
	combination(pool, need, chosen, at + 1); 
} 
int main() { 
	combination(3, 3, 0, 0); 
	return 0; 
} 
