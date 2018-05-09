// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include <util/log.h>

#include "SceNgs.h"

EXPORT(int, sceNgsAT9GetSectionDetails) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsModuleGetNumPresets) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsModuleGetPreset) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsPatchCreateRouting) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsPatchGetInfo) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsPatchRemoveRouting) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsRackGetRequiredMemorySize, uint32_t hSysHandle, void *unk, uint32_t *size) {
    *size = 1;
    LOG_WARN("Stubbed sceNgsRackGetRequiredMemorySize called (size = 1)");
    return 0;
}

EXPORT(int, sceNgsRackGetVoiceHandle) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsRackInit) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsRackRelease) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsRackSetParamErrorCallback) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsSystemGetRequiredMemorySize, void *params, uint32_t *size) {
    *size = 1;
    LOG_WARN("Stubbed sceNgsSystemGetRequiredMemorySize called (size = 1)");
    return 0;
}

EXPORT(int, sceNgsSystemInit) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsSystemLock) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsSystemRelease) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsSystemSetFlags) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsSystemSetParamErrorCallback) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsSystemUnlock) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsSystemUpdate) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceBypassModule) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetAtrac9Voice) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetCompressorBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetCompressorSideChainBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetDelayBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetDistortionBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetEnvelopeBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetEqBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetMasterBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetMixerBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetPauserBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetPitchShiftBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetReverbBuss) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetSasEmuVoice) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetScreamAtrac9Voice) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetScreamVoice) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetSimpleAtrac9Voice) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetSimpleVoice) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceDefGetTemplate1) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceGetInfo) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceGetModuleBypass) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceGetModuleType) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceGetOutputPatch) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceGetParamsOutOfRange) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceGetStateData) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceInit) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceKeyOff) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceKill) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceLockParams) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoicePatchSetVolume) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoicePatchSetVolumes) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoicePatchSetVolumesMatrix) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoicePause) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoicePlay) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceResume) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceSetFinishedCallback) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceSetModuleCallback) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceSetParamsBlock) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceSetPreset) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceNgsVoiceUnlockParams) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsGetDefaultConfig) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsGetNeededMemory) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsInit) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsSetRackName) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsSetSampleName) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsSetSynthName) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsSetVoiceName) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsShutdown) {
    return UNIMPLEMENTED();
}

EXPORT(int, sceSulphaNgsTrace) {
    return UNIMPLEMENTED();
}

BRIDGE_IMPL(sceNgsAT9GetSectionDetails)
BRIDGE_IMPL(sceNgsModuleGetNumPresets)
BRIDGE_IMPL(sceNgsModuleGetPreset)
BRIDGE_IMPL(sceNgsPatchCreateRouting)
BRIDGE_IMPL(sceNgsPatchGetInfo)
BRIDGE_IMPL(sceNgsPatchRemoveRouting)
BRIDGE_IMPL(sceNgsRackGetRequiredMemorySize)
BRIDGE_IMPL(sceNgsRackGetVoiceHandle)
BRIDGE_IMPL(sceNgsRackInit)
BRIDGE_IMPL(sceNgsRackRelease)
BRIDGE_IMPL(sceNgsRackSetParamErrorCallback)
BRIDGE_IMPL(sceNgsSystemGetRequiredMemorySize)
BRIDGE_IMPL(sceNgsSystemInit)
BRIDGE_IMPL(sceNgsSystemLock)
BRIDGE_IMPL(sceNgsSystemRelease)
BRIDGE_IMPL(sceNgsSystemSetFlags)
BRIDGE_IMPL(sceNgsSystemSetParamErrorCallback)
BRIDGE_IMPL(sceNgsSystemUnlock)
BRIDGE_IMPL(sceNgsSystemUpdate)
BRIDGE_IMPL(sceNgsVoiceBypassModule)
BRIDGE_IMPL(sceNgsVoiceDefGetAtrac9Voice)
BRIDGE_IMPL(sceNgsVoiceDefGetCompressorBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetCompressorSideChainBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetDelayBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetDistortionBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetEnvelopeBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetEqBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetMasterBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetMixerBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetPauserBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetPitchShiftBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetReverbBuss)
BRIDGE_IMPL(sceNgsVoiceDefGetSasEmuVoice)
BRIDGE_IMPL(sceNgsVoiceDefGetScreamAtrac9Voice)
BRIDGE_IMPL(sceNgsVoiceDefGetScreamVoice)
BRIDGE_IMPL(sceNgsVoiceDefGetSimpleAtrac9Voice)
BRIDGE_IMPL(sceNgsVoiceDefGetSimpleVoice)
BRIDGE_IMPL(sceNgsVoiceDefGetTemplate1)
BRIDGE_IMPL(sceNgsVoiceGetInfo)
BRIDGE_IMPL(sceNgsVoiceGetModuleBypass)
BRIDGE_IMPL(sceNgsVoiceGetModuleType)
BRIDGE_IMPL(sceNgsVoiceGetOutputPatch)
BRIDGE_IMPL(sceNgsVoiceGetParamsOutOfRange)
BRIDGE_IMPL(sceNgsVoiceGetStateData)
BRIDGE_IMPL(sceNgsVoiceInit)
BRIDGE_IMPL(sceNgsVoiceKeyOff)
BRIDGE_IMPL(sceNgsVoiceKill)
BRIDGE_IMPL(sceNgsVoiceLockParams)
BRIDGE_IMPL(sceNgsVoicePatchSetVolume)
BRIDGE_IMPL(sceNgsVoicePatchSetVolumes)
BRIDGE_IMPL(sceNgsVoicePatchSetVolumesMatrix)
BRIDGE_IMPL(sceNgsVoicePause)
BRIDGE_IMPL(sceNgsVoicePlay)
BRIDGE_IMPL(sceNgsVoiceResume)
BRIDGE_IMPL(sceNgsVoiceSetFinishedCallback)
BRIDGE_IMPL(sceNgsVoiceSetModuleCallback)
BRIDGE_IMPL(sceNgsVoiceSetParamsBlock)
BRIDGE_IMPL(sceNgsVoiceSetPreset)
BRIDGE_IMPL(sceNgsVoiceUnlockParams)
BRIDGE_IMPL(sceSulphaNgsGetDefaultConfig)
BRIDGE_IMPL(sceSulphaNgsGetNeededMemory)
BRIDGE_IMPL(sceSulphaNgsInit)
BRIDGE_IMPL(sceSulphaNgsSetRackName)
BRIDGE_IMPL(sceSulphaNgsSetSampleName)
BRIDGE_IMPL(sceSulphaNgsSetSynthName)
BRIDGE_IMPL(sceSulphaNgsSetVoiceName)
BRIDGE_IMPL(sceSulphaNgsShutdown)
BRIDGE_IMPL(sceSulphaNgsTrace)
