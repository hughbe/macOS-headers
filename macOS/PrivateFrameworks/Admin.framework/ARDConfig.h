//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARDConfig : NSObject
{
}

+ (id)sharedARDConfig;
- (void)writeVNCPassword:(id)arg1;
- (void)setScreenSharingEnabled:(BOOL)arg1;
- (BOOL)isScreenSharingOn;
- (void)setARDEnabled:(BOOL)arg1;
- (BOOL)isARDOn;

@end

