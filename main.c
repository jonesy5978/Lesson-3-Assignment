/**************************************************************************************
*                                                                                     *
*    This program converts a user supplied measurement in inches into feet, yards,    *
*    centimeters, and meters.                                                         *
*                                                                                     *
*	 									                                              *
*   Name: Jonathan Jones							                                  *
*   Date: 9/12/2018								                                      *
**************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//Defined Constants.
#define INCHES_IN_FOOT 0.08333333;
#define INCHES_IN_YARD 0.027778;
#define INCHES_IN_CENTIMETER 2.54;
#define INCHES_IN_METER 0.0254;

int main()
{
    //Local Declarations.
    int distanceInches; //Used int because we only want a whole number from the user.
    float feet; //Used floats to get a more accurate measurement.
    float yards;
    float centimeters;
    float meters;

    printf("This program converts inches (whole numbers only) to feet, yards, centimeters, and meters.\n\n"); //Outputs what program does.
    printf("Please enter a distance in inches: "); //Prompt user to enter inches.
    scanf("%d", &distanceInches); //Saves user input to distanceInches.

    //Conversion Formula. All formulas was tested against known good data.
    feet = distanceInches * INCHES_IN_FOOT;
    yards = distanceInches * INCHES_IN_YARD;
    centimeters = distanceInches * INCHES_IN_CENTIMETER;
    meters = distanceInches * INCHES_IN_METER;

    printf("\n%d inches is equivalent to %.2f feet, %.2f yards, %.2f centimeters, and %.2f meters.", distanceInches, feet, yards, centimeters, meters); //Outputs results from Conversion Formula and limits float values to the Hundredths position.

    return 0;
}
