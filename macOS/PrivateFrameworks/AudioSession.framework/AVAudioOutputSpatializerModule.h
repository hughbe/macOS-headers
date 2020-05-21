//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioSession/AVAudioOutputSpatializing-Protocol.h>

@class NSArray, NSString;

@interface AVAudioOutputSpatializerModule : NSObject <AVAudioOutputSpatializing>
{
}

- (BOOL)setFormat:(id)arg1 error:(id *)arg2;
- (id)format;
@property(readonly, nonatomic) NSArray *availableVirtualFormats;
- (BOOL)enable:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

