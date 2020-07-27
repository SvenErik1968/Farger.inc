// This work is licensed under the Attribution-ShareAlike 4.0 International.
//
//    Persistence of Vision Ray Tracer Include File
//
//    File           : farger_lego.inc
//    Version        : 4.1
//    Created by     : Sven-Erik Andersen
//    Contact        : sven.erik.andersen@gmail.com
//    Created date   : 2014-06-22
//    Last updated   : 2020-07-27
//    Repository     : https://github.com/SvenErik1968/Farger.inc/
//    Description    : Farger means colors in Norwegian.
//
//

#ifndef(farger_lego_Inc_Temp)
    #declare farger_lego_Inc_Temp = version;
    #version 3.7;

    // Where the color definition is the same as in the POV-Ray color.inc include file,
    // the color name will point to the POV-Ray color definition,
    // so we need to make sure that file is included
    #ifndef(Colors_Inc_Temp)
        #include "colors.inc"
    #end

    #ifdef(View_POV_Include_Stack)
        #debug "including farger_lego.inc\n"
    #end

    // Official LEGO™ Colors
    #declare Lego_Black = rgb <0.105882352941176, 0.164705882352941, 0.203921568627451>; // HEX #1B2A34
    #declare Lego_Black_Metallic = rgb <0.0862745098039216, 0.113725490196078, 0.196078431372549>; // HEX #161D32
    #declare Lego_Brick_Yellow = rgb <0.843137254901961, 0.772549019607843, 0.6>; // HEX #D7C599
    #declare Lego_Bright_Blue = rgb <0.0509803921568627, 0.411764705882353, 0.670588235294118>; // HEX #0D69AB
    #declare Lego_Bright_Bluish_Green = rgb <0, 0.56078431372549, 0.607843137254902>; // HEX #008F9B
    #declare Lego_Bright_Bluish_Violet = rgb <0.262745098039216, 0.329411764705882, 0.576470588235294>; // HEX #435493
    #declare Lego_Bright_Green = rgb <0.294117647058824, 0.592156862745098, 0.290196078431373>; // HEX #4B974A
    #declare Lego_Bright_Orange = rgb <0.854901960784314, 0.52156862745098, 0.250980392156863>; // HEX #DA8540
    #declare Lego_Bright_Purple = rgb <0.803921568627451, 0.384313725490196, 0.596078431372549>; // HEX #CD6298
    #declare Lego_Bright_Red = rgb <0.768627450980392, 0.156862745098039, 0.105882352941176>; // HEX #C4281B
    #declare Lego_Bright_Reddish_Lilac = rgb <0.556862745098039, 0.258823529411765, 0.52156862745098>; // HEX #8E4285
    #declare Lego_Bright_Reddish_Orange = rgb <0.827450980392157, 0.435294117647059, 0.298039215686275>; // HEX #D36F4C
    #declare Lego_Bright_Reddish_Violet = rgb <0.572549019607843, 0.223529411764706, 0.470588235294118>; // HEX #923978
    #declare Lego_Bright_Violet = rgb <0.419607843137255, 0.196078431372549, 0.482352941176471>; // HEX #6B327B
    #declare Lego_Bright_Yellow = rgb <0.96078431372549, 0.803921568627451, 0.184313725490196>; // HEX #F5CD2F
    #declare Lego_Bright_Yellowish_Green = rgb <0.643137254901961, 0.741176470588235, 0.274509803921569>; // HEX #A4BD46
    #declare Lego_Bright_Yellowish_Orange = rgb <0.886274509803922, 0.607843137254902, 0.247058823529412>; // HEX #E29B3F
    #declare Lego_Brown = rgb <0.486274509803922, 0.36078431372549, 0.270588235294118>; // HEX #7C5C45
    #declare Lego_Cool_Yellow = rgb <0.992156862745098, 0.917647058823529, 0.549019607843137>; // HEX #FDEA8C
    #declare Lego_Curry = rgb <0.843137254901961, 0.662745098039216, 0.294117647058824>; // HEX #D7A94B
    #declare Lego_Dark_Curry = rgb <0.690196078431373, 0.556862745098039, 0.266666666666667>; // HEX #B08E44
    #declare Lego_Dark_Green = rgb <0.156862745098039, 0.498039215686275, 0.274509803921569>; // HEX #287F46
    #declare Lego_Dark_Grey = rgb <0.427450980392157, 0.431372549019608, 0.423529411764706>; // HEX #6D6E6C
    #declare Lego_Dark_Grey_Metallic = rgb <0.341176470588235, 0.345098039215686, 0.341176470588235>; // HEX #575857
    #declare Lego_Dark_Nougat = rgb <0.682352941176471, 0.47843137254902, 0.349019607843137>; // HEX #AE7A59
    #declare Lego_Dark_Orange = rgb <0.627450980392157, 0.372549019607843, 0.203921568627451>; // HEX #A05F34
    #declare Lego_Dark_Red = rgb <0.482352941176471, 0.180392156862745, 0.184313725490196>; // HEX #7B2E2F
    #declare Lego_Dark_Royal_Blue = rgb <0.137254901960784, 0.27843137254902, 0.545098039215686>; // HEX #23478B
    #declare Lego_Dark_Stone_Grey = rgb <0.388235294117647, 0.372549019607843, 0.380392156862745>; // HEX #635F61
    #declare Lego_Dove_Blue = rgb <0.490196078431373, 0.733333333333333, 0.866666666666667>; // HEX #7DBBDD
    #declare Lego_Earth_Blue = rgb <0.125490196078431, 0.227450980392157, 0.337254901960784>; // HEX #203A56
    #declare Lego_Earth_Green = rgb <0.152941176470588, 0.274509803921569, 0.172549019607843>; // HEX #27462C
    #declare Lego_Earth_Orange = rgb <0.384313725490196, 0.27843137254902, 0.196078431372549>; // HEX #624732
    #declare Lego_Earth_Yellow = rgb <0.407843137254902, 0.36078431372549, 0.262745098039216>; // HEX #685C43
    #declare Lego_Faded_Green = rgb <0.43921568627451, 0.584313725490196, 0.470588235294118>; // HEX #709578
    #declare Lego_Fire_Yellow = rgb <0.976470588235294, 0.83921568627451, 0.180392156862745>; // HEX #F9D62E
    #declare Lego_Flame_Reddish_Orange = rgb <0.811764705882353, 0.376470588235294, 0.141176470588235>; // HEX #CF6024
    #declare Lego_Flame_Yellowish_Orange = rgb <0.909803921568627, 0.670588235294118, 0.176470588235294>; // HEX #E8AB2D
    #declare Lego_Gold = rgb <0.862745098039216, 0.737254901960784, 0.505882352941176>; // HEX #DCBC81
    #declare Lego_Grey = rgb <0.631372549019608, 0.647058823529412, 0.635294117647059>; // HEX #A1A5A2
    #declare Lego_Gun_Metallic = rgb <0.458823529411765, 0.423529411764706, 0.384313725490196>; // HEX #756C62
    #declare Lego_Lemon_Metalic = rgb <0.509803921568627, 0.541176470588235, 0.364705882352941>; // HEX #828A5D
    #declare Lego_Light_Blue = rgb <0.705882352941177, 0.823529411764706, 0.890196078431372>; // HEX #B4D2E3
    #declare Lego_Light_Bluish_Green = rgb <0.717647058823529, 0.843137254901961, 0.835294117647059>; // HEX #B7D7D5
    #declare Lego_Light_Bluish_Violet = rgb <0.756862745098039, 0.792156862745098, 0.870588235294118>; // HEX #C1CADE
    #declare Lego_Light_Brick_Yellow = rgb <0.941176470588235, 0.835294117647059, 0.627450980392157>; // HEX #F0D5A0
    #declare Lego_Light_Green = rgb <0.76078431372549, 0.854901960784314, 0.72156862745098>; // HEX #C2DAB8
    #declare Lego_Light_Grey = rgb <0.780392156862745, 0.756862745098039, 0.717647058823529>; // HEX #C7C1B7
    #declare Lego_Light_Grey_Metallic = rgb <0.670588235294118, 0.67843137254902, 0.674509803921569>; // HEX #ABADAC
    #declare Lego_Light_Lilac = rgb <0.654901960784314, 0.662745098039216, 0.807843137254902>; // HEX #A7A9CE
    #declare Lego_Light_Orange = rgb <0.917647058823529, 0.72156862745098, 0.568627450980392>; // HEX #EAB891
    #declare Lego_Light_Orange_Brown = rgb <0.796078431372549, 0.517647058823529, 0.258823529411765>; // HEX #CB8442
    #declare Lego_Light_Pink = rgb <0.862745098039216, 0.564705882352941, 0.584313725490196>; // HEX #DC9095
    #declare Lego_Light_Purple = rgb <0.894117647058824, 0.67843137254902, 0.784313725490196>; // HEX #E4ADC8
    #declare Lego_Light_Red = rgb <0.933333333333333, 0.768627450980392, 0.713725490196078>; // HEX #EEC4B6
    #declare Lego_Light_Reddish_Violet = rgb <0.909803921568627, 0.729411764705882, 0.780392156862745>; // HEX #E8BAC7
    #declare Lego_Light_Royal_Blue = rgb <0.623529411764706, 0.764705882352941, 0.913725490196078>; // HEX #9FC3E9
    #declare Lego_Light_Stone_Grey = rgb <0.898039215686275, 0.894117647058824, 0.870588235294118>; // HEX #E5E4DE
    #declare Lego_Light_Yellow = rgb <0.976470588235294, 0.913725490196078, 0.6>; // HEX #F9E999
    #declare Lego_Light_Yellowish_Green = rgb <0.850980392156863, 0.894117647058824, 0.654901960784314>; // HEX #D9E4A7
    #declare Lego_Light_Yellowish_Orange = rgb <0.952941176470588, 0.811764705882353, 0.607843137254902>; // HEX #F3CF9B
    #declare Lego_Lilac = rgb <0.419607843137255, 0.384313725490196, 0.607843137254902>; // HEX #6B629B
    #declare Lego_Medium_Blue = rgb <0.431372549019608, 0.6, 0.788235294117647>; // HEX #6E99C9
    #declare Lego_Medium_Bluish_Green = rgb <0.333333333333333, 0.647058823529412, 0.686274509803922>; // HEX #55A5AF
    #declare Lego_Medium_Bluish_Violet = rgb <0.407843137254902, 0.454901960784314, 0.674509803921569>; // HEX #6874AC
    #declare Lego_Medium_Green = rgb <0.631372549019608, 0.768627450980392, 0.545098039215686>; // HEX #A1C48B
    #declare Lego_Medium_Lilac = rgb <0.203921568627451, 0.168627450980392, 0.458823529411765>; // HEX #342B75
    #declare Lego_Medium_Orange = rgb <0.87843137254902, 0.596078431372549, 0.392156862745098>; // HEX #E09864
    #declare Lego_Medium_Red = rgb <0.854901960784314, 0.525490196078431, 0.474509803921569>; // HEX #DA8679
    #declare Lego_Medium_Reddish_Violet = rgb <0.768627450980392, 0.43921568627451, 0.627450980392157>; // HEX #C470A0
    #declare Lego_Medium_Royal_Blue = rgb <0.423529411764706, 0.505882352941176, 0.717647058823529>; // HEX #6C81B7
    #declare Lego_Medium_Stone_Grey = rgb <0.63921568627451, 0.635294117647059, 0.643137254901961>; // HEX #A3A2A4
    #declare Lego_Medium_Yellowish_Green = rgb <0.780392156862745, 0.823529411764706, 0.235294117647059>; // HEX #C7D23C
    #declare Lego_Medium_Yellowish_Orange = rgb <0.905882352941176, 0.674509803921569, 0.345098039215686>; // HEX #E7AC58
    #declare Lego_Neon_Green = rgb <0.847058823529412, 0.866666666666667, 0.337254901960784>; // HEX #D8DD56
    #declare Lego_Neon_Orange = rgb <0.835294117647059, 0.450980392156863, 0.23921568627451>; // HEX #D5733D
    #declare Lego_Nougat = rgb <0.8, 0.556862745098039, 0.407843137254902>; // HEX #CC8E68
    #declare Lego_Phosphorus_White = rgb <0.925490196078431, 0.909803921568627, 0.870588235294118>; // HEX #ECE8DE
    #declare Lego_Red_Flip_Flop = rgb <0.592156862745098, 0.411764705882353, 0.356862745098039>; // HEX #97695B
    #declare Lego_Reddish_Brown = rgb <0.411764705882353, 0.250980392156863, 0.152941176470588>; // HEX #694027
    #declare Lego_Reddish_Lilac = rgb <0.588235294117647, 0.43921568627451, 0.623529411764706>; // HEX #96709F
    #declare Lego_Royal_Blue = rgb <0.274509803921569, 0.403921568627451, 0.643137254901961>; // HEX #4667A4
    #declare Lego_Rust = rgb <0.56078431372549, 0.298039215686275, 0.164705882352941>; // HEX #8F4C2A
    #declare Lego_Sand_Blue = rgb <0.454901960784314, 0.525490196078431, 0.611764705882353>; // HEX #74869C
    #declare Lego_Sand_Blue_Metallic = rgb <0.474509803921569, 0.533333333333333, 0.631372549019608>; // HEX #7988A1
    #declare Lego_Sand_Green = rgb <0.470588235294118, 0.564705882352941, 0.505882352941176>; // HEX #789081
    #declare Lego_Sand_Red = rgb <0.584313725490196, 0.474509803921569, 0.462745098039216>; // HEX #957976
    #declare Lego_Sand_Violet = rgb <0.529411764705882, 0.486274509803922, 0.564705882352941>; // HEX #877C90
    #declare Lego_Sand_Violet_Metallic = rgb <0.584313725490196, 0.556862745098039, 0.63921568627451>; // HEX #958EA3
    #declare Lego_Sand_Yellow = rgb <0.584313725490196, 0.541176470588235, 0.450980392156863>; // HEX #958A73
    #declare Lego_Sand_Yellow_Metallic = rgb <0.576470588235294, 0.529411764705882, 0.403921568627451>; // HEX #938767
    #declare Lego_Silver = rgb <0.611764705882353, 0.63921568627451, 0.658823529411765>; // HEX #9CA3A8
    #declare Lego_Silver_Flip_Flop = rgb <0.537254901960784, 0.529411764705882, 0.533333333333333>; // HEX #898788
    #declare Lego_Transparent = rgb <0.925490196078431, 0.925490196078431, 0.925490196078431>; // HEX #ECECEC
    #declare Lego_Transparent_Blue = rgb <0.482352941176471, 0.713725490196078, 0.909803921568627>; // HEX #7BB6E8
    #declare Lego_Transparent_Bright_Bluish_Violet = rgb <0.647058823529412, 0.647058823529412, 0.796078431372549>; // HEX #A5A5CB
    #declare Lego_Transparent_Brown = rgb <0.749019607843137, 0.717647058823529, 0.694117647058824>; // HEX #BFB7B1
    #declare Lego_Transparent_Fluorescent_Blue = rgb <0.811764705882353, 0.886274509803922, 0.968627450980392>; // HEX #CFE2F7
    #declare Lego_Transparent_Fluorescent_Green = rgb <0.972549019607843, 0.945098039215686, 0.517647058823529>; // HEX #F8F184
    #declare Lego_Transparent_Fluorescent_Red = rgb <0.882352941176471, 0.643137254901961, 0.76078431372549>; // HEX #E1A4C2
    #declare Lego_Transparent_Fluorescent_Reddish_Orange = rgb <0.850980392156863, 0.52156862745098, 0.423529411764706>; // HEX #D9856C
    #declare Lego_Transparent_Fluorescent_Yellow = rgb <1, 0.964705882352941, 0.482352941176471>; // HEX #FFF67B
    #declare Lego_Transparent_Green = rgb <0.517647058823529, 0.713725490196078, 0.552941176470588>; // HEX #84B68D
    #declare Lego_Transparent_Lg_Blue = rgb <0.756862745098039, 0.874509803921569, 0.941176470588235>; // HEX #C1DFF0
    #declare Lego_Transparent_Medium_Reddish_Violet = rgb <0.894117647058824, 0.67843137254902, 0.784313725490196>; // HEX #E4ADC8
    #declare Lego_Transparent_Red = rgb <0.803921568627451, 0.329411764705882, 0.294117647058824>; // HEX #CD544B
    #declare Lego_Transparent_Yellow = rgb <0.968627450980392, 0.945098039215686, 0.552941176470588>; // HEX #F7F18D
    #declare Lego_Turquoise = rgb <0.474509803921569, 0.709803921568627, 0.709803921568627>; // HEX #79B5B5
    #declare Lego_Warm_Yellowish_Orange = rgb <0.92156862745098, 0.72156862745098, 0.498039215686275>; // HEX #EBB87F
    #declare Lego_White = rgb <0.949019607843137, 0.952941176470588, 0.949019607843137>; // HEX #F2F3F2
    #declare Lego_Yellow_Flip_Flop = rgb <0.705882352941177, 0.517647058823529, 0.333333333333333>; // HEX #B48455


    #version farger_lego_Inc_Temp;
#end
