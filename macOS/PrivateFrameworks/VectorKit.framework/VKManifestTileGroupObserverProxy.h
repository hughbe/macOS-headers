//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOExperimentConfigurationObserver-Protocol.h>
#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    function_288b8140 _willChangeActiveTileGroup;
    function_3dbef162 _didChangeActiveTileGroup;
    function_d50775c7 _experimentConfigurationDidChange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property function_d50775c7 experimentConfigurationDidChange; // @synthesize experimentConfigurationDidChange=_experimentConfigurationDidChange;
@property function_3dbef162 didChangeActiveTileGroup; // @synthesize didChangeActiveTileGroup=_didChangeActiveTileGroup;
@property function_288b8140 willChangeActiveTileGroup; // @synthesize willChangeActiveTileGroup=_willChangeActiveTileGroup;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

