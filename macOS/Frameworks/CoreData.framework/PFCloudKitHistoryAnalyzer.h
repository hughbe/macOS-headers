//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/PFHistoryAnalyzer.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer
{
    NSManagedObjectContext *_managedObjectContext;
}

+ (BOOL)isPrivateContextName:(id)arg1;
+ (BOOL)isPrivateTransactionAuthor:(id)arg1;
+ (BOOL)isPrivateTransaction:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)instantiateNewAnalyzerContext;
- (id)cloudKitAnalyzerOptions;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;

@end

