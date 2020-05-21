//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaExperience/FigRoutingContextFactory-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FigResilientRemoteRoutingContextFactory : NSObject <FigRoutingContextFactory>
{
}

- (int)copyDefaultContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemRemotePoolContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createVideoContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createControlChannelOnlyContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createRemoteMusicControllerContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createPerAppSecondDisplayContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createAudioContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemMusicContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemMirroringContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemAudioContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copyDisplayMenuVideoContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copyContextForUUIDWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

