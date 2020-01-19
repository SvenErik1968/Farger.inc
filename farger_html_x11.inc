// This work is licensed under the Attribution-ShareAlike 4.0 International.
//
//    Persistence of Vision Ray Tracer Include File
//
//    File           : farger_html_x11.inc
//    Version        : 3.0
//    Created by     : Sven-Erik Andersen
//    Contact        : sven.erik.andersen@gmail.com
//    Created date   : 2014-06-22
//    Last updated   : 2019-10-26
//    Description    : Farger means colors in Norwegian.
//                     This is an extended include file with, at the moment, 1701 named color definitions.
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
//

#ifndef(farger_html_x11_Inc_Temp)
#declare farger_html_x11_Inc_Temp = version;
#version 3.7;

// Where the color definition is the same as in the POV-Ray color.inc include file,
// the color name will point to the POV-Ray color definition,
// so we need to make sure that file is included
#ifndef(Colors_Inc_Temp)
    #include "colors.inc"
#end

#ifdef(View_POV_Include_Stack)
    #debug "farger_html_x11.inc\n"
#end


// Named HTML color names
#declare HTML_Green = rgb <0, 0.501960784313725, 0>; // HEX #008000
#declare HTML_Maroon = rgb <0.501960784313725, 0, 0>; // HEX #800000
#declare HTML_Navy = rgb <0, 0, 0.501960784313725>; // HEX #000080
#declare HTML_Olive = rgb <0.501960784313725, 0.501960784313725, 0>; // HEX #808000
#declare HTML_Purple = rgb <0.501960784313725, 0, 0.501960784313725>; // HEX #800080
#declare HTML_Teal = rgb <0, 0.501960784313725, 0.501960784313725>; // HEX #008080


// Alternative HTML color names
#declare HTML_Aqua = Cyan   ; // HEX #00FFFF
#declare HTML_Black = Black  ; // HEX #000000
#declare HTML_Blue = Blue   ; // HEX #0000FF
#declare HTML_Fuchsia = Magenta; // HEX #FF00FF
#declare HTML_Gray = Gray50; // HEX #808080
#declare HTML_Lime = Green  ; // HEX #00FF00
#declare HTML_Red = Red    ; // HEX #FF0000
#declare HTML_Silver = Gray; // HEX #C0C0C0
#declare HTML_White = White  ; // HEX #FFFFFF
#declare HTML_Yellow = Yellow ; // HEX #FFFF00


