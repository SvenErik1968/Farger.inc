// This work is licensed under the Attribution-ShareAlike 4.0 International.
//
//    Persistence of Vision Ray Tracer Include File
//
//    File           : farger.inc
//    Version        : 4.1
//    Created by     : Sven-Erik Andersen
//    Contact        : sven.erik.andersen@gmail.com
//    Created date   : 2014-06-22
//    Last updated   : 2020-07-27
//    Repository     : https://github.com/SvenErik1968/Farger.inc/
//    Description    : Farger means colors in Norwegian.
//
//                     This is an extended include file with, at the moment, 6706 named color definitions.
//
//                     It is mostly based on the Wikipedia list of colors that you can find at:
//                     http://en.wikipedia.org/wiki/List_of_colors
//                     and related pages:
//                     https://en.wikipedia.org/wiki/List_of_Crayola_crayon_colors
//                     https://en.wikipedia.org/wiki/X11_color_names
//                     https://en.wikipedia.org/wiki/Web_colors
//
//                     LEGO™ colors
//                     http://www.peeron.com/cgi-bin/invcgis/colorguide.cgi
//
//                     Encycolorpedia
//                     https://encycolorpedia.com/named
//
//                     Xona.com color list
//                     http://xona.com/misc/colorlist/
//
//                     RAL Classic
//                     https://en.wikipedia.org/wiki/List_of_RAL_colors#Overview
//
//                     Aerospace Material Specification Standard 595 (AMS STANDARD 595 COLOR)
//                     http://www.federalstandardcolor.com/
//
//                     ColorMine named color list
//                     http://colormine.org/colors-by-name
//
//                     Check out the POV-Ray macro library at https://github.com/mjhorvath/ColorMine
//                     with many macroes to work with and convert colors
//                     made by Michael Horvath (mjhorvath) based on code from ColorMine.org
//

#ifndef(farger_Inc_Temp)
    #declare farger_Inc_Temp = version;
    #version 3.7;

    // Where the color definition is the same as in the POV-Ray color.inc include file,
    // the color name will point to the POV-Ray color definition,
    // so we need to make sure that file is included
    #ifndef(Colors_Inc_Temp)
        #include "colors.inc"
    #end

    #ifdef(View_POV_Include_Stack)
        #debug "including farger.inc\n"
    #end

    // Comment out the include files you don't need
    #include "farger_f.inc" // Include this if you want the named colors
    #include "farger_crayola.inc" // Include this if you want the Crayola colors
    #include "farger_html_x11.inc" // Include this if you want the HTML and X11 named colors
    #include "farger_lego.inc" // Include this if you want the Lego colors
    #include "farger_Xona.inc" // Include this if you want the Xona.com colors
    #include "farger_ral_classic.inc" // Include this if you want the RAL Classic colors
    #include "farger_ams595.inc" // Include this if you want the AMS Standard 595 colors
    #include "Farger_PC.inc" // Include this if you want the Pant... colors
    #include "farger_ColorMine.inc" // Include this if you want the ColorMine colors

    #version farger_Inc_Temp;
#end
