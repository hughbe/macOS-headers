//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _DPDataRecorder><_DPDataRecorderKeyProperties;

@interface _DPWordRecorder : NSObject
{
    unsigned long long _wordFragmentWidth;
    id <_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <_DPDataRecorder><_DPDataRecorderKeyProperties> recorder; // @synthesize recorder=_recorder;
@property(readonly, nonatomic) unsigned long long wordFragmentWidth; // @synthesize wordFragmentWidth=_wordFragmentWidth;
- (id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3;
- (id)description;
- (BOOL)record:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

