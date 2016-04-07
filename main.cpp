class product
{
	public:
		virtual void transport()=0;
		virtual void set_price()=0;
};

class cabinet:product
{
	public:
		virtual void open(){};
		void transport(){}
};

class standing_c:cabinet
{
	private:
		int width;
};

class hanging_c:cabinet
{
	public:
		void hang(){}
};

class element:product
{
	private:
		char *type;
	public:
		void is_compatible(){};
		void transport(){};
};

class agd:product
{
	public:
		virtual void turn_on(){};
		void transport(){};
};

class oven:agd
{
	private:
		int max_temp;
	public:
		void turn_on()
};

class microvave:agd
{
	private:
		int power;
	public:
		void turn_on()
};
