#include "rooms.h"

int RoomData2(char cRoom[99][99])
{
   iMaxX = 20;
   iMaxY = 20;
   iLocX = 0; 
   iLocY = 0;
   iMoves = 299;

char cTemp[99][99] = {
{'a', 'a', 'a', 'a', 'a', 'w', 'a', 'a', 'a', 'a', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'},
{'a', 'p', 'i', '2', 'i', 'i', 'i', '2', '1', 'c', 'w', 't', 't', '*', 't', 't', 't', '%', 't', 'w'},
{'a', 'i', 'i', 'i', '1', 'i', 'i', 'i', '4', 'P', 'w', '(', 'w', 'w', 'w', 'w', 't', 'w', '^', 'w'},
{'a', '1', 'i', 'c', 'i', '4', 'i', 'i', 'i', 'a', 'w', 't', 't', 'w', 'c', 'w', 't', 'w', 't', 'w'},
{'a', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'I', '8', 'w', '^', 'w', '/', 'w', '(', 't', '(', 'w'},
{'a', 'i', '1', 'i', 'i', 'i', '2', 'i', '2', 'w', 'w', 't', '*', 't', 't', '%', '*', '%', '9', 'w'},
{'w', 'i', '4', '4', '3', '4', 'i', 'i', 'i', 'c', 'w', 't', 't', 'w', 'w', 'w', 'w', 'w', '%', 'w'},
{'w', '3', 'i', 'i', 'i', 'i', 'i', 'i', 'i', 'c', 'w', '^', 't', 'w', 'c', '^', '9', '*', '9', 'w'},
{'w', 'w', 'w', 'w', 'i', 'i', '3', 'c', '4', 'w', 's', '%', 'w', 'w', 'w', 'w', 'w', 'w', '(', 'w'},
{'w', 'W', 'W', 'W', 'S', 'a', 'a', 'S', 'a', 'e', 'e', 'w', 'w', 'c', 'c', 'w', 'c', 'c', 'c', 'w'},
{'w', 'W', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'e', 'e', 'w', 'c', '9', 'c', 'w', 'a', 'w', 'w', 'w'},
{'w', 't', 'f', 't', 't', 't', 'c', 'c', 'c', 'w', 'w', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'w'},
{'w', 't', 'f', 't', 'f', 'f', 'f', 'f', 'c', 'w', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'w'},
{'w', 't', 't', 'u', 'c', 'c', 'c', 'f', 'c', 'w', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'w'},
{'w', 'f', 'f', '8', 'f', 'f', 'c', 'f', 't', 'w', '5', '8', '6', 't', 'P', '*', 'P', 't', 't', 'w'},
{'w', 'c', 'c', 'c', 'f', '5', 'c', 'f', 't', 'w', '5', '8', '6', 'P', '*', 'P', '*', 'P', 't', 'w'},
{'w', 'c', 'f', 'f', 'f', 'f', 'f', 'f', 't', 'w', '5', '8', '6', 't', 'P', '*', 'P', 't', 't', 'w'},
{'w', 'c', 'f', 'c', 'c', 'c', 'f', 't', 't', 'w', 't', 't', 't', 't', 't', 't', 't', 't', '8', 'w'},
{'w', 't', 'c', 'c', 'f', 'B', 'f', 'F', 'f', '%', 'S', '*', 'c', '*', 'c', '*', 'c', '*', 'c', 'w'},
{'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'}};

unsigned short int i, i2;

for(i=0;i<20;++i)
{
	for(i2=0;i2<20;++i2)
	{
		cRoom[i][i2] = cTemp[i2][i];
	}

}
	   
   return 38;
}