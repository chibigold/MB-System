/*--------------------------------------------------------------------
 *    The MB-system:	mb_coor_scale.c	3.00	1/21/93
 *    $Id: mb_coor_scale.c,v 3.0 1993-04-23 15:45:07 dale Exp $
 *
 *    Copyright (c) 1993 by 
 *    D. W. Caress (caress@lamont.ldgo.columbia.edu)
 *    and D. N. Chayes (dale@lamont.ldgo.columbia.edu)
 *    Lamont-Doherty Earth Observatory
 *    Palisades, NY  10964
 *
 *    See README file for copying and redistribution conditions.
 *--------------------------------------------------------------------*/
/*
 * The function mb_coor_scale.c returns scaling factors
 * to turn longitude and latitude differences into distances in meters.
 * This function is based on code by James Charters (Scripps Institution
 * of Oceanography).
 *
 * Author:	D. W. Caress
 * Date:	January 21, 1993
 * 
 * $Log: not supported by cvs2svn $
 */

/* standard include files */
#include <stdio.h>
#include <math.h>
#include <strings.h>

/* mbio include files */
#include "../../include/mb_status.h"

/* ellipsoid coefficients from World Geodetic System Ellipsoid of 1972 
 * - see Bowditch (H.O. 9 -- American Practical Navigator). */
#define C1 111412.84
#define C2 -93.5
#define C3 0.118
#define C4 111132.92
#define C5 -559.82
#define C6 1.175
#define C7 0.0023

/* degrees to radians conversion */
#define DTR (M_PI/180.)

/*--------------------------------------------------------------------*/
int mb_coor_scale(verbose,latitude,mtodeglon,mtodeglat)
int	verbose;
double	latitude;
double	*mtodeglon;
double	*mtodeglat;
{
  char rcs_id[]="$Id: mb_coor_scale.c,v 3.0 1993-04-23 15:45:07 dale Exp $";
	char	*function_name = "mb_coor_scale";
	int	status;
	double	radlat;

	/* print input debug statements */
	if (verbose >= 2)
		{
		fprintf(stderr,"\ndbg2  MBIO function <%s> called\n",
			function_name);
		fprintf(stderr,"dbg2  Input arguments:\n");
		fprintf(stderr,"dbg2       verbose: %d\n",verbose);
		fprintf(stderr,"dbg2       latitude: %f\n",latitude);
		}

	/* check that the latitude value is sensible */
	if (fabs(latitude) <= 90.0)
		{
		radlat = DTR*latitude;
		*mtodeglon = 1./fabs(C1*cos(radlat) + C2*cos(3*radlat) 
				+ C3*cos(5*radlat));
		*mtodeglat = 1./fabs(C4 + C5*cos(2*radlat) 
				+ C6*cos(4*radlat) + C7*cos(6*radlat));
		status = MB_SUCCESS;
		}

	/* set error flag if needed */
	else
		{
		status = MB_FAILURE;
		}

	/* print output debug statements */
	if (verbose >= 2)
		{
		fprintf(stderr,"\ndbg2  MBIO function <%s> completed\n",
			function_name);
		fprintf(stderr,"dbg2  Return arguments:\n");
		fprintf(stderr,"dbg2       mtodeglon: %g\n",*mtodeglon);
		fprintf(stderr,"dbg2       mtodeglat: %g\n",*mtodeglat);
		fprintf(stderr,"dbg2  Return status:\n");
		fprintf(stderr,"dbg2       status:    %d\n",status);
		}

	/* return status */
	return(status);
}
/*--------------------------------------------------------------------*/
