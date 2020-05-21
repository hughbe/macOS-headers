//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCSpatialAudioIOController : NSObject <VCAudioIOControllerControl>
{
}

- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)updateClient:(id)arg1;
- (void)stopClient:(id)arg1;
- (void)startClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

