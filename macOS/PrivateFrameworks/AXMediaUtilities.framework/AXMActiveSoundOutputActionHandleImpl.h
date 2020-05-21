//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMActiveSoundOutputActionHandleProvider-Protocol.h>

@class AXMActiveSound, AXMSoundComponent, NSString;

@interface AXMActiveSoundOutputActionHandleImpl : NSObject <AXMActiveSoundOutputActionHandleProvider>
{
    float _rate;
    float _pitch;
    AXMActiveSound *_activeSound;
    AXMSoundComponent *_soundComponent;
}

- (void).cxx_destruct;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak AXMSoundComponent *soundComponent; // @synthesize soundComponent=_soundComponent;
@property(nonatomic) __weak AXMActiveSound *activeSound; // @synthesize activeSound=_activeSound;
- (void)stop;
- (void)setQuantizedRate:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

