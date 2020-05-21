//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, MiroAutoEditor, MiroMemory, NSSet, NSString, PHAsset, VEKBlueprint, VEKExportController, VEKProgressWatcher;

__attribute__((visibility("hidden")))
@interface VEKProduction_MiroMemory_Bridge : NSObject
{
    VEKBlueprint *_blueprint;
    NSSet *_suggestions;
    NSString *_songID;
    MiroMemory *_memory;
    AVPlayerItem *_playerItem;
    MiroAutoEditor *_autoEditor;
    VEKProgressWatcher *_watcherProperty;
    VEKExportController *_exportController;
    unsigned long long _nonLocalPickedAssetCount;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long nonLocalPickedAssetCount; // @synthesize nonLocalPickedAssetCount=_nonLocalPickedAssetCount;
@property(retain, nonatomic) VEKExportController *exportController; // @synthesize exportController=_exportController;
@property(retain) VEKProgressWatcher *watcherProperty; // @synthesize watcherProperty=_watcherProperty;
@property(retain) MiroAutoEditor *autoEditor; // @synthesize autoEditor=_autoEditor;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) MiroMemory *memory; // @synthesize memory=_memory;
@property(retain, nonatomic) NSString *songID; // @synthesize songID=_songID;
@property(retain, nonatomic) NSSet *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) VEKBlueprint *blueprint; // @synthesize blueprint=_blueprint;
- (void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3;
- (void)didFinishExport;
- (void)setVolume:(long long)arg1 forClip:(id)arg2;
- (void)setRangeOfInterest:(CDStruct_e83c9415)arg1 forClip:(id)arg2;
- (void)removeClip:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (double)maximumDuration;
@property(retain, nonatomic) PHAsset *keyAsset;
- (id)dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;
- (void)updateBlueprintOnMemory;
- (void)updateSuggestionsOnMemory;
- (double)maxDuration;
- (long long)pickedItemCount;
- (BOOL)isPending;
- (id)memoryViewedDate;
- (id)requestedMood;
@property(nonatomic) double requestedDuration;
- (long long)moodForMoodID:(id)arg1;
- (id)moodIDForMood:(long long)arg1;
- (id)moodIDmap;
- (void)_exportProject:(id)arg1 presets:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)exportWithPresets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fudgedDownloadInfo;
- (void)setupDownloadHandler;
- (void)updateNonLocalPickedAssetCount;
- (id)fudgedDurationInfo;
- (void)playerItemWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateProjectWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateProjectWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetCollection:(id)arg1;

@end

