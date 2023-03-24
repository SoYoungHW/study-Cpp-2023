#include <iostream>
using std::cout;
using std::endl;

class SinivelCap // Äà¹° Ã³Áö¿ë Ä¸½¶
{
public:
	void Take() const { cout << "Äà¹°ÀÌ ½Ï~ ³³´Ï´Ù." << endl; }
};

class SeezeCap // ÀçÃ¤±â Ã³Ä¡¿ë Ä¸½¶
{
public:
	void Take() const { cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù." << endl; }
};

class SuffleCap // ÄÚ¸·Èû Ã³Áö¿ë Ä¸½¶
{
public:
	void Take() const { cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù." << endl; }
};

class CONTAC600
{
private:
	SinivelCap sin;
	SeezeCap sne;
	SuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC660(CONTAC600& cap) const { cap.Take(); }
};


int main(void)
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC660(cap);

	return 0;
}