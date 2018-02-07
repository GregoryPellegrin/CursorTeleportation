/*
 * Gregory Pellegrin
 * pellegrin.gregory.work@gmail.com
 *
 * Teleporte le curseur
 */

#include <windows.h>

int main ()
{
	POINT Point;
	
	while (1)
	{
		GetCursorPos(&Point);
		
		if (Point.x == 0)
			SetCursorPos(GetSystemMetrics(SM_CXSCREEN) - 2, Point.y);
		
		else if (Point.y == 0)
			SetCursorPos(Point.x, GetSystemMetrics(SM_CYSCREEN) - 2);
		
		else if (Point.x == GetSystemMetrics(SM_CXSCREEN) - 1)
			SetCursorPos(1, Point.y);
		
		else if (Point.y == GetSystemMetrics(SM_CYSCREEN) - 1)
			SetCursorPos(Point.x, 1);
	}
	
	return EXIT_SUCCESS;
}