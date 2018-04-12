#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 2) {
		return 0;
	}

	int count = atoi(argv[1]);
	
	int res = 12;
	while (count > 0) {
		for (; true; res++) {
			int temp = 0;
			for (int i = 1; i <= res / 2; i++) {
				if (res % i == 0) {
					temp += i;
				}
			}
			if (temp > res) {
				break;
			}
		}
		cout << res;
		count--;
		res++;
	}

	return 0;
}