//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBApplication.h>

@class NSArray, NSString, _AMiPhoto6Album;

@interface _AMiPhoto6Application : SBApplication
{
}

+ (id)application;
- (void)quitSaving:(int)arg1;
- (void)print:(id)arg1 printDialog:(BOOL)arg2 withProperties:(id)arg3;
- (id)open:(id)arg1;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL frontmost;
- (id)windows;
- (id)documents;
- (id)codesForPropertyNames;
- (id)classNamesForCodes;
@property int view;
@property(readonly, copy) _AMiPhoto6Album *trashAlbum;
@property(readonly) long long slideshowRunning;
@property(readonly, copy) NSArray *sharedLibraryAlbums;
@property(copy) NSArray *selection;
@property(readonly, copy) _AMiPhoto6Album *photoLibraryAlbum;
@property(copy) NSString *mailSubject;
@property(copy) NSString *mailRecipient;
@property(copy) NSString *mailAddress;
@property(readonly, copy) NSArray *localRootAlbums;
@property(readonly, copy) _AMiPhoto6Album *lastRollsAlbum;
@property(readonly, copy) _AMiPhoto6Album *lastMonthsAlbum;
@property(readonly) long long importing;
@property(copy) _AMiPhoto6Album *currentAlbum;
- (id)photos;
- (id)keywords;
- (id)albums;

@end

