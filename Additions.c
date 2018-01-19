/******************************************************************************\
fichier : Additions.c
\******************************************************************************/

#include "Additions.h"

int32_t Additionner_int32_int32( int32_t valeur_1, int32_t valeur_2 )
{
    int32_t resultat;
    
    resultat = valeur_1 + valeur_2;
    if( valeur_1 > 0 )
    {
        if( valeur_2 > 0 )
        {
            if( resultat <= 0 )
            {
                resultat = INT32_MAX;
            }
        }
    }
    else
    {
        if( valeur_2 < 0 )
        {
            if( resultat >= 0 )
            {
                resultat = INT32_MIN;
            }
        }
    }
    return  resultat;
}