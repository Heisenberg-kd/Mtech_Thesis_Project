    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 10;
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
        ;% Auto data (camera_lidar_IOTest_P)
        ;%
            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.LidarData_maximum_rho
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.LidarData_maximum_theta
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_P.LidarData_minimum_rho
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% camera_lidar_IOTest_P.LidarData_minimum_theta
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.LidarData_direction
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.LidarData_update_rate
                    section.data(2).logicalSrcIdx = 5;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_P.LidarData_zero_location
                    section.data(3).logicalSrcIdx = 6;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.ImageTransform_max_pixel
                    section.data(1).logicalSrcIdx = 7;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.ImageTransform_min_pixel
                    section.data(2).logicalSrcIdx = 8;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.Video3DCapture1_stream_index
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.Video3DCapture_stream_index
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.Video3DInitialize_active
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 74;
            section.data(74)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Brightness
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Contrast
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Hue
                    section.data(3).logicalSrcIdx = 14;
                    section.data(3).dtTransOffset = 2;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Saturation
                    section.data(4).logicalSrcIdx = 15;
                    section.data(4).dtTransOffset = 3;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Sharpness
                    section.data(5).logicalSrcIdx = 16;
                    section.data(5).dtTransOffset = 4;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Gamma
                    section.data(6).logicalSrcIdx = 17;
                    section.data(6).dtTransOffset = 5;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_ColorEnabl
                    section.data(7).logicalSrcIdx = 18;
                    section.data(7).dtTransOffset = 6;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_WhiteBalan
                    section.data(8).logicalSrcIdx = 19;
                    section.data(8).dtTransOffset = 7;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_BacklightC
                    section.data(9).logicalSrcIdx = 20;
                    section.data(9).dtTransOffset = 8;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Gain
                    section.data(10).logicalSrcIdx = 21;
                    section.data(10).dtTransOffset = 9;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Pan
                    section.data(11).logicalSrcIdx = 22;
                    section.data(11).dtTransOffset = 10;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Tilt
                    section.data(12).logicalSrcIdx = 23;
                    section.data(12).dtTransOffset = 11;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Roll
                    section.data(13).logicalSrcIdx = 24;
                    section.data(13).dtTransOffset = 12;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Zoom
                    section.data(14).logicalSrcIdx = 25;
                    section.data(14).dtTransOffset = 13;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Exposure
                    section.data(15).logicalSrcIdx = 26;
                    section.data(15).dtTransOffset = 14;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Iris
                    section.data(16).logicalSrcIdx = 27;
                    section.data(16).dtTransOffset = 15;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Focus
                    section.data(17).logicalSrcIdx = 28;
                    section.data(17).dtTransOffset = 16;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_Mirror
                    section.data(18).logicalSrcIdx = 29;
                    section.data(18).dtTransOffset = 17;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Brightness
                    section.data(19).logicalSrcIdx = 30;
                    section.data(19).dtTransOffset = 18;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Contrast
                    section.data(20).logicalSrcIdx = 31;
                    section.data(20).dtTransOffset = 19;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Hue
                    section.data(21).logicalSrcIdx = 32;
                    section.data(21).dtTransOffset = 20;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Saturation
                    section.data(22).logicalSrcIdx = 33;
                    section.data(22).dtTransOffset = 21;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Sharpness
                    section.data(23).logicalSrcIdx = 34;
                    section.data(23).dtTransOffset = 22;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Gamma
                    section.data(24).logicalSrcIdx = 35;
                    section.data(24).dtTransOffset = 23;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_WhiteBalance
                    section.data(25).logicalSrcIdx = 36;
                    section.data(25).dtTransOffset = 24;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_BacklightCompen
                    section.data(26).logicalSrcIdx = 37;
                    section.data(26).dtTransOffset = 25;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Gain
                    section.data(27).logicalSrcIdx = 38;
                    section.data(27).dtTransOffset = 26;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Exposure
                    section.data(28).logicalSrcIdx = 39;
                    section.data(28).dtTransOffset = 27;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Emitter
                    section.data(29).logicalSrcIdx = 40;
                    section.data(29).dtTransOffset = 28;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Brightness
                    section.data(30).logicalSrcIdx = 41;
                    section.data(30).dtTransOffset = 29;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Contrast
                    section.data(31).logicalSrcIdx = 42;
                    section.data(31).dtTransOffset = 30;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Hue
                    section.data(32).logicalSrcIdx = 43;
                    section.data(32).dtTransOffset = 31;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Saturation
                    section.data(33).logicalSrcIdx = 44;
                    section.data(33).dtTransOffset = 32;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Sharpness
                    section.data(34).logicalSrcIdx = 45;
                    section.data(34).dtTransOffset = 33;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Gamma
                    section.data(35).logicalSrcIdx = 46;
                    section.data(35).dtTransOffset = 34;

                    ;% camera_lidar_IOTest_P.Video3DCapture_WhiteBalance
                    section.data(36).logicalSrcIdx = 47;
                    section.data(36).dtTransOffset = 35;

                    ;% camera_lidar_IOTest_P.Video3DCapture_BacklightCompens
                    section.data(37).logicalSrcIdx = 48;
                    section.data(37).dtTransOffset = 36;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Gain
                    section.data(38).logicalSrcIdx = 49;
                    section.data(38).dtTransOffset = 37;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Exposure
                    section.data(39).logicalSrcIdx = 50;
                    section.data(39).dtTransOffset = 38;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Emitter
                    section.data(40).logicalSrcIdx = 51;
                    section.data(40).dtTransOffset = 39;

                    ;% camera_lidar_IOTest_P.ImageTransform_FocalLen
                    section.data(41).logicalSrcIdx = 52;
                    section.data(41).dtTransOffset = 40;

                    ;% camera_lidar_IOTest_P.ImageTransform_Extrapolated
                    section.data(42).logicalSrcIdx = 53;
                    section.data(42).dtTransOffset = 41;

                    ;% camera_lidar_IOTest_P.ImageTransform_Angle
                    section.data(43).logicalSrcIdx = 54;
                    section.data(43).dtTransOffset = 42;

                    ;% camera_lidar_IOTest_P.ImageTransform_RCoeff
                    section.data(44).logicalSrcIdx = 55;
                    section.data(44).dtTransOffset = 43;

                    ;% camera_lidar_IOTest_P.RangingSensor_Budget
                    section.data(45).logicalSrcIdx = 56;
                    section.data(45).dtTransOffset = 45;

                    ;% camera_lidar_IOTest_P.RangingSensor_Period
                    section.data(46).logicalSrcIdx = 57;
                    section.data(46).dtTransOffset = 46;

                    ;% camera_lidar_IOTest_P.RangingSensor_MaxInterpolationD
                    section.data(47).logicalSrcIdx = 58;
                    section.data(47).dtTransOffset = 47;

                    ;% camera_lidar_IOTest_P.RangingSensor_MaxInterpolationA
                    section.data(48).logicalSrcIdx = 59;
                    section.data(48).dtTransOffset = 48;

                    ;% camera_lidar_IOTest_P.Gain_Gain
                    section.data(49).logicalSrcIdx = 60;
                    section.data(49).dtTransOffset = 49;

                    ;% camera_lidar_IOTest_P.LidarData_L1Width
                    section.data(50).logicalSrcIdx = 61;
                    section.data(50).dtTransOffset = 50;

                    ;% camera_lidar_IOTest_P.LidarData_L1Color
                    section.data(51).logicalSrcIdx = 62;
                    section.data(51).dtTransOffset = 51;

                    ;% camera_lidar_IOTest_P.LidarData_L1MSize
                    section.data(52).logicalSrcIdx = 63;
                    section.data(52).dtTransOffset = 54;

                    ;% camera_lidar_IOTest_P.LidarData_L1MEdgeColor
                    section.data(53).logicalSrcIdx = 64;
                    section.data(53).dtTransOffset = 55;

                    ;% camera_lidar_IOTest_P.LidarData_L1MFaceColor
                    section.data(54).logicalSrcIdx = 65;
                    section.data(54).dtTransOffset = 58;

                    ;% camera_lidar_IOTest_P.LidarData_L2Width
                    section.data(55).logicalSrcIdx = 66;
                    section.data(55).dtTransOffset = 61;

                    ;% camera_lidar_IOTest_P.LidarData_L2Color
                    section.data(56).logicalSrcIdx = 67;
                    section.data(56).dtTransOffset = 62;

                    ;% camera_lidar_IOTest_P.LidarData_L2MSize
                    section.data(57).logicalSrcIdx = 68;
                    section.data(57).dtTransOffset = 65;

                    ;% camera_lidar_IOTest_P.LidarData_L2MEdgeColor
                    section.data(58).logicalSrcIdx = 69;
                    section.data(58).dtTransOffset = 66;

                    ;% camera_lidar_IOTest_P.LidarData_L2MFaceColor
                    section.data(59).logicalSrcIdx = 70;
                    section.data(59).dtTransOffset = 69;

                    ;% camera_lidar_IOTest_P.LidarData_L3Width
                    section.data(60).logicalSrcIdx = 71;
                    section.data(60).dtTransOffset = 72;

                    ;% camera_lidar_IOTest_P.LidarData_L3Color
                    section.data(61).logicalSrcIdx = 72;
                    section.data(61).dtTransOffset = 73;

                    ;% camera_lidar_IOTest_P.LidarData_L3MSize
                    section.data(62).logicalSrcIdx = 73;
                    section.data(62).dtTransOffset = 76;

                    ;% camera_lidar_IOTest_P.LidarData_L3MEdgeColor
                    section.data(63).logicalSrcIdx = 74;
                    section.data(63).dtTransOffset = 77;

                    ;% camera_lidar_IOTest_P.LidarData_L3MFaceColor
                    section.data(64).logicalSrcIdx = 75;
                    section.data(64).dtTransOffset = 80;

                    ;% camera_lidar_IOTest_P.LidarData_L4Width
                    section.data(65).logicalSrcIdx = 76;
                    section.data(65).dtTransOffset = 83;

                    ;% camera_lidar_IOTest_P.LidarData_L4Color
                    section.data(66).logicalSrcIdx = 77;
                    section.data(66).dtTransOffset = 84;

                    ;% camera_lidar_IOTest_P.LidarData_L4MSize
                    section.data(67).logicalSrcIdx = 78;
                    section.data(67).dtTransOffset = 87;

                    ;% camera_lidar_IOTest_P.LidarData_L4MEdgeColor
                    section.data(68).logicalSrcIdx = 79;
                    section.data(68).dtTransOffset = 88;

                    ;% camera_lidar_IOTest_P.LidarData_L4MFaceColor
                    section.data(69).logicalSrcIdx = 80;
                    section.data(69).dtTransOffset = 91;

                    ;% camera_lidar_IOTest_P.LidarData_L5Width
                    section.data(70).logicalSrcIdx = 81;
                    section.data(70).dtTransOffset = 94;

                    ;% camera_lidar_IOTest_P.LidarData_L5Color
                    section.data(71).logicalSrcIdx = 82;
                    section.data(71).dtTransOffset = 95;

                    ;% camera_lidar_IOTest_P.LidarData_L5MSize
                    section.data(72).logicalSrcIdx = 83;
                    section.data(72).dtTransOffset = 98;

                    ;% camera_lidar_IOTest_P.LidarData_L5MEdgeColor
                    section.data(73).logicalSrcIdx = 84;
                    section.data(73).dtTransOffset = 99;

                    ;% camera_lidar_IOTest_P.LidarData_L5MFaceColor
                    section.data(74).logicalSrcIdx = 85;
                    section.data(74).dtTransOffset = 102;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.ImageTransform_PrPoint
                    section.data(1).logicalSrcIdx = 86;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.ImageTransform_Interpolation
                    section.data(2).logicalSrcIdx = 87;
                    section.data(2).dtTransOffset = 2;

                    ;% camera_lidar_IOTest_P.ImageTransform_Origin
                    section.data(3).logicalSrcIdx = 88;
                    section.data(3).dtTransOffset = 3;

                    ;% camera_lidar_IOTest_P.ImageTransform_OOrigin
                    section.data(4).logicalSrcIdx = 89;
                    section.data(4).dtTransOffset = 5;

                    ;% camera_lidar_IOTest_P.LidarData_L1Style
                    section.data(5).logicalSrcIdx = 90;
                    section.data(5).dtTransOffset = 7;

                    ;% camera_lidar_IOTest_P.LidarData_L1Marker
                    section.data(6).logicalSrcIdx = 91;
                    section.data(6).dtTransOffset = 8;

                    ;% camera_lidar_IOTest_P.LidarData_L2Style
                    section.data(7).logicalSrcIdx = 92;
                    section.data(7).dtTransOffset = 9;

                    ;% camera_lidar_IOTest_P.LidarData_L2Marker
                    section.data(8).logicalSrcIdx = 93;
                    section.data(8).dtTransOffset = 10;

                    ;% camera_lidar_IOTest_P.LidarData_L3Style
                    section.data(9).logicalSrcIdx = 94;
                    section.data(9).dtTransOffset = 11;

                    ;% camera_lidar_IOTest_P.LidarData_L3Marker
                    section.data(10).logicalSrcIdx = 95;
                    section.data(10).dtTransOffset = 12;

                    ;% camera_lidar_IOTest_P.LidarData_L4Style
                    section.data(11).logicalSrcIdx = 96;
                    section.data(11).dtTransOffset = 13;

                    ;% camera_lidar_IOTest_P.LidarData_L4Marker
                    section.data(12).logicalSrcIdx = 97;
                    section.data(12).dtTransOffset = 14;

                    ;% camera_lidar_IOTest_P.LidarData_L5Style
                    section.data(13).logicalSrcIdx = 98;
                    section.data(13).dtTransOffset = 15;

                    ;% camera_lidar_IOTest_P.LidarData_L5Marker
                    section.data(14).logicalSrcIdx = 99;
                    section.data(14).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.ImageCompress_Quality
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.Video3DCapture1_Preset
                    section.data(2).logicalSrcIdx = 101;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_P.ImageCompress_Quality_k
                    section.data(3).logicalSrcIdx = 102;
                    section.data(3).dtTransOffset = 2;

                    ;% camera_lidar_IOTest_P.Video3DCapture_Preset
                    section.data(4).logicalSrcIdx = 103;
                    section.data(4).dtTransOffset = 3;

                    ;% camera_lidar_IOTest_P.ImageTransform_ColorTheme
                    section.data(5).logicalSrcIdx = 104;
                    section.data(5).dtTransOffset = 4;

                    ;% camera_lidar_IOTest_P.ImageCompress_Quality_p
                    section.data(6).logicalSrcIdx = 105;
                    section.data(6).dtTransOffset = 5;

                    ;% camera_lidar_IOTest_P.RangingSensor_Range
                    section.data(7).logicalSrcIdx = 106;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvBrightne
                    section.data(1).logicalSrcIdx = 107;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvContrast
                    section.data(2).logicalSrcIdx = 108;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvHue
                    section.data(3).logicalSrcIdx = 109;
                    section.data(3).dtTransOffset = 2;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvSaturati
                    section.data(4).logicalSrcIdx = 110;
                    section.data(4).dtTransOffset = 3;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvSharpnes
                    section.data(5).logicalSrcIdx = 111;
                    section.data(5).dtTransOffset = 4;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvGamma
                    section.data(6).logicalSrcIdx = 112;
                    section.data(6).dtTransOffset = 5;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvColorEna
                    section.data(7).logicalSrcIdx = 113;
                    section.data(7).dtTransOffset = 6;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvWhiteBal
                    section.data(8).logicalSrcIdx = 114;
                    section.data(8).dtTransOffset = 7;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvBackligh
                    section.data(9).logicalSrcIdx = 115;
                    section.data(9).dtTransOffset = 8;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvGain
                    section.data(10).logicalSrcIdx = 116;
                    section.data(10).dtTransOffset = 9;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvPan
                    section.data(11).logicalSrcIdx = 117;
                    section.data(11).dtTransOffset = 10;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvTilt
                    section.data(12).logicalSrcIdx = 118;
                    section.data(12).dtTransOffset = 11;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvRoll
                    section.data(13).logicalSrcIdx = 119;
                    section.data(13).dtTransOffset = 12;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvZoom
                    section.data(14).logicalSrcIdx = 120;
                    section.data(14).dtTransOffset = 13;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvExposure
                    section.data(15).logicalSrcIdx = 121;
                    section.data(15).dtTransOffset = 14;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvIris
                    section.data(16).logicalSrcIdx = 122;
                    section.data(16).dtTransOffset = 15;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvFocus
                    section.data(17).logicalSrcIdx = 123;
                    section.data(17).dtTransOffset = 16;

                    ;% camera_lidar_IOTest_P.DownwardFacingCamera_OvMirror
                    section.data(18).logicalSrcIdx = 124;
                    section.data(18).dtTransOffset = 17;

                    ;% camera_lidar_IOTest_P.VideoDisplay_UseHardware
                    section.data(19).logicalSrcIdx = 125;
                    section.data(19).dtTransOffset = 18;

                    ;% camera_lidar_IOTest_P.VideoDisplay_UseHardware_f
                    section.data(20).logicalSrcIdx = 126;
                    section.data(20).dtTransOffset = 19;

                    ;% camera_lidar_IOTest_P.VideoDisplay_UseHardware_g
                    section.data(21).logicalSrcIdx = 127;
                    section.data(21).dtTransOffset = 20;

                    ;% camera_lidar_IOTest_P.RangingSensor_Active
                    section.data(22).logicalSrcIdx = 128;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_P.LidarData_Mode
                    section.data(1).logicalSrcIdx = 129;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
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
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (camera_lidar_IOTest_B)
        ;%
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_B.Video3DCapture1_o2
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_B.Video3DCapture_o2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_B.Video3DCapture1_o3
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_B.Video3DCapture_o3
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_B.RangingSensor_o1
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% camera_lidar_IOTest_B.RangingSensor_o2
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 1682;

                    ;% camera_lidar_IOTest_B.RangingSensor_o3
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 3362;

                    ;% camera_lidar_IOTest_B.RangingSensor_o4
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 5042;

                    ;% camera_lidar_IOTest_B.Gain
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 6722;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_B.Channel
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_B.Channel_a
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_B.Channel_e
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_B.Video3DCapture_o1
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_B.Video3DInitialize
                    section.data(1).logicalSrcIdx = 13;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_B.DownwardFacingCamera_o1
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_B.Video3DCapture1_o1
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 256000;

                    ;% camera_lidar_IOTest_B.ImageCompress
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 1177600;

                    ;% camera_lidar_IOTest_B.ImageCompress_j
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 1433600;

                    ;% camera_lidar_IOTest_B.ImageCompress_e
                    section.data(5).logicalSrcIdx = 18;
                    section.data(5).dtTransOffset = 2355200;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_B.DownwardFacingCamera_o2
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_B.RangingSensor_o5
                    section.data(2).logicalSrcIdx = 20;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
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
        nTotSects     = 13;
        sectIdxOffset = 7;

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
        ;% Auto data (camera_lidar_IOTest_DW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.RangingSensor_Measurements
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.LidarData_XBuffer
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_DW.LidarData_YBuffer
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1680;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.DownwardFacingCamera_VideoCaptu
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.ImageTransform_AlgHandle
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.RangingSensor_Sensor
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.ImageCompress_Compress
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_DW.ImageCompress_Compress_n
                    section.data(2).logicalSrcIdx = 7;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_DW.ImageCompress_Compress_c
                    section.data(3).logicalSrcIdx = 8;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.Video3DInitialize_Video3D
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_DW.Video3DCapture1_Video3D
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_DW.Video3DCapture_Video3D
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.Video3DCapture1_Stream
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_DW.Video3DCapture_Stream
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.NewDown_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_DW.Channel_PWORK.Fifo
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_DW.Channel_PWORK_f.Fifo
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 2;

                    ;% camera_lidar_IOTest_DW.Channel_PWORK_m.Fifo
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 3;

                    ;% camera_lidar_IOTest_DW.Scope_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 18;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.ImageCompress_DIMS1
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_DW.ImageCompress_DIMS1_o
                    section.data(2).logicalSrcIdx = 20;
                    section.data(2).dtTransOffset = 1;

                    ;% camera_lidar_IOTest_DW.ImageCompress_DIMS1_f
                    section.data(3).logicalSrcIdx = 21;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.LidarData_IWORK
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.ImageCompress_ScanLine
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% camera_lidar_IOTest_DW.ImageCompress_ScanLine_l
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 5120;

                    ;% camera_lidar_IOTest_DW.ImageCompress_ScanLine_e
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 20480;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% camera_lidar_IOTest_DW.LidarData_IsFull
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
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


    targMap.checksum0 = 880134452;
    targMap.checksum1 = 2522460081;
    targMap.checksum2 = 425627542;
    targMap.checksum3 = 1234485447;

