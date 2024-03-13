    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 11;
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
        ;% Auto data (qbot_driver_v_1_22_P)
        ;%
            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.ColorConstant2_color
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.ColorConstant1_color
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_P.ColorConstant_color
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_P.ColorConstant3_color
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 9;

                    ;% qbot_driver_v_1_22_P.ColorConstant4_color
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% qbot_driver_v_1_22_P.CompareToConstant2_const
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 15;

                    ;% qbot_driver_v_1_22_P.CompareToConstant3_const
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% qbot_driver_v_1_22_P.CompareToConstant2_const_e
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 17;

                    ;% qbot_driver_v_1_22_P.CompareToConstant_const
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 18;

                    ;% qbot_driver_v_1_22_P.CompareToConstant_const_l
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 19;

                    ;% qbot_driver_v_1_22_P.CompareToConstant2_const_b
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 20;

                    ;% qbot_driver_v_1_22_P.CompareToConstant_const_j
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 21;

                    ;% qbot_driver_v_1_22_P.StreamServer_default_value
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 22;

                    ;% qbot_driver_v_1_22_P.Threshold_duration
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 32;

                    ;% qbot_driver_v_1_22_P.Threshold2_duration
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 33;

                    ;% qbot_driver_v_1_22_P.Threshold_duration_p
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 34;

                    ;% qbot_driver_v_1_22_P.Threshold3_duration
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 35;

                    ;% qbot_driver_v_1_22_P.Threshold_threshold
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 36;

                    ;% qbot_driver_v_1_22_P.Threshold2_threshold
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 37;

                    ;% qbot_driver_v_1_22_P.Threshold_threshold_d
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 38;

                    ;% qbot_driver_v_1_22_P.Threshold3_threshold
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 39;

                    ;% qbot_driver_v_1_22_P.DetectChange_vinit
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 40;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.CompareToConstant1_const
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.HILRead_analog_channels
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.HILRead_digital_channels
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_P.HILWrite_digital_channels
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 14;

                    ;% qbot_driver_v_1_22_P.HILRead_encoder_channels
                    section.data(4).logicalSrcIdx = 26;
                    section.data(4).dtTransOffset = 16;

                    ;% qbot_driver_v_1_22_P.HILRead_other_channels
                    section.data(5).logicalSrcIdx = 27;
                    section.data(5).dtTransOffset = 18;

                    ;% qbot_driver_v_1_22_P.HILWrite_other_channels
                    section.data(6).logicalSrcIdx = 28;
                    section.data(6).dtTransOffset = 27;

                    ;% qbot_driver_v_1_22_P.HILWrite_pwm_channels
                    section.data(7).logicalSrcIdx = 29;
                    section.data(7).dtTransOffset = 33;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.StopwithMessage3_message_icon
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.StopwithMessage1_message_icon
                    section.data(2).logicalSrcIdx = 31;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_P.StopwithMessage3_message_icon_e
                    section.data(3).logicalSrcIdx = 32;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_P.StopwithMessage1_message_icon_g
                    section.data(4).logicalSrcIdx = 33;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.CompareToConstant_const_f
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 71;
            section.data(71)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.Mode_Y0
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.Constant_Value
                    section.data(2).logicalSrcIdx = 36;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_P.Constant_Value_a
                    section.data(3).logicalSrcIdx = 37;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_P.Constant_Value_i
                    section.data(4).logicalSrcIdx = 38;
                    section.data(4).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_P.Switch4_Threshold
                    section.data(5).logicalSrcIdx = 39;
                    section.data(5).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_P.Constant_Value_af
                    section.data(6).logicalSrcIdx = 40;
                    section.data(6).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_P.Constant_Value_f
                    section.data(7).logicalSrcIdx = 41;
                    section.data(7).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_P.Constant_Value_d
                    section.data(8).logicalSrcIdx = 42;
                    section.data(8).dtTransOffset = 7;

                    ;% qbot_driver_v_1_22_P.commandrad_Y0
                    section.data(9).logicalSrcIdx = 43;
                    section.data(9).dtTransOffset = 8;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOTerminate
                    section.data(10).logicalSrcIdx = 44;
                    section.data(10).dtTransOffset = 9;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOExit
                    section.data(11).logicalSrcIdx = 45;
                    section.data(11).dtTransOffset = 10;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOStart
                    section.data(12).logicalSrcIdx = 46;
                    section.data(12).dtTransOffset = 11;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOEnter
                    section.data(13).logicalSrcIdx = 47;
                    section.data(13).dtTransOffset = 12;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POFinal
                    section.data(14).logicalSrcIdx = 48;
                    section.data(14).dtTransOffset = 13;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOFinal
                    section.data(15).logicalSrcIdx = 49;
                    section.data(15).dtTransOffset = 14;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AIHigh
                    section.data(16).logicalSrcIdx = 50;
                    section.data(16).dtTransOffset = 20;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AILow
                    section.data(17).logicalSrcIdx = 51;
                    section.data(17).dtTransOffset = 26;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POFrequency
                    section.data(18).logicalSrcIdx = 52;
                    section.data(18).dtTransOffset = 32;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POInitial
                    section.data(19).logicalSrcIdx = 53;
                    section.data(19).dtTransOffset = 34;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POWatchdog
                    section.data(20).logicalSrcIdx = 54;
                    section.data(20).dtTransOffset = 35;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOInitial
                    section.data(21).logicalSrcIdx = 55;
                    section.data(21).dtTransOffset = 36;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOWatchdog
                    section.data(22).logicalSrcIdx = 56;
                    section.data(22).dtTransOffset = 42;

                    ;% qbot_driver_v_1_22_P.countstorad_Gain
                    section.data(23).logicalSrcIdx = 57;
                    section.data(23).dtTransOffset = 48;

                    ;% qbot_driver_v_1_22_P.countsstorads_Gain
                    section.data(24).logicalSrcIdx = 58;
                    section.data(24).dtTransOffset = 49;

                    ;% qbot_driver_v_1_22_P.Memory_InitialCondition
                    section.data(25).logicalSrcIdx = 59;
                    section.data(25).dtTransOffset = 50;

                    ;% qbot_driver_v_1_22_P.Constant_Value_l
                    section.data(26).logicalSrcIdx = 60;
                    section.data(26).dtTransOffset = 51;

                    ;% qbot_driver_v_1_22_P.Constant1_Value
                    section.data(27).logicalSrcIdx = 61;
                    section.data(27).dtTransOffset = 52;

                    ;% qbot_driver_v_1_22_P.Constant2_Value
                    section.data(28).logicalSrcIdx = 62;
                    section.data(28).dtTransOffset = 53;

                    ;% qbot_driver_v_1_22_P.HILWatchdog_Timeout
                    section.data(29).logicalSrcIdx = 63;
                    section.data(29).dtTransOffset = 54;

                    ;% qbot_driver_v_1_22_P.Memory1_InitialCondition
                    section.data(30).logicalSrcIdx = 64;
                    section.data(30).dtTransOffset = 55;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainval
                    section.data(31).logicalSrcIdx = 65;
                    section.data(31).dtTransOffset = 56;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC
                    section.data(32).logicalSrcIdx = 66;
                    section.data(32).dtTransOffset = 57;

                    ;% qbot_driver_v_1_22_P.Kp_Value
                    section.data(33).logicalSrcIdx = 67;
                    section.data(33).dtTransOffset = 58;

                    ;% qbot_driver_v_1_22_P.Saturation_UpperSat
                    section.data(34).logicalSrcIdx = 68;
                    section.data(34).dtTransOffset = 59;

                    ;% qbot_driver_v_1_22_P.Saturation_LowerSat
                    section.data(35).logicalSrcIdx = 69;
                    section.data(35).dtTransOffset = 61;

                    ;% qbot_driver_v_1_22_P.Kd_Value
                    section.data(36).logicalSrcIdx = 70;
                    section.data(36).dtTransOffset = 63;

                    ;% qbot_driver_v_1_22_P.Saturation2_UpperSat
                    section.data(37).logicalSrcIdx = 71;
                    section.data(37).dtTransOffset = 64;

                    ;% qbot_driver_v_1_22_P.Saturation2_LowerSat
                    section.data(38).logicalSrcIdx = 72;
                    section.data(38).dtTransOffset = 66;

                    ;% qbot_driver_v_1_22_P.Constant1_Value_j
                    section.data(39).logicalSrcIdx = 73;
                    section.data(39).dtTransOffset = 68;

                    ;% qbot_driver_v_1_22_P.Constant_Value_o
                    section.data(40).logicalSrcIdx = 74;
                    section.data(40).dtTransOffset = 70;

                    ;% qbot_driver_v_1_22_P.Kp_Value_g
                    section.data(41).logicalSrcIdx = 75;
                    section.data(41).dtTransOffset = 72;

                    ;% qbot_driver_v_1_22_P.Memory1_InitialCondition_i
                    section.data(42).logicalSrcIdx = 76;
                    section.data(42).dtTransOffset = 73;

                    ;% qbot_driver_v_1_22_P.sampletime_WtEt
                    section.data(43).logicalSrcIdx = 77;
                    section.data(43).dtTransOffset = 74;

                    ;% qbot_driver_v_1_22_P.DelayInput2_InitialCondition
                    section.data(44).logicalSrcIdx = 78;
                    section.data(44).dtTransOffset = 75;

                    ;% qbot_driver_v_1_22_P.Memory2_InitialCondition
                    section.data(45).logicalSrcIdx = 79;
                    section.data(45).dtTransOffset = 76;

                    ;% qbot_driver_v_1_22_P.sampletime_WtEt_m
                    section.data(46).logicalSrcIdx = 80;
                    section.data(46).dtTransOffset = 77;

                    ;% qbot_driver_v_1_22_P.DelayInput2_InitialCondition_a
                    section.data(47).logicalSrcIdx = 81;
                    section.data(47).dtTransOffset = 78;

                    ;% qbot_driver_v_1_22_P.Saturation_UpperSat_j
                    section.data(48).logicalSrcIdx = 82;
                    section.data(48).dtTransOffset = 79;

                    ;% qbot_driver_v_1_22_P.Saturation_LowerSat_m
                    section.data(49).logicalSrcIdx = 83;
                    section.data(49).dtTransOffset = 81;

                    ;% qbot_driver_v_1_22_P.Integrator_IC
                    section.data(50).logicalSrcIdx = 84;
                    section.data(50).dtTransOffset = 83;

                    ;% qbot_driver_v_1_22_P.Integrator_UpperSat
                    section.data(51).logicalSrcIdx = 85;
                    section.data(51).dtTransOffset = 85;

                    ;% qbot_driver_v_1_22_P.Integrator_LowerSat
                    section.data(52).logicalSrcIdx = 86;
                    section.data(52).dtTransOffset = 87;

                    ;% qbot_driver_v_1_22_P.Constant2_Value_k
                    section.data(53).logicalSrcIdx = 87;
                    section.data(53).dtTransOffset = 89;

                    ;% qbot_driver_v_1_22_P.Memory_InitialCondition_a
                    section.data(54).logicalSrcIdx = 88;
                    section.data(54).dtTransOffset = 91;

                    ;% qbot_driver_v_1_22_P.Constant1_Value_k
                    section.data(55).logicalSrcIdx = 89;
                    section.data(55).dtTransOffset = 92;

                    ;% qbot_driver_v_1_22_P.PulseGenerator_Amp
                    section.data(56).logicalSrcIdx = 90;
                    section.data(56).dtTransOffset = 93;

                    ;% qbot_driver_v_1_22_P.PulseGenerator_Period
                    section.data(57).logicalSrcIdx = 91;
                    section.data(57).dtTransOffset = 94;

                    ;% qbot_driver_v_1_22_P.PulseGenerator_Duty
                    section.data(58).logicalSrcIdx = 92;
                    section.data(58).dtTransOffset = 95;

                    ;% qbot_driver_v_1_22_P.PulseGenerator_PhaseDelay
                    section.data(59).logicalSrcIdx = 93;
                    section.data(59).dtTransOffset = 96;

                    ;% qbot_driver_v_1_22_P.PulseGenerator1_Amp
                    section.data(60).logicalSrcIdx = 94;
                    section.data(60).dtTransOffset = 97;

                    ;% qbot_driver_v_1_22_P.PulseGenerator1_Period
                    section.data(61).logicalSrcIdx = 95;
                    section.data(61).dtTransOffset = 98;

                    ;% qbot_driver_v_1_22_P.PulseGenerator1_Duty
                    section.data(62).logicalSrcIdx = 96;
                    section.data(62).dtTransOffset = 99;

                    ;% qbot_driver_v_1_22_P.PulseGenerator1_PhaseDelay
                    section.data(63).logicalSrcIdx = 97;
                    section.data(63).dtTransOffset = 100;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainva_i
                    section.data(64).logicalSrcIdx = 98;
                    section.data(64).dtTransOffset = 101;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_b
                    section.data(65).logicalSrcIdx = 99;
                    section.data(65).dtTransOffset = 102;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainva_m
                    section.data(66).logicalSrcIdx = 100;
                    section.data(66).dtTransOffset = 103;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_n
                    section.data(67).logicalSrcIdx = 101;
                    section.data(67).dtTransOffset = 104;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_gainva_o
                    section.data(68).logicalSrcIdx = 102;
                    section.data(68).dtTransOffset = 105;

                    ;% qbot_driver_v_1_22_P.DiscreteTimeIntegrator_IC_nq
                    section.data(69).logicalSrcIdx = 103;
                    section.data(69).dtTransOffset = 106;

                    ;% qbot_driver_v_1_22_P.Ki_Value
                    section.data(70).logicalSrcIdx = 104;
                    section.data(70).dtTransOffset = 107;

                    ;% qbot_driver_v_1_22_P.Constant_Value_j
                    section.data(71).logicalSrcIdx = 105;
                    section.data(71).dtTransOffset = 108;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOWatchdog
                    section.data(1).logicalSrcIdx = 106;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.HILInitialize_EIInitial
                    section.data(2).logicalSrcIdx = 107;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POModes
                    section.data(3).logicalSrcIdx = 108;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POConfiguration
                    section.data(4).logicalSrcIdx = 109;
                    section.data(4).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POAlignment
                    section.data(5).logicalSrcIdx = 110;
                    section.data(5).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POPolarity
                    section.data(6).logicalSrcIdx = 111;
                    section.data(6).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_P.StreamServer_SndPriority
                    section.data(7).logicalSrcIdx = 112;
                    section.data(7).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_P.StreamServer_RcvPriority
                    section.data(8).logicalSrcIdx = 113;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.Print1_MaxUnits
                    section.data(1).logicalSrcIdx = 114;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.Print1_MaxUnits_l
                    section.data(2).logicalSrcIdx = 115;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_P.Print1_MaxUnits_n
                    section.data(3).logicalSrcIdx = 116;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_P.Print1_MaxUnits_m
                    section.data(4).logicalSrcIdx = 117;
                    section.data(4).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AIChannels
                    section.data(5).logicalSrcIdx = 118;
                    section.data(5).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DIChannels
                    section.data(6).logicalSrcIdx = 119;
                    section.data(6).dtTransOffset = 10;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOChannels
                    section.data(7).logicalSrcIdx = 120;
                    section.data(7).dtTransOffset = 23;

                    ;% qbot_driver_v_1_22_P.HILInitialize_EIChannels
                    section.data(8).logicalSrcIdx = 121;
                    section.data(8).dtTransOffset = 26;

                    ;% qbot_driver_v_1_22_P.HILInitialize_EIQuadrature
                    section.data(9).logicalSrcIdx = 122;
                    section.data(9).dtTransOffset = 28;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POChannels
                    section.data(10).logicalSrcIdx = 123;
                    section.data(10).dtTransOffset = 29;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOChannels
                    section.data(11).logicalSrcIdx = 124;
                    section.data(11).dtTransOffset = 31;

                    ;% qbot_driver_v_1_22_P.StreamServer_SndSize
                    section.data(12).logicalSrcIdx = 125;
                    section.data(12).dtTransOffset = 37;

                    ;% qbot_driver_v_1_22_P.StreamServer_RcvSize
                    section.data(13).logicalSrcIdx = 126;
                    section.data(13).dtTransOffset = 38;

                    ;% qbot_driver_v_1_22_P.StreamServer_SndFIFO
                    section.data(14).logicalSrcIdx = 127;
                    section.data(14).dtTransOffset = 39;

                    ;% qbot_driver_v_1_22_P.StreamServer_RcvFIFO
                    section.data(15).logicalSrcIdx = 128;
                    section.data(15).dtTransOffset = 40;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 44;
            section.data(44)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.Print1_Active
                    section.data(1).logicalSrcIdx = 129;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.Print1_Active_f
                    section.data(2).logicalSrcIdx = 130;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_P.Print1_Active_i
                    section.data(3).logicalSrcIdx = 131;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_P.Print1_Active_h
                    section.data(4).logicalSrcIdx = 132;
                    section.data(4).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_P.HILInitialize_Active
                    section.data(5).logicalSrcIdx = 133;
                    section.data(5).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AOTerminate
                    section.data(6).logicalSrcIdx = 134;
                    section.data(6).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AOExit
                    section.data(7).logicalSrcIdx = 135;
                    section.data(7).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOTerminate
                    section.data(8).logicalSrcIdx = 136;
                    section.data(8).dtTransOffset = 7;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOExit
                    section.data(9).logicalSrcIdx = 137;
                    section.data(9).dtTransOffset = 8;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POTerminate
                    section.data(10).logicalSrcIdx = 138;
                    section.data(10).dtTransOffset = 9;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POExit
                    section.data(11).logicalSrcIdx = 139;
                    section.data(11).dtTransOffset = 10;

                    ;% qbot_driver_v_1_22_P.HILInitialize_CKPStart
                    section.data(12).logicalSrcIdx = 140;
                    section.data(12).dtTransOffset = 11;

                    ;% qbot_driver_v_1_22_P.HILInitialize_CKPEnter
                    section.data(13).logicalSrcIdx = 141;
                    section.data(13).dtTransOffset = 12;

                    ;% qbot_driver_v_1_22_P.HILInitialize_CKStart
                    section.data(14).logicalSrcIdx = 142;
                    section.data(14).dtTransOffset = 13;

                    ;% qbot_driver_v_1_22_P.HILInitialize_CKEnter
                    section.data(15).logicalSrcIdx = 143;
                    section.data(15).dtTransOffset = 14;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AIPStart
                    section.data(16).logicalSrcIdx = 144;
                    section.data(16).dtTransOffset = 15;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AIPEnter
                    section.data(17).logicalSrcIdx = 145;
                    section.data(17).dtTransOffset = 16;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AOPStart
                    section.data(18).logicalSrcIdx = 146;
                    section.data(18).dtTransOffset = 17;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AOPEnter
                    section.data(19).logicalSrcIdx = 147;
                    section.data(19).dtTransOffset = 18;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AOStart
                    section.data(20).logicalSrcIdx = 148;
                    section.data(20).dtTransOffset = 19;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AOEnter
                    section.data(21).logicalSrcIdx = 149;
                    section.data(21).dtTransOffset = 20;

                    ;% qbot_driver_v_1_22_P.HILInitialize_AOReset
                    section.data(22).logicalSrcIdx = 150;
                    section.data(22).dtTransOffset = 21;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOPStart
                    section.data(23).logicalSrcIdx = 151;
                    section.data(23).dtTransOffset = 22;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOPEnter
                    section.data(24).logicalSrcIdx = 152;
                    section.data(24).dtTransOffset = 23;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOStart
                    section.data(25).logicalSrcIdx = 153;
                    section.data(25).dtTransOffset = 24;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOEnter
                    section.data(26).logicalSrcIdx = 154;
                    section.data(26).dtTransOffset = 25;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOReset
                    section.data(27).logicalSrcIdx = 155;
                    section.data(27).dtTransOffset = 26;

                    ;% qbot_driver_v_1_22_P.HILInitialize_EIPStart
                    section.data(28).logicalSrcIdx = 156;
                    section.data(28).dtTransOffset = 27;

                    ;% qbot_driver_v_1_22_P.HILInitialize_EIPEnter
                    section.data(29).logicalSrcIdx = 157;
                    section.data(29).dtTransOffset = 28;

                    ;% qbot_driver_v_1_22_P.HILInitialize_EIStart
                    section.data(30).logicalSrcIdx = 158;
                    section.data(30).dtTransOffset = 29;

                    ;% qbot_driver_v_1_22_P.HILInitialize_EIEnter
                    section.data(31).logicalSrcIdx = 159;
                    section.data(31).dtTransOffset = 30;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POPStart
                    section.data(32).logicalSrcIdx = 160;
                    section.data(32).dtTransOffset = 31;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POPEnter
                    section.data(33).logicalSrcIdx = 161;
                    section.data(33).dtTransOffset = 32;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POStart
                    section.data(34).logicalSrcIdx = 162;
                    section.data(34).dtTransOffset = 33;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POEnter
                    section.data(35).logicalSrcIdx = 163;
                    section.data(35).dtTransOffset = 34;

                    ;% qbot_driver_v_1_22_P.HILInitialize_POReset
                    section.data(36).logicalSrcIdx = 164;
                    section.data(36).dtTransOffset = 35;

                    ;% qbot_driver_v_1_22_P.HILInitialize_OOReset
                    section.data(37).logicalSrcIdx = 165;
                    section.data(37).dtTransOffset = 36;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOFinal
                    section.data(38).logicalSrcIdx = 166;
                    section.data(38).dtTransOffset = 37;

                    ;% qbot_driver_v_1_22_P.HILInitialize_DOInitial
                    section.data(39).logicalSrcIdx = 167;
                    section.data(39).dtTransOffset = 38;

                    ;% qbot_driver_v_1_22_P.HILRead_Active
                    section.data(40).logicalSrcIdx = 168;
                    section.data(40).dtTransOffset = 39;

                    ;% qbot_driver_v_1_22_P.HILWatchdog_Active
                    section.data(41).logicalSrcIdx = 169;
                    section.data(41).dtTransOffset = 40;

                    ;% qbot_driver_v_1_22_P.StreamServer_Active
                    section.data(42).logicalSrcIdx = 170;
                    section.data(42).dtTransOffset = 41;

                    ;% qbot_driver_v_1_22_P.HILWrite_Active
                    section.data(43).logicalSrcIdx = 171;
                    section.data(43).dtTransOffset = 42;

                    ;% qbot_driver_v_1_22_P.Memory1_InitialCondition_p
                    section.data(44).logicalSrcIdx = 172;
                    section.data(44).dtTransOffset = 43;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.StreamServer_Optimize
                    section.data(1).logicalSrcIdx = 173;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.StreamServer_Implementation
                    section.data(2).logicalSrcIdx = 174;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_P.StreamServer_URI
                    section.data(1).logicalSrcIdx = 175;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_P.StreamServer_Endian
                    section.data(2).logicalSrcIdx = 176;
                    section.data(2).dtTransOffset = 24;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
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
        nTotSects     = 9;
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
        ;% Auto data (qbot_driver_v_1_22_B)
        ;%
            section.nData     = 35;
            section.data(35)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.HILRead_o1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_B.HILRead_o3
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_B.HILRead_o4
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 14;

                    ;% qbot_driver_v_1_22_B.TmpSignalConversionAtStreamServ
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 23;

                    ;% qbot_driver_v_1_22_B.StreamServer_o4
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 40;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 50;

                    ;% qbot_driver_v_1_22_B.Switch
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 51;

                    ;% qbot_driver_v_1_22_B.DifferenceInputs2
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 53;

                    ;% qbot_driver_v_1_22_B.DifferenceInputs2_n
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 54;

                    ;% qbot_driver_v_1_22_B.Kp_out
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 55;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion_n
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 57;

                    ;% qbot_driver_v_1_22_B.Switch2
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 58;

                    ;% qbot_driver_v_1_22_B.Memory
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 60;

                    ;% qbot_driver_v_1_22_B.Divide
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 61;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion1
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 63;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion2
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 64;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion_l
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 65;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion_j
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 66;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion_m
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 67;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion_i
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 68;

                    ;% qbot_driver_v_1_22_B.DataTypeConversion3
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 69;

                    ;% qbot_driver_v_1_22_B.Product
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 70;

                    ;% qbot_driver_v_1_22_B.achievedsampletime
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 72;

                    ;% qbot_driver_v_1_22_B.targetsampletime
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 73;

                    ;% qbot_driver_v_1_22_B.computationtime
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 74;

                    ;% qbot_driver_v_1_22_B.measurementrad
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 75;

                    ;% qbot_driver_v_1_22_B.Trigger
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 77;

                    ;% qbot_driver_v_1_22_B.Trigger_g
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 78;

                    ;% qbot_driver_v_1_22_B.Trigger_f
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 79;

                    ;% qbot_driver_v_1_22_B.Trigger_l
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 80;

                    ;% qbot_driver_v_1_22_B.bat_voltage
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 81;

                    ;% qbot_driver_v_1_22_B.bat_voltage_percentage
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 82;

                    ;% qbot_driver_v_1_22_B.low_battery
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 83;

                    ;% qbot_driver_v_1_22_B.stop
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 84;

                    ;% qbot_driver_v_1_22_B.In1
                    section.data(35).logicalSrcIdx = 39;
                    section.data(35).dtTransOffset = 85;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.StreamServer_o2
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_B.Print1_o2
                    section.data(2).logicalSrcIdx = 41;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_B.Print1_o2_o
                    section.data(3).logicalSrcIdx = 42;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_B.Print1_o2_n
                    section.data(4).logicalSrcIdx = 43;
                    section.data(4).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_B.Print1_o2_c
                    section.data(5).logicalSrcIdx = 44;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.StreamServer_o1
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.HILWatchdog
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_B.StreamServer_o5
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_B.LogicalOperator
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_B.AND
                    section.data(4).logicalSrcIdx = 49;
                    section.data(4).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_B.AND1
                    section.data(5).logicalSrcIdx = 50;
                    section.data(5).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_B.AND2
                    section.data(6).logicalSrcIdx = 51;
                    section.data(6).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_B.OR2
                    section.data(7).logicalSrcIdx = 52;
                    section.data(7).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_B.LogicalOperator_n
                    section.data(8).logicalSrcIdx = 53;
                    section.data(8).dtTransOffset = 7;

                    ;% qbot_driver_v_1_22_B.NOT
                    section.data(9).logicalSrcIdx = 54;
                    section.data(9).dtTransOffset = 8;

                    ;% qbot_driver_v_1_22_B.LogicalOperator_d
                    section.data(10).logicalSrcIdx = 55;
                    section.data(10).dtTransOffset = 9;

                    ;% qbot_driver_v_1_22_B.LogicalOperator_k
                    section.data(11).logicalSrcIdx = 56;
                    section.data(11).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction2_f.upperRate
                    section.data(1).logicalSrcIdx = 57;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction2_f.lowerRate
                    section.data(2).logicalSrcIdx = 58;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction2_f.upperSat
                    section.data(3).logicalSrcIdx = 59;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction2_f.lowerSat
                    section.data(4).logicalSrcIdx = 60;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction1_b.upperRate
                    section.data(1).logicalSrcIdx = 61;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction1_b.lowerRate
                    section.data(2).logicalSrcIdx = 62;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction1_b.upperSat
                    section.data(3).logicalSrcIdx = 63;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction1_b.lowerSat
                    section.data(4).logicalSrcIdx = 64;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction3.y
                    section.data(1).logicalSrcIdx = 65;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction2.y
                    section.data(1).logicalSrcIdx = 66;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_B.sf_MATLABFunction1.y
                    section.data(1).logicalSrcIdx = 67;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(9) = section;
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
        nTotSects     = 26;
        sectIdxOffset = 9;

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
        ;% Auto data (qbot_driver_v_1_22_DW)
        ;%
            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.Time_Timeout
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_DW.SampleTime_PreviousTime
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_DW.ComputationTime_BeginTime
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_DW.ComputationTime_ComputationTime
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.DelayInput1_DSTATE
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE
                    section.data(2).logicalSrcIdx = 5;
                    section.data(2).dtTransOffset = 17;

                    ;% qbot_driver_v_1_22_DW.DelayInput2_DSTATE
                    section.data(3).logicalSrcIdx = 6;
                    section.data(3).dtTransOffset = 18;

                    ;% qbot_driver_v_1_22_DW.DelayInput2_DSTATE_b
                    section.data(4).logicalSrcIdx = 7;
                    section.data(4).dtTransOffset = 19;

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_n
                    section.data(5).logicalSrcIdx = 8;
                    section.data(5).dtTransOffset = 20;

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_h
                    section.data(6).logicalSrcIdx = 9;
                    section.data(6).dtTransOffset = 21;

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_DSTATE_i
                    section.data(7).logicalSrcIdx = 10;
                    section.data(7).dtTransOffset = 22;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_FilterFrequency
                    section.data(8).logicalSrcIdx = 11;
                    section.data(8).dtTransOffset = 23;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_POSortedFreqs
                    section.data(9).logicalSrcIdx = 12;
                    section.data(9).dtTransOffset = 25;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_POValues
                    section.data(10).logicalSrcIdx = 13;
                    section.data(10).dtTransOffset = 27;

                    ;% qbot_driver_v_1_22_DW.Memory_PreviousInput
                    section.data(11).logicalSrcIdx = 14;
                    section.data(11).dtTransOffset = 29;

                    ;% qbot_driver_v_1_22_DW.Memory1_PreviousInput
                    section.data(12).logicalSrcIdx = 15;
                    section.data(12).dtTransOffset = 31;

                    ;% qbot_driver_v_1_22_DW.Memory1_PreviousInput_c
                    section.data(13).logicalSrcIdx = 16;
                    section.data(13).dtTransOffset = 32;

                    ;% qbot_driver_v_1_22_DW.Memory2_PreviousInput
                    section.data(14).logicalSrcIdx = 17;
                    section.data(14).dtTransOffset = 33;

                    ;% qbot_driver_v_1_22_DW.Memory_PreviousInput_d
                    section.data(15).logicalSrcIdx = 18;
                    section.data(15).dtTransOffset = 34;

                    ;% qbot_driver_v_1_22_DW.flag
                    section.data(16).logicalSrcIdx = 19;
                    section.data(16).dtTransOffset = 35;

                    ;% qbot_driver_v_1_22_DW.mindset
                    section.data(17).logicalSrcIdx = 20;
                    section.data(17).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.StreamServer_Stream
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.HILRead_PWORK
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_DW.HILWatchdog_PWORK
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_DW.Scope_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_DW.HILWrite_PWORK
                    section.data(4).logicalSrcIdx = 26;
                    section.data(4).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_DW.MissedSamples_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 27;
                    section.data(5).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_DW.Scope1_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 28;
                    section.data(6).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_DW.Scope_PWORK_g.LoggedData
                    section.data(7).logicalSrcIdx = 29;
                    section.data(7).dtTransOffset = 7;

                    ;% qbot_driver_v_1_22_DW.Scope_PWORK_i.LoggedData
                    section.data(8).logicalSrcIdx = 30;
                    section.data(8).dtTransOffset = 8;

                    ;% qbot_driver_v_1_22_DW.Scope_PWORK_l.LoggedData
                    section.data(9).logicalSrcIdx = 31;
                    section.data(9).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.HILInitialize_DOStates
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_QuadratureModes
                    section.data(2).logicalSrcIdx = 33;
                    section.data(2).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_InitialEICounts
                    section.data(3).logicalSrcIdx = 34;
                    section.data(3).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_POModeValues
                    section.data(4).logicalSrcIdx = 35;
                    section.data(4).dtTransOffset = 7;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_POAlignValues
                    section.data(5).logicalSrcIdx = 36;
                    section.data(5).dtTransOffset = 9;

                    ;% qbot_driver_v_1_22_DW.HILInitialize_POPolarityVals
                    section.data(6).logicalSrcIdx = 37;
                    section.data(6).dtTransOffset = 11;

                    ;% qbot_driver_v_1_22_DW.HILRead_EncoderBuffer
                    section.data(7).logicalSrcIdx = 38;
                    section.data(7).dtTransOffset = 13;

                    ;% qbot_driver_v_1_22_DW.clockTickCounter
                    section.data(8).logicalSrcIdx = 39;
                    section.data(8).dtTransOffset = 15;

                    ;% qbot_driver_v_1_22_DW.clockTickCounter_p
                    section.data(9).logicalSrcIdx = 40;
                    section.data(9).dtTransOffset = 16;

                    ;% qbot_driver_v_1_22_DW.sfEvent
                    section.data(10).logicalSrcIdx = 41;
                    section.data(10).dtTransOffset = 17;

                    ;% qbot_driver_v_1_22_DW.sfEvent_o
                    section.data(11).logicalSrcIdx = 42;
                    section.data(11).dtTransOffset = 18;

                    ;% qbot_driver_v_1_22_DW.sfEvent_m
                    section.data(12).logicalSrcIdx = 43;
                    section.data(12).dtTransOffset = 19;

                    ;% qbot_driver_v_1_22_DW.sfEvent_mu
                    section.data(13).logicalSrcIdx = 44;
                    section.data(13).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.HILInitialize_POSortedChans
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRese
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_m
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_a
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_DW.DiscreteTimeIntegrator_PrevRe_f
                    section.data(4).logicalSrcIdx = 49;
                    section.data(4).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_DW.findholdcommand_SubsysRanBC
                    section.data(5).logicalSrcIdx = 50;
                    section.data(5).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_DW.WatchdogexpiryError_SubsysRanBC
                    section.data(6).logicalSrcIdx = 51;
                    section.data(6).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_DW.StallOvercurrentError_SubsysRan
                    section.data(7).logicalSrcIdx = 52;
                    section.data(7).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_DW.LowBatteryWarning_SubsysRanBC
                    section.data(8).logicalSrcIdx = 53;
                    section.data(8).dtTransOffset = 7;

                    ;% qbot_driver_v_1_22_DW.LowBatteryError_SubsysRanBC
                    section.data(9).logicalSrcIdx = 54;
                    section.data(9).dtTransOffset = 8;

                    ;% qbot_driver_v_1_22_DW.LockModeonConnection_SubsysRanB
                    section.data(10).logicalSrcIdx = 55;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.is_active_c5_qbot_driver_v_1_22
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_DW.is_active_c9_qbot_driver_v_1_22
                    section.data(2).logicalSrcIdx = 57;
                    section.data(2).dtTransOffset = 1;

                    ;% qbot_driver_v_1_22_DW.is_active_c14_qbot_driver_v_1_2
                    section.data(3).logicalSrcIdx = 58;
                    section.data(3).dtTransOffset = 2;

                    ;% qbot_driver_v_1_22_DW.is_active_c7_qbot_driver_v_1_22
                    section.data(4).logicalSrcIdx = 59;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.HILInitialize_DOBits
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

                    ;% qbot_driver_v_1_22_DW.HILWatchdog_IsStarted
                    section.data(2).logicalSrcIdx = 61;
                    section.data(2).dtTransOffset = 3;

                    ;% qbot_driver_v_1_22_DW.Time_Owner
                    section.data(3).logicalSrcIdx = 62;
                    section.data(3).dtTransOffset = 4;

                    ;% qbot_driver_v_1_22_DW.Memory1_PreviousInput_e
                    section.data(4).logicalSrcIdx = 63;
                    section.data(4).dtTransOffset = 5;

                    ;% qbot_driver_v_1_22_DW.doneDoubleBufferReInit
                    section.data(5).logicalSrcIdx = 64;
                    section.data(5).dtTransOffset = 6;

                    ;% qbot_driver_v_1_22_DW.doneDoubleBufferReInit_n
                    section.data(6).logicalSrcIdx = 65;
                    section.data(6).dtTransOffset = 7;

                    ;% qbot_driver_v_1_22_DW.doneDoubleBufferReInit_ne
                    section.data(7).logicalSrcIdx = 66;
                    section.data(7).dtTransOffset = 8;

                    ;% qbot_driver_v_1_22_DW.flag_not_empty
                    section.data(8).logicalSrcIdx = 67;
                    section.data(8).dtTransOffset = 9;

                    ;% qbot_driver_v_1_22_DW.mindset_not_empty
                    section.data(9).logicalSrcIdx = 68;
                    section.data(9).dtTransOffset = 10;

                    ;% qbot_driver_v_1_22_DW.doneDoubleBufferReInit_o
                    section.data(10).logicalSrcIdx = 69;
                    section.data(10).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.HILRead_DigitalBuffer
                    section.data(1).logicalSrcIdx = 70;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction2_f.sfEvent
                    section.data(1).logicalSrcIdx = 71;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction2_f.is_active_c2_qbot_driver_v_1_22
                    section.data(1).logicalSrcIdx = 72;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction2_f.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 73;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction1_b.sfEvent
                    section.data(1).logicalSrcIdx = 74;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction1_b.is_active_c2_qbot_driver_v_1_22
                    section.data(1).logicalSrcIdx = 75;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction1_b.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 76;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction3.sfEvent
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction3.is_active_c1_qbot_driver_v_1_22
                    section.data(1).logicalSrcIdx = 78;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction3.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 79;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction2.sfEvent
                    section.data(1).logicalSrcIdx = 80;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction2.is_active_c1_qbot_driver_v_1_22
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction2.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 82;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(23) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction1.sfEvent
                    section.data(1).logicalSrcIdx = 83;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(24) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction1.is_active_c1_qbot_driver_v_1_22
                    section.data(1).logicalSrcIdx = 84;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(25) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% qbot_driver_v_1_22_DW.sf_MATLABFunction1.doneDoubleBufferReInit
                    section.data(1).logicalSrcIdx = 85;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(26) = section;
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


    targMap.checksum0 = 434559125;
    targMap.checksum1 = 3862163821;
    targMap.checksum2 = 3338888771;
    targMap.checksum3 = 2539258653;

