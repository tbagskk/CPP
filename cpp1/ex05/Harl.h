#ifndef HARL_CPP

# define HARL_CPP

#include <iostream>
#include <string>
#include <stdio.h>

class Harl
{
    private :

        void    debug( void) ;
        void    info( void );
        void    warning( void );
        void    error( void );

    public :

        Harl(void);
        ~Harl(void);
        void    complain( std::string level );
};

#endif