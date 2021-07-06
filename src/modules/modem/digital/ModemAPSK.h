// Copyright (c) Charles J. Cliffe
// SPDX-License-Identifier: GPL-2.0+

#pragma once
#include "ModemDigital.h"

class ModemAPSK : public ModemDigital {
public:
    ModemAPSK();
    ~ModemAPSK() override;

    std::string getName() override;
    
    static ModemBase *factory();

    ModemArgInfoList getSettings() override;
    void writeSetting(std::string setting, std::string value) override;
    std::string readSetting(std::string setting) override;

    void updateDemodulatorCons(int cons_in);
    void demodulate(ModemKit *kit, ModemIQData *input, AudioThreadInput *audioOut) override;
    
private:
    int cons;
    modem demodAPSK;
    modem demodAPSK4;
    modem demodAPSK8;
    modem demodAPSK16;
    modem demodAPSK32;
    modem demodAPSK64;
    modem demodAPSK128;
    modem demodAPSK256;
};
