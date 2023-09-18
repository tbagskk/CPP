#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
    private :
    
        const std::string   _name;
        int                 _grade;

    public :

        Bureaucrat(void);
        Bureaucrat(std::string name);
        Bureaucrat(Bureaucrat const &copy);
        ~Bureaucrat(void);

        Bureaucrat &operator=(const Bureaucrat &src);
        std::string   getName(void);
        int getGrade(void);

        void    raiseGrade(void);
        void    deRaiseGrade(void);
        void    setGrade(int const grade);

        class GradeTooHighException: public std::exception
        {
            public:
                    virtual const char *what(void) const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                    virtual const char *what(void) const throw();
        };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat *a);

#endif