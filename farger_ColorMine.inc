// This work is licensed under the Attribution-ShareAlike 4.0 International.
//
//    Persistence of Vision Ray Tracer Include File
//
//    File           : farger_ColorMine.inc
//    Version        : 4.1
//    Created by     : Sven-Erik Andersen
//    Contact        : sven.erik.andersen@gmail.com
//    Created date   : 2014-06-22
//    Last updated   : 2020-07-27
//    Repository     : https://github.com/SvenErik1968/Farger.inc/
//    Description    : Farger means colors in Norwegian.
//
//

#ifndef(farger_colormine_Inc_Temp)
    #declare farger_colormine_Inc_Temp = version;
    #version 3.7;

    // Where the color definition is the same as in the POV-Ray color.inc include file,
    // the color name will point to the POV-Ray color definition,
    // so we need to make sure that file is included
    #ifndef(Colors_Inc_Temp)
        #include "colors.inc"
    #end

    #ifdef(View_POV_Include_Stack)
        #debug "including farger_ColorMine.inc\n"
    #end

    // Named colors from ColorMine.org
    #declare ColorMine_Alice_Blue = rgb <0.941176470588235, 0.972549019607843, 1>; // HEX #F0F8FF
    #declare ColorMine_Antique_White = rgb <0.980392156862745, 0.92156862745098, 0.843137254901961>; // HEX #FAEBD7
    #declare ColorMine_Aquamarine = rgb <0.498039215686275, 1, 0.831372549019608>; // HEX #7FFFD4
    #declare ColorMine_Azure = rgb <0.941176470588235, 1, 1>; // HEX #F0FFFF
    #declare ColorMine_Beige = rgb <0.96078431372549, 0.96078431372549, 0.862745098039216>; // HEX #F5F5DC
    #declare ColorMine_Bisque = rgb <1, 0.894117647058824, 0.768627450980392>; // HEX #FFE4C4
    #declare ColorMine_Blanched_Almond = rgb <1, 0.92156862745098, 0.803921568627451>; // HEX #FFEBCD
    #declare ColorMine_Blue_Violet = rgb <0.541176470588235, 0.168627450980392, 0.886274509803922>; // HEX #8A2BE2
    #declare ColorMine_Burly_Wood = rgb <0.870588235294118, 0.72156862745098, 0.529411764705882>; // HEX #DEB887
    #declare ColorMine_Cadet_Blue = rgb <0.372549019607843, 0.619607843137255, 0.627450980392157>; // HEX #5F9EA0
    #declare ColorMine_Chocolate = rgb <0.823529411764706, 0.411764705882353, 0.117647058823529>; // HEX #D2691E
    #declare ColorMine_Coral = rgb <1, 0.498039215686275, 0.313725490196078>; // HEX #FF7F50
    #declare ColorMine_Cornflower_Blue = rgb <0.392156862745098, 0.584313725490196, 0.929411764705882>; // HEX #6495ED
    #declare ColorMine_Cornsilk = rgb <1, 0.972549019607843, 0.862745098039216>; // HEX #FFF8DC
    #declare ColorMine_Crimson = rgb <0.862745098039216, 0.0784313725490196, 0.235294117647059>; // HEX #DC143C
    #declare ColorMine_Dark_Blue = rgb <0, 0, 0.545098039215686>; // HEX #00008B
    #declare ColorMine_Dark_Cyan = rgb <0, 0.545098039215686, 0.545098039215686>; // HEX #008B8B
    #declare ColorMine_Dark_Goldenrod = rgb <0.72156862745098, 0.525490196078431, 0.0431372549019608>; // HEX #B8860B
    #declare ColorMine_Dark_Gray = rgb <0.662745098039216, 0.662745098039216, 0.662745098039216>; // HEX #A9A9A9
    #declare ColorMine_Dark_Green = rgb <0, 0.392156862745098, 0>; // HEX #006400
    #declare ColorMine_Dark_Khaki = rgb <0.741176470588235, 0.717647058823529, 0.419607843137255>; // HEX #BDB76B
    #declare ColorMine_Dark_Magenta = rgb <0.545098039215686, 0, 0.545098039215686>; // HEX #8B008B
    #declare ColorMine_Dark_Olive_Green = rgb <0.333333333333333, 0.419607843137255, 0.184313725490196>; // HEX #556B2F
    #declare ColorMine_Dark_Orange = rgb <1, 0.549019607843137, 0>; // HEX #FF8C00
    #declare ColorMine_Dark_Red = rgb <0.545098039215686, 0, 0>; // HEX #8B0000
    #declare ColorMine_Dark_Salmon = rgb <0.913725490196078, 0.588235294117647, 0.47843137254902>; // HEX #E9967A
    #declare ColorMine_Dark_Sea_Green = rgb <0.56078431372549, 0.737254901960784, 0.545098039215686>; // HEX #8FBC8B
    #declare ColorMine_Dark_Slate_Blue = rgb <0.282352941176471, 0.23921568627451, 0.545098039215686>; // HEX #483D8B
    #declare ColorMine_Dark_Turquoise = rgb <0, 0.807843137254902, 0.819607843137255>; // HEX #00CED1
    #declare ColorMine_Dark_Violet = rgb <0.580392156862745, 0, 0.827450980392157>; // HEX #9400D3
    #declare ColorMine_Deep_Pink = rgb <1, 0.0784313725490196, 0.576470588235294>; // HEX #FF1493
    #declare ColorMine_Deep_Sky_Blue = rgb <0, 0.749019607843137, 1>; // HEX #00BFFF
    #declare ColorMine_Dim_Gray = rgb <0.411764705882353, 0.411764705882353, 0.411764705882353>; // HEX #696969
    #declare ColorMine_Dodger_Blue = rgb <0.117647058823529, 0.564705882352941, 1>; // HEX #1E90FF
    #declare ColorMine_Firebrick = rgb <0.698039215686274, 0.133333333333333, 0.133333333333333>; // HEX #B22222
    #declare ColorMine_Floral_White = rgb <1, 0.980392156862745, 0.941176470588235>; // HEX #FFFAF0
    #declare ColorMine_Forest_Green = rgb <0.133333333333333, 0.545098039215686, 0.133333333333333>; // HEX #228B22
    #declare ColorMine_Gainsboro = rgb <0.862745098039216, 0.862745098039216, 0.862745098039216>; // HEX #DCDCDC
    #declare ColorMine_Ghost_White = rgb <0.972549019607843, 0.972549019607843, 1>; // HEX #F8F8FF
    #declare ColorMine_Gold = rgb <1, 0.843137254901961, 0>; // HEX #FFD700
    #declare ColorMine_Goldenrod = rgb <0.854901960784314, 0.647058823529412, 0.125490196078431>; // HEX #DAA520
    #declare ColorMine_Green = rgb <0, 0.501960784313725, 0>; // HEX #008000
    #declare ColorMine_Green_Yellow = rgb <0.67843137254902, 1, 0.184313725490196>; // HEX #ADFF2F
    #declare ColorMine_Honeydew = rgb <0.941176470588235, 1, 0.941176470588235>; // HEX #F0FFF0
    #declare ColorMine_Hot_Pink = rgb <1, 0.411764705882353, 0.705882352941177>; // HEX #FF69B4
    #declare ColorMine_Indian_Red = rgb <0.803921568627451, 0.36078431372549, 0.36078431372549>; // HEX #CD5C5C
    #declare ColorMine_Indigo = rgb <0.294117647058824, 0, 0.509803921568627>; // HEX #4B0082
    #declare ColorMine_Ivory = rgb <1, 1, 0.941176470588235>; // HEX #FFFFF0
    #declare ColorMine_Khaki = rgb <0.941176470588235, 0.901960784313726, 0.549019607843137>; // HEX #F0E68C
    #declare ColorMine_Lavender = rgb <0.901960784313726, 0.901960784313726, 0.980392156862745>; // HEX #E6E6FA
    #declare ColorMine_Lavender_Blush = rgb <1, 0.941176470588235, 0.96078431372549>; // HEX #FFF0F5
    #declare ColorMine_Lawn_Green = rgb <0.486274509803922, 0.988235294117647, 0>; // HEX #7CFC00
    #declare ColorMine_Lemon_Chiffon = rgb <1, 0.980392156862745, 0.803921568627451>; // HEX #FFFACD
    #declare ColorMine_Light_Blue = rgb <0.67843137254902, 0.847058823529412, 0.901960784313726>; // HEX #ADD8E6
    #declare ColorMine_Light_Coral = rgb <0.941176470588235, 0.501960784313725, 0.501960784313725>; // HEX #F08080
    #declare ColorMine_Light_Cyan = rgb <0.87843137254902, 1, 1>; // HEX #E0FFFF
    #declare ColorMine_Light_Goldenrod_Yellow = rgb <0.980392156862745, 0.980392156862745, 0.823529411764706>; // HEX #FAFAD2
    #declare ColorMine_Light_Gray = rgb <0.827450980392157, 0.827450980392157, 0.827450980392157>; // HEX #D3D3D3
    #declare ColorMine_Light_Green = rgb <0.564705882352941, 0.933333333333333, 0.564705882352941>; // HEX #90EE90
    #declare ColorMine_Light_Pink = rgb <1, 0.713725490196078, 0.756862745098039>; // HEX #FFB6C1
    #declare ColorMine_Light_Salmon = rgb <1, 0.627450980392157, 0.47843137254902>; // HEX #FFA07A
    #declare ColorMine_Light_Sea_Green = rgb <0.125490196078431, 0.698039215686274, 0.666666666666667>; // HEX #20B2AA
    #declare ColorMine_Light_Sky_Blue = rgb <0.529411764705882, 0.807843137254902, 0.980392156862745>; // HEX #87CEFA
    #declare ColorMine_Light_Slate_Gray = rgb <0.466666666666667, 0.533333333333333, 0.6>; // HEX #778899
    #declare ColorMine_Light_Steel_Blue = rgb <0.690196078431373, 0.768627450980392, 0.870588235294118>; // HEX #B0C4DE
    #declare ColorMine_Light_Yellow = rgb <1, 1, 0.87843137254902>; // HEX #FFFFE0
    #declare ColorMine_Lime_Green = rgb <0.196078431372549, 0.803921568627451, 0.196078431372549>; // HEX #32CD32
    #declare ColorMine_Linen = rgb <0.980392156862745, 0.941176470588235, 0.901960784313726>; // HEX #FAF0E6
    #declare ColorMine_Maroon = rgb <0.501960784313725, 0, 0>; // HEX #800000
    #declare ColorMine_Medium_Aquamarine = rgb <0.4, 0.803921568627451, 0.666666666666667>; // HEX #66CDAA
    #declare ColorMine_Medium_Blue = rgb <0, 0, 0.803921568627451>; // HEX #0000CD
    #declare ColorMine_Medium_Orchid = rgb <0.729411764705882, 0.333333333333333, 0.827450980392157>; // HEX #BA55D3
    #declare ColorMine_Medium_Sea_Green = rgb <0.235294117647059, 0.701960784313725, 0.443137254901961>; // HEX #3CB371
    #declare ColorMine_Medium_Slate_Blue = rgb <0.482352941176471, 0.407843137254902, 0.933333333333333>; // HEX #7B68EE
    #declare ColorMine_Medium_Spring_Green = rgb <0, 0.980392156862745, 0.603921568627451>; // HEX #00FA9A
    #declare ColorMine_Medium_Turquoise = rgb <0.282352941176471, 0.819607843137255, 0.8>; // HEX #48D1CC
    #declare ColorMine_Medium_Violet_Red = rgb <0.780392156862745, 0.0823529411764706, 0.52156862745098>; // HEX #C71585
    #declare ColorMine_Midnight_Blue = rgb <0.0980392156862745, 0.0980392156862745, 0.43921568627451>; // HEX #191970
    #declare ColorMine_Mint_Cream = rgb <0.96078431372549, 1, 0.980392156862745>; // HEX #F5FFFA
    #declare ColorMine_Misty_Rose = rgb <1, 0.894117647058824, 0.882352941176471>; // HEX #FFE4E1
    #declare ColorMine_Moccasin = rgb <1, 0.894117647058824, 0.709803921568627>; // HEX #FFE4B5
    #declare ColorMine_Navajo_White = rgb <1, 0.870588235294118, 0.67843137254902>; // HEX #FFDEAD
    #declare ColorMine_Navy = rgb <0, 0, 0.501960784313725>; // HEX #000080
    #declare ColorMine_Old_Lace = rgb <0.992156862745098, 0.96078431372549, 0.901960784313726>; // HEX #FDF5E6
    #declare ColorMine_Olive = rgb <0.501960784313725, 0.501960784313725, 0>; // HEX #808000
    #declare ColorMine_Orange = rgb <1, 0.647058823529412, 0>; // HEX #FFA500
    #declare ColorMine_Orange_Red = rgb <1, 0.270588235294118, 0>; // HEX #FF4500
    #declare ColorMine_Orchid = rgb <0.854901960784314, 0.43921568627451, 0.83921568627451>; // HEX #DA70D6
    #declare ColorMine_Pale_Goldenrod = rgb <0.933333333333333, 0.909803921568627, 0.666666666666667>; // HEX #EEE8AA
    #declare ColorMine_Pale_Green = rgb <0.596078431372549, 0.984313725490196, 0.596078431372549>; // HEX #98FB98
    #declare ColorMine_Pale_Turquoise = rgb <0.686274509803922, 0.933333333333333, 0.933333333333333>; // HEX #AFEEEE
    #declare ColorMine_Papaya_Whip = rgb <1, 0.937254901960784, 0.835294117647059>; // HEX #FFEFD5
    #declare ColorMine_Peach_Puff = rgb <1, 0.854901960784314, 0.725490196078431>; // HEX #FFDAB9
    #declare ColorMine_Peru = rgb <0.803921568627451, 0.52156862745098, 0.247058823529412>; // HEX #CD853F
    #declare ColorMine_Pink = rgb <1, 0.752941176470588, 0.796078431372549>; // HEX #FFC0CB
    #declare ColorMine_Plum = rgb <0.866666666666667, 0.627450980392157, 0.866666666666667>; // HEX #DDA0DD
    #declare ColorMine_Powder_Blue = rgb <0.690196078431373, 0.87843137254902, 0.901960784313726>; // HEX #B0E0E6
    #declare ColorMine_Purple = rgb <0.501960784313725, 0, 0.501960784313725>; // HEX #800080
    #declare ColorMine_Royal_Blue = rgb <0.254901960784314, 0.411764705882353, 0.882352941176471>; // HEX #4169E1
    #declare ColorMine_Saddle_Brown = rgb <0.545098039215686, 0.270588235294118, 0.0745098039215686>; // HEX #8B4513
    #declare ColorMine_Salmon = rgb <0.980392156862745, 0.501960784313725, 0.447058823529412>; // HEX #FA8072
    #declare ColorMine_Sandy_Brown = rgb <0.956862745098039, 0.643137254901961, 0.376470588235294>; // HEX #F4A460
    #declare ColorMine_Sea_Green = rgb <0.180392156862745, 0.545098039215686, 0.341176470588235>; // HEX #2E8B57
    #declare ColorMine_Sea_Shell = rgb <1, 0.96078431372549, 0.933333333333333>; // HEX #FFF5EE
    #declare ColorMine_Sienna = rgb <0.627450980392157, 0.32156862745098, 0.176470588235294>; // HEX #A0522D
    #declare ColorMine_Sky_Blue = rgb <0.529411764705882, 0.807843137254902, 0.92156862745098>; // HEX #87CEEB
    #declare ColorMine_Slate_Blue = rgb <0.415686274509804, 0.352941176470588, 0.803921568627451>; // HEX #6A5ACD
    #declare ColorMine_Slate_Gray = rgb <0.43921568627451, 0.501960784313725, 0.564705882352941>; // HEX #708090
    #declare ColorMine_Snow = rgb <1, 0.980392156862745, 0.980392156862745>; // HEX #FFFAFA
    #declare ColorMine_Steel_Blue = rgb <0.274509803921569, 0.509803921568627, 0.705882352941177>; // HEX #4682B4
    #declare ColorMine_Tan = rgb <0.823529411764706, 0.705882352941177, 0.549019607843137>; // HEX #D2B48C
    #declare ColorMine_Teal = rgb <0, 0.501960784313725, 0.501960784313725>; // HEX #008080
    #declare ColorMine_Tomato = rgb <1, 0.388235294117647, 0.27843137254902>; // HEX #FF6347
    #declare ColorMine_Turquoise = rgb <0.250980392156863, 0.87843137254902, 0.815686274509804>; // HEX #40E0D0
    #declare ColorMine_Violet = rgb <0.933333333333333, 0.509803921568627, 0.933333333333333>; // HEX #EE82EE
    #declare ColorMine_Wheat = rgb <0.96078431372549, 0.870588235294118, 0.701960784313725>; // HEX #F5DEB3
    #declare ColorMine_White_Smoke = rgb <0.96078431372549, 0.96078431372549, 0.96078431372549>; // HEX #F5F5F5
    #declare ColorMine_Yellow_Green = rgb <0.603921568627451, 0.803921568627451, 0.196078431372549>; // HEX #9ACD32
    #declare ColorMine_Aqua = Cyan; // HEX #00FFFF
    #declare ColorMine_Brown = Brown; // HEX #A52A2A
    #declare ColorMine_Chartreuse = MediumSpringGreen; // HEX #7FFF00
    #declare ColorMine_Cyan = Cyan; // HEX #00FFFF
    #declare ColorMine_Dark_Orchid = DarkOrchid; // HEX #9932CC
    #declare ColorMine_Dark_Slate_Gray = DarkSlateGray; // HEX #2F4F4F
    #declare ColorMine_Fuchsia = Magenta; // HEX #FF00FF
    #declare ColorMine_Gray = Gray50; // HEX #808080
    #declare ColorMine_Lime = Green; // HEX #00FF00
    #declare ColorMine_Magenta = Magenta; // HEX #FF00FF
    #declare ColorMine_Medium_Purple = MediumOrchid; // HEX #9370DB
    #declare ColorMine_Olive_Drab = MediumForestGreen; // HEX #6B8E23
    #declare ColorMine_Pale_Violet_Red = MediumVioletRed; // HEX #DB7093
    #declare ColorMine_Red = Red; // HEX #FF0000
    #declare ColorMine_Rosy_Brown = Pink; // HEX #BC8F8F
    #declare ColorMine_Silver = Gray; // HEX #C0C0C0
    #declare ColorMine_Spring_Green = SpringGreen; // HEX #00FF7F
    #declare ColorMine_Thistle = Thistle; // HEX #D8BFD8
    #declare ColorMine_White = White; // HEX #FFFFFF
    #declare ColorMine_Yellow = Yellow; // HEX #FFFF00

    #version farger_colormine_Inc_Temp;
#end
