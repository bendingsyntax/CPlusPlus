class Account
{
private:
	double balance, intRate, interest;
	int transactions;
public:
	Account(double rate = .045, double bal = 0.0)
	{
		balance = bal; intRate = rate;
		interest = 0.0; transactions = 0;
	}

	void makeDeposit(double amount)
	{
		balance += amount;
		transactions++;
	}

	bool withdraw(double amount);

	void calcInterest()
	{
		interest = balance * intRate;
		balance += interest;
	}

	double getBalance()
	{
		return balance;
	}

	double getInterest()
	{
		return interest;
	}

	int getTransactions()
	{
		return transactions;
	}
};