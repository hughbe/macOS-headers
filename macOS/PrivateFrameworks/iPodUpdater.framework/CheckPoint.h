//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CheckPoint : NSObject
{
    unsigned int _service;
    NSDictionary *_checkpointDict;
    int _method;
}

+ (int)preferredCheckPointMethodForService:(unsigned int)arg1;
- (void)readCheckPointDataUsingMethod:(int)arg1;
- (int)checkPointDataGSC:(char **)arg1;
- (unsigned short)desiredShroudSize;
- (unsigned short)maxFirmwareWriteBlocks;
- (int)updateMethod;
- (BOOL)supportsShroudedFailureRetry;
- (BOOL)supportsBreadcrumbs;
- (BOOL)supportsSelfFormat;
- (BOOL)showingBangFolder;
- (int)connectionType;
- (BOOL)rebootsAfterEject;
- (BOOL)hasPowerToFlash;
- (BOOL)supportsFlashBacklight;
- (unsigned long long)RAM;
- (BOOL)supportsHibernation;
- (BOOL)supportsMultipleDiskFormats;
- (int)diskHeaderFormat;
- (int)diskFormat;
- (int)updaterFamilyID;
- (int)podFamilyID;
- (id)firmwareVersion;
- (unsigned int)userVisibleFirmwareVersion;
- (id)userVisibleFirmwareVersionString;
- (id)firewireGUID;
- (id)serialNumber;
- (int)checkPointMethod;
- (void)dealloc;
- (id)initWithService:(unsigned int)arg1 usingMethod:(int)arg2;

@end

