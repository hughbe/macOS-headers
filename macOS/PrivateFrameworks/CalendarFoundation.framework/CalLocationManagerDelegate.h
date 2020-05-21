//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSString;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    CLLocation *_currentLocation;
    CDUnknownBlockType _completionBlock;
    CLLocationManager *_manager;
    NSString *_currentBundleID;
    BOOL _didFinish;
}

- (void).cxx_destruct;
@property BOOL didFinish; // @synthesize didFinish=_didFinish;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)timeout;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)dealloc;
- (id)initWithCurrentBundleID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

