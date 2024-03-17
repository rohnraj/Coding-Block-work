#include <iostream>
using namespace std;

bool RatInMaze(char maze[][5], int i, int j, int n, int m, int sol[][10]) {
	//BASE CASE
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << sol[i][j] << " ";
			}
			cout << endl;

		}
		cout << endl;
		return true;
	}

	//recursive case
	//initially current cell ka kaam mujhe karna hai
	//assume it to be a part of the solution
	sol[i][j] = 1;
	//1. right side se check karo(N*M-1)
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaRightSeMazeSolveHui = RatInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeMazeSolveHui == true) {
			return true;
		}	
	}
	//2.downward side se check karo(N-1*M)
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool KyaNeecheSeMazeSolveHui = RatInMaze(maze, i + 1, j, n, m, sol);
		if (KyaNeecheSeMazeSolveHui == true) {
			return true;
		}
	}
	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10] = {0};
	RatInMaze(maze, 0, 0, 4, 4, sol);

	return 0;
}