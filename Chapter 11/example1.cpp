//Friend function and const declaration
class Sample{
public:
	Sample();
	friend int compare(const Sample& s1, const Sample& s2);
	void input();
	void output() const;
private:
	int stuff;
	double more_stuff;	
};