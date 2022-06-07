#include <conf.h>

#include <kywrd.h>




void io :: ent ( uint8_t i [] )
{
    for ( uint8_t j = Z ; j < SO ( i ) ; j ++ )
        PM ( i [ j ] , I ) ;
}




void io :: ent_pull ( uint8_t i_p [] )
{
    for ( uint8_t j = Z ; j < SO ( i_p ) ; j ++ )
        PM ( i_p [ j ] , IP ) ;
}




void io :: outp ( uint8_t o [] )
{
    for ( uint8_t j = Z ; j < SO ( o ) ; j ++ )
        PM ( o [ j ] , O ) ;
}