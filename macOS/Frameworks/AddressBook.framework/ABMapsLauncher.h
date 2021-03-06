//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABMapsLaunchRequest;

@interface ABMapsLauncher : NSObject
{
    ABMapsLaunchRequest *_launchRequest;
    ABMapsLauncher *_nextLauncher;
}

+ (id)mapsLauncherWithRequest:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ABMapsLauncher *nextLauncher; // @synthesize nextLauncher=_nextLauncher;
@property(readonly, nonatomic) ABMapsLaunchRequest *launchRequest; // @synthesize launchRequest=_launchRequest;
- (void)launchMaps;
- (id)initWithLaunchRequest:(id)arg1 nextLauncher:(id)arg2;
- (id)initWithLaunchRequest:(id)arg1;
- (id)init;

@end

