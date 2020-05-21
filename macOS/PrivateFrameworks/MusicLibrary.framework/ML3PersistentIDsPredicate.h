//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate
{
    NSArray *_persistentIDs;
    BOOL _shouldContain;
}

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2;
+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(BOOL)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldContain; // @synthesize shouldContain=_shouldContain;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2;

@end

