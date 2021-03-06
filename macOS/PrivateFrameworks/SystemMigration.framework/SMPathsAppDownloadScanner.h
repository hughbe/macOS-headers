//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, SMPaths, SMSystem_Daemon;
@protocol OS_dispatch_queue;

@interface SMPathsAppDownloadScanner : NSObject
{
    BOOL _scanned;
    NSSet *_systemAppDownloadBundles;
    NSMutableDictionary *_userAppDownloadBundles;
    SMPaths *_pather;
    SMSystem_Daemon *_system;
    NSObject<OS_dispatch_queue> *_scanQueue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *scanQueue; // @synthesize scanQueue=_scanQueue;
@property BOOL scanned; // @synthesize scanned=_scanned;
@property(retain) SMSystem_Daemon *system; // @synthesize system=_system;
@property(retain) SMPaths *pather; // @synthesize pather=_pather;
@property(retain) NSMutableDictionary *userAppDownloadBundles; // @synthesize userAppDownloadBundles=_userAppDownloadBundles;
@property(retain) NSSet *systemAppDownloadBundles; // @synthesize systemAppDownloadBundles=_systemAppDownloadBundles;
- (id)scanForApplicationsAt:(id)arg1 useRelativePaths:(BOOL)arg2;
- (void)scanForApplications;
- (id)initWithPather:(id)arg1 onSystem:(id)arg2;

@end

