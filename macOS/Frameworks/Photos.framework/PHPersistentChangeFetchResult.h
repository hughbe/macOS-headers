//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPersistentHistoryToken;

@interface PHPersistentChangeFetchResult : NSObject
{
    NSPersistentHistoryToken *_initialToken;
    NSArray *_transactions;
    NSManagedObjectContext *_context;
    unsigned long long _maximumChangeThreshold;
    unsigned long long _changeCount;
}

+ (id)fetchResultWithToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
- (void)enumerateChangesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithInitialToken:(id)arg1 transactions:(id)arg2 maximumChangeThreshold:(unsigned long long)arg3 managedObjectObjectContext:(id)arg4;

@end