// X11 color names
#declare X11_Alice_Blue = rgb <0.941176470588235, 0.972549019607843, 1>; // HEX #F0F8FF
#declare X11_Antique_White = rgb <0.980392156862745, 0.92156862745098, 0.843137254901961>; // HEX #FAEBD7
#declare X11_Aquamarine = rgb <0.498039215686275, 1, 0.831372549019608>; // HEX #7FFFD4
#declare X11_Azure = rgb <0.941176470588235, 1, 1>; // HEX #F0FFFF
#declare X11_Beige = rgb <0.96078431372549, 0.96078431372549, 0.862745098039216>; // HEX #F5F5DC
#declare X11_Bisque = rgb <1, 0.894117647058824, 0.768627450980392>; // HEX #FFE4C4
#declare X11_Blanched_Almond = rgb <1, 0.92156862745098, 0.803921568627451>; // HEX #FFEBCD
#declare X11_Blue_Violet = rgb <0.541176470588235, 0.168627450980392, 0.886274509803922>; // HEX #8A2BE2
#declare X11_Burlywood = rgb <0.870588235294118, 0.72156862745098, 0.529411764705882>; // HEX #DEB887
#declare X11_Cadet_Blue = rgb <0.372549019607843, 0.619607843137255, 0.627450980392157>; // HEX #5F9EA0
#declare X11_Chocolate = rgb <0.823529411764706, 0.411764705882353, 0.117647058823529>; // HEX #D2691E
#declare X11_Coral = rgb <1, 0.498039215686275, 0.313725490196078>; // HEX #FF7F50
#declare X11_Cornflower_Blue = rgb <0.392156862745098, 0.584313725490196, 0.929411764705882>; // HEX #6495ED
#declare X11_Cornsilk = rgb <1, 0.972549019607843, 0.862745098039216>; // HEX #FFF8DC
#declare X11_Crimson = rgb <0.862745098039216, 0.0784313725490196, 0.235294117647059>; // HEX #DC143C
#declare X11_Dark_Blue = rgb <0, 0, 0.545098039215686>; // HEX #00008B
#declare X11_Dark_Cyan = rgb <0, 0.545098039215686, 0.545098039215686>; // HEX #008B8B
#declare X11_Dark_Goldenrod = rgb <0.72156862745098, 0.525490196078431, 0.0431372549019608>; // HEX #B8860B
#declare X11_Dark_Gray = rgb <0.662745098039216, 0.662745098039216, 0.662745098039216>; // HEX #A9A9A9
#declare X11_Dark_Green = rgb <0, 0.392156862745098, 0>; // HEX #006400
#declare X11_Dark_Khaki = rgb <0.741176470588235, 0.717647058823529, 0.419607843137255>; // HEX #BDB76B
#declare X11_Dark_Magenta = rgb <0.545098039215686, 0, 0.545098039215686>; // HEX #8B008B
#declare X11_Dark_Olive_Green = rgb <0.333333333333333, 0.419607843137255, 0.184313725490196>; // HEX #556B2F
#declare X11_Dark_Orange = rgb <1, 0.549019607843137, 0>; // HEX #FF8C00
#declare X11_Dark_Red = rgb <0.545098039215686, 0, 0>; // HEX #8B0000
#declare X11_Dark_Salmon = rgb <0.913725490196078, 0.588235294117647, 0.47843137254902>; // HEX #E9967A
#declare X11_Dark_Slate_Blue = rgb <0.282352941176471, 0.23921568627451, 0.545098039215686>; // HEX #483D8B
#declare X11_Dark_Turquoise = rgb <0, 0.807843137254902, 0.819607843137255>; // HEX #00CED1
#declare X11_Dark_Violet = rgb <0.580392156862745, 0, 0.827450980392157>; // HEX #9400D3
#declare X11_Deep_Pink = rgb <1, 0.0784313725490196, 0.576470588235294>; // HEX #FF1493
#declare X11_Deep_Sky_Blue = rgb <0, 0.749019607843137, 1>; // HEX #00BFFF
#declare X11_Dim_Gray = rgb <0.411764705882353, 0.411764705882353, 0.411764705882353>; // HEX #696969
#declare X11_Dodger_Blue = rgb <0.117647058823529, 0.564705882352941, 1>; // HEX #1E90FF
#declare X11_Firebrick = rgb <0.698039215686274, 0.133333333333333, 0.133333333333333>; // HEX #B22222
#declare X11_Floral_White = rgb <1, 0.980392156862745, 0.941176470588235>; // HEX #FFFAF0
#declare X11_Forest_Green = rgb <0.133333333333333, 0.545098039215686, 0.133333333333333>; // HEX #228B22
#declare X11_Gainsboro = rgb <0.862745098039216, 0.862745098039216, 0.862745098039216>; // HEX #DCDCDC
#declare X11_Ghost_White = rgb <0.972549019607843, 0.972549019607843, 1>; // HEX #F8F8FF
#declare X11_Gold = rgb <1, 0.843137254901961, 0>; // HEX #FFD700
#declare X11_Goldenrod = rgb <0.854901960784314, 0.647058823529412, 0.125490196078431>; // HEX #DAA520
#declare X11_Gray = rgb <0.745098039215686, 0.745098039215686, 0.745098039215686>; // HEX #BEBEBE
#declare X11_Green_Yellow = rgb <0.67843137254902, 1, 0.184313725490196>; // HEX #ADFF2F
#declare X11_Honeydew = rgb <0.941176470588235, 1, 0.941176470588235>; // HEX #F0FFF0
#declare X11_Hot_Pink = rgb <1, 0.411764705882353, 0.705882352941177>; // HEX #FF69B4
#declare X11_Indian_Red = rgb <0.803921568627451, 0.36078431372549, 0.36078431372549>; // HEX #CD5C5C
#declare X11_Indigo = rgb <0.294117647058824, 0, 0.509803921568627>; // HEX #4B0082
#declare X11_Ivory = rgb <1, 1, 0.941176470588235>; // HEX #FFFFF0
#declare X11_Khaki = rgb <0.941176470588235, 0.901960784313726, 0.549019607843137>; // HEX #F0E68C
#declare X11_Lavender = rgb <0.901960784313726, 0.901960784313726, 0.980392156862745>; // HEX #E6E6FA
#declare X11_Lavender_Blush = rgb <1, 0.941176470588235, 0.96078431372549>; // HEX #FFF0F5
#declare X11_Lawn_Green = rgb <0.486274509803922, 0.988235294117647, 0>; // HEX #7CFC00
#declare X11_Lemon_Chiffon = rgb <1, 0.980392156862745, 0.803921568627451>; // HEX #FFFACD
#declare X11_Light_Blue = rgb <0.67843137254902, 0.847058823529412, 0.901960784313726>; // HEX #ADD8E6
#declare X11_Light_Coral = rgb <0.941176470588235, 0.501960784313725, 0.501960784313725>; // HEX #F08080
#declare X11_Light_Cyan = rgb <0.87843137254902, 1, 1>; // HEX #E0FFFF
#declare X11_Light_Goldenrod = rgb <0.980392156862745, 0.980392156862745, 0.823529411764706>; // HEX #FAFAD2
#declare X11_Light_Gray = rgb <0.827450980392157, 0.827450980392157, 0.827450980392157>; // HEX #D3D3D3
#declare X11_Light_Green = rgb <0.564705882352941, 0.933333333333333, 0.564705882352941>; // HEX #90EE90
#declare X11_Light_Pink = rgb <1, 0.713725490196078, 0.756862745098039>; // HEX #FFB6C1
#declare X11_Light_Salmon = rgb <1, 0.627450980392157, 0.47843137254902>; // HEX #FFA07A
#declare X11_Light_Sea_Green = rgb <0.125490196078431, 0.698039215686274, 0.666666666666667>; // HEX #20B2AA
#declare X11_Light_Sky_Blue = rgb <0.529411764705882, 0.807843137254902, 0.980392156862745>; // HEX #87CEFA
#declare X11_Light_Slate_Gray = rgb <0.466666666666667, 0.533333333333333, 0.6>; // HEX #778899
#declare X11_Light_Steel_Blue = rgb <0.690196078431373, 0.768627450980392, 0.870588235294118>; // HEX #B0C4DE
#declare X11_Light_Yellow = rgb <1, 1, 0.87843137254902>; // HEX #FFFFE0
#declare X11_Lime_Green = rgb <0.196078431372549, 0.803921568627451, 0.196078431372549>; // HEX #32CD32
#declare X11_Linen = rgb <0.980392156862745, 0.941176470588235, 0.901960784313726>; // HEX #FAF0E6
#declare X11_Maroon = rgb <0.690196078431373, 0.188235294117647, 0.376470588235294>; // HEX #B03060
#declare X11_Medium_Aquamarine = rgb <0.4, 0.803921568627451, 0.666666666666667>; // HEX #66CDAA
#declare X11_Medium_Blue = rgb <0, 0, 0.803921568627451>; // HEX #0000CD
#declare X11_Medium_Orchid = rgb <0.729411764705882, 0.333333333333333, 0.827450980392157>; // HEX #BA55D3
#declare X11_Medium_Sea_Green = rgb <0.235294117647059, 0.701960784313725, 0.443137254901961>; // HEX #3CB371
#declare X11_Medium_Slate_Blue = rgb <0.482352941176471, 0.407843137254902, 0.933333333333333>; // HEX #7B68EE
#declare X11_Medium_Spring_Green = rgb <0, 0.980392156862745, 0.603921568627451>; // HEX #00FA9A
#declare X11_Medium_Turquoise = rgb <0.282352941176471, 0.819607843137255, 0.8>; // HEX #48D1CC
#declare X11_Medium_Violet_Red = rgb <0.780392156862745, 0.0823529411764706, 0.52156862745098>; // HEX #C71585
#declare X11_Midnight_Blue = rgb <0.0980392156862745, 0.0980392156862745, 0.43921568627451>; // HEX #191970
#declare X11_Mint_Cream = rgb <0.96078431372549, 1, 0.980392156862745>; // HEX #F5FFFA
#declare X11_Misty_Rose = rgb <1, 0.894117647058824, 0.882352941176471>; // HEX #FFE4E1
#declare X11_Moccasin = rgb <1, 0.894117647058824, 0.709803921568627>; // HEX #FFE4B5
#declare X11_Navajo_White = rgb <1, 0.870588235294118, 0.67843137254902>; // HEX #FFDEAD
#declare X11_Navy_Blue = rgb <0, 0, 0.501960784313725>; // HEX #000080
#declare X11_Old_Lace = rgb <0.992156862745098, 0.96078431372549, 0.901960784313726>; // HEX #FDF5E6
#declare X11_Olive = rgb <0.501960784313725, 0.501960784313725, 0>; // HEX #808000
#declare X11_Orange = rgb <1, 0.647058823529412, 0>; // HEX #FFA500
#declare X11_Orange_Red = rgb <1, 0.270588235294118, 0>; // HEX #FF4500
#declare X11_Orchid = rgb <0.854901960784314, 0.43921568627451, 0.83921568627451>; // HEX #DA70D6
#declare X11_Pale_Goldenrod = rgb <0.933333333333333, 0.909803921568627, 0.666666666666667>; // HEX #EEE8AA
#declare X11_Pale_Green = rgb <0.596078431372549, 0.984313725490196, 0.596078431372549>; // HEX #98FB98
#declare X11_Pale_Turquoise = rgb <0.686274509803922, 0.933333333333333, 0.933333333333333>; // HEX #AFEEEE
#declare X11_Papaya_Whip = rgb <1, 0.937254901960784, 0.835294117647059>; // HEX #FFEFD5
#declare X11_Peach_Puff = rgb <1, 0.854901960784314, 0.725490196078431>; // HEX #FFDAB9
#declare X11_Peru = rgb <0.803921568627451, 0.52156862745098, 0.247058823529412>; // HEX #CD853F
#declare X11_Pink = rgb <1, 0.752941176470588, 0.796078431372549>; // HEX #FFC0CB
#declare X11_Plum = rgb <0.866666666666667, 0.627450980392157, 0.866666666666667>; // HEX #DDA0DD
#declare X11_Powder_Blue = rgb <0.690196078431373, 0.87843137254902, 0.901960784313726>; // HEX #B0E0E6
#declare X11_Purple = rgb <0.627450980392157, 0.125490196078431, 0.941176470588235>; // HEX #A020F0
#declare X11_Rebecca_Purple = rgb <0.4, 0.2, 0.6>; // HEX #663399
#declare X11_Royal_Blue = rgb <0.254901960784314, 0.411764705882353, 0.882352941176471>; // HEX #4169E1
#declare X11_Saddle_Brown = rgb <0.545098039215686, 0.270588235294118, 0.0745098039215686>; // HEX #8B4513
#declare X11_Salmon = rgb <0.980392156862745, 0.501960784313725, 0.447058823529412>; // HEX #FA8072
#declare X11_Sandy_Brown = rgb <0.956862745098039, 0.643137254901961, 0.376470588235294>; // HEX #F4A460
#declare X11_Sea_Green = rgb <0.180392156862745, 0.545098039215686, 0.341176470588235>; // HEX #2E8B57
#declare X11_Seashell = rgb <1, 0.96078431372549, 0.933333333333333>; // HEX #FFF5EE
#declare X11_Sienna = rgb <0.627450980392157, 0.32156862745098, 0.176470588235294>; // HEX #A0522D
#declare X11_Sky_Blue = rgb <0.529411764705882, 0.807843137254902, 0.92156862745098>; // HEX #87CEEB
#declare X11_Slate_Blue = rgb <0.415686274509804, 0.352941176470588, 0.803921568627451>; // HEX #6A5ACD
#declare X11_Slate_Gray = rgb <0.43921568627451, 0.501960784313725, 0.564705882352941>; // HEX #708090
#declare X11_Snow = rgb <1, 0.980392156862745, 0.980392156862745>; // HEX #FFFAFA
#declare X11_Steel_Blue = rgb <0.274509803921569, 0.509803921568627, 0.705882352941177>; // HEX #4682B4
#declare X11_Tan = rgb <0.823529411764706, 0.705882352941177, 0.549019607843137>; // HEX #D2B48C
#declare X11_Teal = rgb <0, 0.501960784313725, 0.501960784313725>; // HEX #008080
#declare X11_Tomato = rgb <1, 0.388235294117647, 0.27843137254902>; // HEX #FF6347
#declare X11_Turquoise = rgb <0.250980392156863, 0.87843137254902, 0.815686274509804>; // HEX #40E0D0
#declare X11_Violet = rgb <0.933333333333333, 0.509803921568627, 0.933333333333333>; // HEX #EE82EE
#declare X11_Web_Green = rgb <0, 0.501960784313725, 0>; // HEX #008000
#declare X11_Web_Maroon = rgb <0.501960784313725, 0, 0>; // HEX #800000
#declare X11_Web_Purple = rgb <0.501960784313725, 0, 0.501960784313725>; // HEX #800080
#declare X11_Wheat = rgb <0.96078431372549, 0.870588235294118, 0.701960784313725>; // HEX #F5DEB3
#declare X11_White_Smoke = rgb <0.96078431372549, 0.96078431372549, 0.96078431372549>; // HEX #F5F5F5
#declare X11_Yellow_Green = rgb <0.603921568627451, 0.803921568627451, 0.196078431372549>; // HEX #9ACD32


