//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSDictionary;

@interface DGFusionOperation : DGOperation
{
    NSDictionary *_alignmentParams;
}

+ (id)attributes;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *alignmentParams; // @synthesize alignmentParams=_alignmentParams;
- (id)settingsDictionary;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (BOOL)isMigratable;

@end

