[![POV-Ray version](https://img.shields.io/badge/POV--Ray-3.8-blue?style=plastic)](https://www.povray.org/)

[![Latest release](https://badgen.net/github/release/SvenErik1968/Farger.inc)](https://github.com/SvenErik1968/Farger.inc/releases)
[![Open issues](https://badgen.net/github/open-issues//SvenErik1968/Farger.inc)](https://github.com/SvenErik1968/Farger.inc/issues)
![Last commit](https://badgen.net/github/last-commit/SvenErik1968/Farger.inc)
[![License](https://badgen.net/github/license/SvenErik1968/Farger.inc)](https://github.com/SvenErik1968/Farger.inc/blob/master/LICENSE)

# Farger.inc
*Farger* is the plural form of the Norwegian word *farge* that means color.

This is an extended set of POV-Ray include files with, at the moment, **6568** named color definitions. In the master file, [farger.inc](./farger.inc), you can comment out the include-files you don't need.

It is mostly based on the **Wikipedia** list of colors that you can find at: [*Lists of colors*](http://en.wikipedia.org/wiki/List_of_colors) in addition to [*Encycolorpedia*](https://encycolorpedia.com/named).

In addition, there are separate include files for colors from:

- [*Crayola crayon colors*](https://en.wikipedia.org/wiki/List_of_Crayola_crayon_colors)
- [*X11 color names*](https://en.wikipedia.org/wiki/X11_color_names) and [*Web named colors*](https://en.wikipedia.org/wiki/Web_colors)
- [*LEGO™ colors*](http://www.peeron.com/cgi-bin/invcgis/colorguide.cgi)
- [*Xona.com color list*](http://xona.com/misc/colorlist/)
- [*RAL Classic *](https://en.wikipedia.org/wiki/List_of_RAL_colors#Overview)
- [*Aerospace Material Specification Standard 595 (AMS STANDARD 595 COLOR)*](http://www.federalstandardcolor.com/)_(This is an USA government color standard)_.
- *Farger_PC.inc* - This is an extended include file with color definitions from a trademarked and proprietary color space system. It is based on the list of colors found on a webpage that now has disappeared; the owner of that brand/trademark is known for _vigourlysly_ defending it, so I will probably remove this file in a later version.
- [*ColorMine.org - Colors by Name*](http://colormine.org/colors-by-name)

## New in v5.0
A **_large_** include file with currently **27351** named unique colors have been added based on the [meodai/color-names](https://github.com/meodai/color-names) collection. It is not included by default, but you can change a value in [farger.inc](./farger.inc) to include it, the other files will then _not_ be loaded since most of the sources for the other files are also used in the meodai/color-names collection.

## _Tips:_ [*ColorMine* POV-Ray macro library](https://github.com/mjhorvath/ColorMine) ##
Michael Horvath's (mjhorvath) POV-Ray macro library with many macroes to work with and convert colors based on code from ColorMine.org that complements (and partially duplicate) the macros from [`Colors.inc`](https://github.com/POV-Ray/povray/blob/master/distribution/include/colors.inc).
- Included conversion macros:
    - `CLCH2LAB` - `CIE LCH` to `CIE L*a*b*`
    - `CLAB2XYZ` - `CIE L*a*b*` to `CIE 1931 XYZ`
    - `CXYZ2RGB` - `CIE 1931 XYZ` to `RGB` _(Same macro-name as in Colors.inc)_
    - `CLUV2XYZ` - `CIELUV` to `CIE 1931 XYZ`
    - `CHCL2LUV` - `HSL` to `CIE LUV`
    - `CRGB2HEX` - `RGB` vector _(0 to 1)_ to HEX
    - `CDEC2HEX` - Decimal _(0 to 1)_ to HEX
    - `CXYZ2XYY` - `CIE 1931 XYZ` to `CIE xyY`
    - `CXYZ2LAB` - `CIE 1931 XYZ` to `CIE L*a*b*`
    - `CXYY2XYZ` - `CIE xyY` to `CIE 1931 XYZ`
    - `CLAB2LCH` - `CIE L*a*b*` to `CIE LCH`
    - `CLUV2HCL` - `CIELUV` to `HCL`


## Simple documentation
In the [_Documentation_](./Documentation/) folder, you will find a set of HTML-files (one for each of the include-files) that contain a simple table showing the color name, the RGB hex color code, a color sample, and a button that will copy the color name to the clipboard.
