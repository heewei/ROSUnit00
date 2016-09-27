#ifndef ALGO1CLASS_H
#define ALGO1CLASS_H

class algo1Class
{
	public:
		algo1Class();
		~algo1Class();

		struct myType
		{
			int x;
			int y;
			long tickStamp;
		};

		myType AddTogether(myType a, myType b);

	private:
	
		myType mymy;

};

#endif //ALGO1CLASS_H
