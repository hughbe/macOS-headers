//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAlbumJournalEntryPayload.h>

@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload
{
}

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)payloadClassID;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
- (void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2;

@end

