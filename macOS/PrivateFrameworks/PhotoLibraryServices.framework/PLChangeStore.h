//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL, PLPhotoLibraryPathManager;
@protocol OS_dispatch_queue;

@interface PLChangeStore : NSObject
{
    NSObject<OS_dispatch_queue> *_eventsIsolation;
    NSMutableArray *_events;
    struct sqlite3 *_database;
    NSObject<OS_dispatch_queue> *_databaseIsolation;
    unsigned long long _firstOnDiskEventIndex;
    PLPhotoLibraryPathManager *_photoLibraryPathManager;
    NSURL *_databaseFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *databaseFileURL; // @synthesize databaseFileURL=_databaseFileURL;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *photoLibraryPathManager; // @synthesize photoLibraryPathManager=_photoLibraryPathManager;
- (void)_clearStore;
- (void)_backupStore;
- (void)bindUUID:(unsigned char [16])arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindString:(id)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindXPCData:(id)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindInt64:(long long)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)bindInt:(int)arg1 toStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)prepareAndEvaluateStatement:(const char *)arg1;
- (struct sqlite3_stmt *)prepareStatement:(const char *)arg1;
- (void)performBlockAsTransaction:(CDUnknownBlockType)arg1;
- (void)setupDatabase;
- (void)openDatabase;
- (void)enumeratePersistedDidSaveEventsInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getOnDiskEventsSinceIndex:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)newArrayWithEventsSince:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 lastEventIndex:(unsigned long long *)arg3;
- (BOOL)getInMemoryEventsSinceIndex:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long firstOnDiskEventIndex;
- (unsigned long long)lastIndex;
- (void)clearStore:(CDUnknownBlockType)arg1;
- (void)getEventsSinceIndex:(unsigned long long)arg1 filteredBy:(CDUnknownBlockType)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithPhotoLibraryPathManager:(id)arg1;

@end

