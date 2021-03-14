#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	protected:
		std::string	name;

	public:
		Victim();
		Victim(std::string name);
		Victim(const Victim &ref);
		virtual ~Victim();

		Victim& operator=(const Victim & ref);

		std::string getName() const;
		// 이 함수는 자식클래스인 Peon에서 오버라이딩 되므로 부모클래스인 Victim에선 virtual 키워드를 붙여줘야함.
		virtual void    getPolymorphed() const;

};

std::ostream &			operator<<( std::ostream & out, Victim const & ref);

#endif /* ********************************************************** VICTIM_H */