// Alternative X11 color names
#declare X11_Aqua = Cyan   ; // HEX #00FFFF
#declare X11_Black = Black  ; // HEX #000000
#declare X11_Blue = Blue   ; // HEX #0000FF
#declare X11_Brown = Brown; // HEX #A52A2A
#declare X11_Chartreuse = MediumSpringGreen; // HEX #7FFF00
#declare X11_Cyan = Cyan   ; // HEX #00FFFF
#declare X11_Dark_Grey = X11_Dark_Gray; // HEX #A9A9A9
#declare X11_Dark_Orchid = DarkOrchid; // HEX #9932CC
#declare X11_Dark_Sea_Green = PaleGreen; // HEX #8FBC8F
#declare X11_Dark_Slate_Gray = DarkSlateGray; // HEX #2F4F4F
#declare X11_Dark_Slate_Grey = DarkSlateGray; // HEX #2F4F4F
#declare X11_Dim_Grey = X11_Dim_Gray; // HEX #696969
#declare X11_Fuchsia = Magenta; // HEX #FF00FF
#declare X11_Green = Green  ; // HEX #00FF00
#declare X11_Grey = X11_Gray; // HEX #BEBEBE
#declare X11_Light_Grey = X11_Light_Gray; // HEX #D3D3D3
#declare X11_Light_Slate_Grey = X11_Light_Slate_Gray; // HEX #778899
#declare X11_Lime = Green  ; // HEX #00FF00
#declare X11_Magenta = Magenta; // HEX #FF00FF
#declare X11_Medium_Purple = MediumOrchid; // HEX #9370DB
#declare X11_Navy = X11_Navy_Blue; // HEX #000080
#declare X11_Olive_Drab = MediumForestGreen; // HEX #6B8E23
#declare X11_Pale_Violet_Red = MediumVioletRed; // HEX #DB7093
#declare X11_Red = Red    ; // HEX #FF0000
#declare X11_Rosy_Brown = Pink; // HEX #BC8F8F
#declare X11_Silver = Gray; // HEX #C0C0C0
#declare X11_Slate_Grey = X11_Slate_Gray; // HEX #708090
#declare X11_Spring_Green = SpringGreen; // HEX #00FF7F
#declare X11_Thistle = Thistle; // HEX #D8BFD8
#declare X11_Web_Gray = Gray50; // HEX #808080
#declare X11_Web_Grey = Gray50; // HEX #808080
#declare X11_White = White  ; // HEX #FFFFFF
#declare X11_Yellow = Yellow ; // HEX #FFFF00


#version farger_html_x11_Inc_Temp;
#end
