    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (QBot4_Image_Proc_Color_Thresh_P)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_P.thtype1_thrtype
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_stream_index
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DInitialize_active
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 29;
            section.data(29)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOTerminate
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOExit
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOStart
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 2;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOEnter
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 3;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFinal
                    section.data(5).logicalSrcIdx = 7;
                    section.data(5).dtTransOffset = 4;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOFinal
                    section.data(6).logicalSrcIdx = 8;
                    section.data(6).dtTransOffset = 5;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIHigh
                    section.data(7).logicalSrcIdx = 9;
                    section.data(7).dtTransOffset = 11;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AILow
                    section.data(8).logicalSrcIdx = 10;
                    section.data(8).dtTransOffset = 17;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POFrequency
                    section.data(9).logicalSrcIdx = 11;
                    section.data(9).dtTransOffset = 23;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POInitial
                    section.data(10).logicalSrcIdx = 12;
                    section.data(10).dtTransOffset = 25;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POWatchdog
                    section.data(11).logicalSrcIdx = 13;
                    section.data(11).dtTransOffset = 26;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOInitial
                    section.data(12).logicalSrcIdx = 14;
                    section.data(12).dtTransOffset = 27;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOWatchdog
                    section.data(13).logicalSrcIdx = 15;
                    section.data(13).dtTransOffset = 33;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Brightness
                    section.data(14).logicalSrcIdx = 16;
                    section.data(14).dtTransOffset = 39;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Contrast
                    section.data(15).logicalSrcIdx = 17;
                    section.data(15).dtTransOffset = 40;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Hue
                    section.data(16).logicalSrcIdx = 18;
                    section.data(16).dtTransOffset = 41;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Saturation
                    section.data(17).logicalSrcIdx = 19;
                    section.data(17).dtTransOffset = 42;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Sharpness
                    section.data(18).logicalSrcIdx = 20;
                    section.data(18).dtTransOffset = 43;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Gamma
                    section.data(19).logicalSrcIdx = 21;
                    section.data(19).dtTransOffset = 44;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_WhiteBalance
                    section.data(20).logicalSrcIdx = 22;
                    section.data(20).dtTransOffset = 45;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_BacklightCompens
                    section.data(21).logicalSrcIdx = 23;
                    section.data(21).dtTransOffset = 46;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Gain
                    section.data(22).logicalSrcIdx = 24;
                    section.data(22).dtTransOffset = 47;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Exposure
                    section.data(23).logicalSrcIdx = 25;
                    section.data(23).dtTransOffset = 48;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Emitter
                    section.data(24).logicalSrcIdx = 26;
                    section.data(24).dtTransOffset = 49;

                    ;% QBot4_Image_Proc_Color_Thresh_P.roi1_Value
                    section.data(25).logicalSrcIdx = 27;
                    section.data(25).dtTransOffset = 50;

                    ;% QBot4_Image_Proc_Color_Thresh_P.red_th_Value
                    section.data(26).logicalSrcIdx = 28;
                    section.data(26).dtTransOffset = 54;

                    ;% QBot4_Image_Proc_Color_Thresh_P.green_th_Value
                    section.data(27).logicalSrcIdx = 29;
                    section.data(27).dtTransOffset = 56;

                    ;% QBot4_Image_Proc_Color_Thresh_P.blue_th_Value
                    section.data(28).logicalSrcIdx = 30;
                    section.data(28).dtTransOffset = 58;

                    ;% QBot4_Image_Proc_Color_Thresh_P.truncval1_Value
                    section.data(29).logicalSrcIdx = 31;
                    section.data(29).dtTransOffset = 60;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOWatchdog
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIInitial
                    section.data(2).logicalSrcIdx = 33;
                    section.data(2).dtTransOffset = 1;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POModes
                    section.data(3).logicalSrcIdx = 34;
                    section.data(3).dtTransOffset = 2;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POConfiguration
                    section.data(4).logicalSrcIdx = 35;
                    section.data(4).dtTransOffset = 3;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POAlignment
                    section.data(5).logicalSrcIdx = 36;
                    section.data(5).dtTransOffset = 4;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POPolarity
                    section.data(6).logicalSrcIdx = 37;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DIChannels
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 6;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOChannels
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 19;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIChannels
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 22;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIQuadrature
                    section.data(5).logicalSrcIdx = 42;
                    section.data(5).dtTransOffset = 24;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POChannels
                    section.data(6).logicalSrcIdx = 43;
                    section.data(6).dtTransOffset = 25;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOChannels
                    section.data(7).logicalSrcIdx = 44;
                    section.data(7).dtTransOffset = 27;

                    ;% QBot4_Image_Proc_Color_Thresh_P.Video3DCapture_Preset
                    section.data(8).logicalSrcIdx = 45;
                    section.data(8).dtTransOffset = 33;

                    ;% QBot4_Image_Proc_Color_Thresh_P.ImageCompress_Quality
                    section.data(9).logicalSrcIdx = 46;
                    section.data(9).dtTransOffset = 34;

                    ;% QBot4_Image_Proc_Color_Thresh_P.ImageCompress_Quality_e
                    section.data(10).logicalSrcIdx = 47;
                    section.data(10).dtTransOffset = 35;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 37;
            section.data(37)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 49;
                    section.data(2).dtTransOffset = 1;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 50;
                    section.data(3).dtTransOffset = 2;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 51;
                    section.data(4).dtTransOffset = 3;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 52;
                    section.data(5).dtTransOffset = 4;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 53;
                    section.data(6).dtTransOffset = 5;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 54;
                    section.data(7).dtTransOffset = 6;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 55;
                    section.data(8).dtTransOffset = 7;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 56;
                    section.data(9).dtTransOffset = 8;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 57;
                    section.data(10).dtTransOffset = 9;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 58;
                    section.data(11).dtTransOffset = 10;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 59;
                    section.data(12).dtTransOffset = 11;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 60;
                    section.data(13).dtTransOffset = 12;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 61;
                    section.data(14).dtTransOffset = 13;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 62;
                    section.data(15).dtTransOffset = 14;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 63;
                    section.data(16).dtTransOffset = 15;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 64;
                    section.data(17).dtTransOffset = 16;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 65;
                    section.data(18).dtTransOffset = 17;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 66;
                    section.data(19).dtTransOffset = 18;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 67;
                    section.data(20).dtTransOffset = 19;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 68;
                    section.data(21).dtTransOffset = 20;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 69;
                    section.data(22).dtTransOffset = 21;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 70;
                    section.data(23).dtTransOffset = 22;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 71;
                    section.data(24).dtTransOffset = 23;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 72;
                    section.data(25).dtTransOffset = 24;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 73;
                    section.data(26).dtTransOffset = 25;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 74;
                    section.data(27).dtTransOffset = 26;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 75;
                    section.data(28).dtTransOffset = 27;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 76;
                    section.data(29).dtTransOffset = 28;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 77;
                    section.data(30).dtTransOffset = 29;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 78;
                    section.data(31).dtTransOffset = 30;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 79;
                    section.data(32).dtTransOffset = 31;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 80;
                    section.data(33).dtTransOffset = 32;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOFinal
                    section.data(34).logicalSrcIdx = 81;
                    section.data(34).dtTransOffset = 33;

                    ;% QBot4_Image_Proc_Color_Thresh_P.HILInitialize_DOInitial
                    section.data(35).logicalSrcIdx = 82;
                    section.data(35).dtTransOffset = 34;

                    ;% QBot4_Image_Proc_Color_Thresh_P.VideoDisplay_UseHardware
                    section.data(36).logicalSrcIdx = 83;
                    section.data(36).dtTransOffset = 35;

                    ;% QBot4_Image_Proc_Color_Thresh_P.VideoDisplay_UseHardware_j
                    section.data(37).logicalSrcIdx = 84;
                    section.data(37).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (QBot4_Image_Proc_Color_Thresh_B)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o2
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o3
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_B.Channel
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thresh_B.Channel_g
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o1
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thresh_B.Reshape
                    section.data(2).logicalSrcIdx = 5;
                    section.data(2).dtTransOffset = 921600;

                    ;% QBot4_Image_Proc_Color_Thresh_B.histogram_image
                    section.data(3).logicalSrcIdx = 6;
                    section.data(3).dtTransOffset = 921603;

                    ;% QBot4_Image_Proc_Color_Thresh_B.filtered_image
                    section.data(4).logicalSrcIdx = 7;
                    section.data(4).dtTransOffset = 1152003;

                    ;% QBot4_Image_Proc_Color_Thresh_B.ImageCompress
                    section.data(5).logicalSrcIdx = 8;
                    section.data(5).dtTransOffset = 2073603;

                    ;% QBot4_Image_Proc_Color_Thresh_B.ImageCompress_e
                    section.data(6).logicalSrcIdx = 9;
                    section.data(6).dtTransOffset = 2304003;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thresh_B.Video3DCapture_o4
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 11;
        sectIdxOffset = 5;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (QBot4_Image_Proc_Color_Thres_DW)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_FilterFrequency
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedFreqs
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POValues
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thres_DW.ImageCompress_Compress_o
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.Video3DInitialize_Video3D
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thres_DW.Video3DCapture_Video3D
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.Video3DCapture_Stream
                    section.data(1).logicalSrcIdx = 7;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK.Fifo
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thres_DW.Channel_PWORK_m.Fifo
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOStates
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_QuadratureModes
                    section.data(2).logicalSrcIdx = 12;
                    section.data(2).dtTransOffset = 3;

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_InitialEICounts
                    section.data(3).logicalSrcIdx = 13;
                    section.data(3).dtTransOffset = 5;

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POModeValues
                    section.data(4).logicalSrcIdx = 14;
                    section.data(4).dtTransOffset = 7;

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POAlignValues
                    section.data(5).logicalSrcIdx = 15;
                    section.data(5).dtTransOffset = 9;

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POPolarityVals
                    section.data(6).logicalSrcIdx = 16;
                    section.data(6).dtTransOffset = 11;

                    ;% QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1
                    section.data(7).logicalSrcIdx = 17;
                    section.data(7).dtTransOffset = 13;

                    ;% QBot4_Image_Proc_Color_Thres_DW.ImageCompress_DIMS1_c
                    section.data(8).logicalSrcIdx = 18;
                    section.data(8).dtTransOffset = 14;

                    ;% QBot4_Image_Proc_Color_Thres_DW.sfEvent
                    section.data(9).logicalSrcIdx = 19;
                    section.data(9).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_POSortedChans
                    section.data(1).logicalSrcIdx = 20;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.ImageThresholdingEnabled_Subsys
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.ImageCompress_ScanLine
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thres_DW.ImageCompress_ScanLine_h
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 6144;

                    ;% QBot4_Image_Proc_Color_Thres_DW.is_active_c2_QBot4_Image_Proc_C
                    section.data(3).logicalSrcIdx = 24;
                    section.data(3).dtTransOffset = 36864;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% QBot4_Image_Proc_Color_Thres_DW.HILInitialize_DOBits
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% QBot4_Image_Proc_Color_Thres_DW.doneDoubleBufferReInit
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1194091741;
    targMap.checksum1 = 1696854016;
    targMap.checksum2 = 1800051018;
    targMap.checksum3 = 2388914825;

