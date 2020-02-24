#ifndef __CAFFE_H__
#define __CAFFE_H__

class Caffe: public CaffeineBeverage
{
public:
	void brew()
	{
		cout << "caffe brew" << endl;
	}

	void addCondiments()
	{
		cout << "caffe adding condiments" << endl;
	}
};

#endif
