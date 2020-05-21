//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface BSSqliteResultRow : NSObject <BSInvalidatable, NSCopying>
{
    struct sqlite3_stmt *_statement;
    NSArray *_columnNames;
}

+ (id)resultRowWithStatement:(struct sqlite3_stmt *)arg1;
- (void).cxx_destruct;
- (unsigned long long)_indexForKey:(id)arg1;
- (id)_columnNames;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)dataForKey:(id)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (id)stringForKey:(id)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (double)doubleForKey:(id)arg1;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (long long)integerForKey:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (id)_initWithStatement:(struct sqlite3_stmt *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

