//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserModelMetricsDescriptor.h>

@class NSString;

@interface TIUserModelSettingValueDescriptor : TIUserModelMetricsDescriptor
{
    NSString *_settingName;
}

+ (id)configureSettingsValueDescriptors;
- (void).cxx_destruct;
@property(retain) NSString *settingName; // @synthesize settingName=_settingName;
- (id)initWithValueName:(id)arg1 settingName:(id)arg2;

@end

