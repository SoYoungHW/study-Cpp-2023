#include <iostream>
using std::cout;
using std::endl;

class SinivelCap // �๰ ó���� ĸ��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};

class SeezeCap // ��ä�� óġ�� ĸ��
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SuffleCap // �ڸ��� ó���� ĸ��
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
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