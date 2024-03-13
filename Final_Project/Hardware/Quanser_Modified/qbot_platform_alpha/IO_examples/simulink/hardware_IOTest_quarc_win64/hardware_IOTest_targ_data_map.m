    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
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
        ;% Auto data (hardware_IOTest_P)
        ;%
            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% hardware_IOTest_P.ColorConstant_color
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% hardware_IOTest_P.StreamClient_default_value
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% hardware_IOTest_P.Constant_Value
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 20;

                    ;% hardware_IOTest_P.Constant2_Value
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 21;

                    ;% hardware_IOTest_P.TurnRight_Value
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 22;

                    ;% hardware_IOTest_P.TurnLeft_Value
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 23;

                    ;% hardware_IOTest_P.Mode1BodyMode_Value
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 24;

                    ;% hardware_IOTest_P.userLED_Value
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 25;

                    ;% hardware_IOTest_P.Hold_Value
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 26;

                    ;% hardware_IOTest_P.Constant3_Value
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 27;

                    ;% hardware_IOTest_P.Saturation_UpperSat
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 28;

                    ;% hardware_IOTest_P.Saturation_LowerSat
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 29;

                    ;% hardware_IOTest_P.Saturation1_UpperSat
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 30;

                    ;% hardware_IOTest_P.Saturation1_LowerSat
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 31;

                    ;% hardware_IOTest_P.Constant6_Value
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 32;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% hardware_IOTest_P.StreamClient_SndPriority
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

                    ;% hardware_IOTest_P.StreamClient_RcvPriority
                    section.data(2).logicalSrcIdx = 16;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% hardware_IOTest_P.StreamClient_SndSize
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

                    ;% hardware_IOTest_P.StreamClient_RcvSize
                    section.data(2).logicalSrcIdx = 18;
                    section.data(2).dtTransOffset = 1;

                    ;% hardware_IOTest_P.StreamClient_SndFIFO
                    section.data(3).logicalSrcIdx = 19;
                    section.data(3).dtTransOffset = 2;

                    ;% hardware_IOTest_P.StreamClient_RcvFIFO
                    section.data(4).logicalSrcIdx = 20;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hardware_IOTest_P.StreamClient_Active
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% hardware_IOTest_P.StreamClient_Optimize
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% hardware_IOTest_P.StreamClient_Implementation
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% hardware_IOTest_P.MotorEnable_CurrentSetting
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

                    ;% hardware_IOTest_P.QbotTurn_CurrentSetting
                    section.data(2).logicalSrcIdx = 25;
                    section.data(2).dtTransOffset = 1;

                    ;% hardware_IOTest_P.StreamClient_URI
                    section.data(3).logicalSrcIdx = 26;
                    section.data(3).dtTransOffset = 2;

                    ;% hardware_IOTest_P.StreamClient_Endian
                    section.data(4).logicalSrcIdx = 27;
                    section.data(4).dtTransOffset = 26;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
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
        nTotSects     = 3;
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
        ;% Auto data (hardware_IOTest_B)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hardware_IOTest_B.StreamClient_o4
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hardware_IOTest_B.StreamClient_o2
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hardware_IOTest_B.StreamClient_o1
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
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
        nTotSects     = 4;
        sectIdxOffset = 3;

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
        ;% Auto data (hardware_IOTest_DW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hardware_IOTest_DW.Time_Timeout
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hardware_IOTest_DW.StreamClient_Stream
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% hardware_IOTest_DW.Accelerometer_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% hardware_IOTest_DW.Battery_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 3;

                    ;% hardware_IOTest_DW.Gyroscope_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 4;

                    ;% hardware_IOTest_DW.MotorCurrent_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 7;

                    ;% hardware_IOTest_DW.WheelPosition_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 8;

                    ;% hardware_IOTest_DW.WheelSpeedMotorCmd_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% hardware_IOTest_DW.Time_Owner
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
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


    targMap.checksum0 = 3382408238;
    targMap.checksum1 = 3461162645;
    targMap.checksum2 = 2548068264;
    targMap.checksum3 = 2501021373;

