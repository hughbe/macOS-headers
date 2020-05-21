//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>
#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSSecureCoding>
{
    int _direction;
    NSString *_property;
    NSString *_collation;
}

+ (BOOL)supportsSecureCoding;
+ (id)orderingTermWithProperty:(id)arg1 direction:(int)arg2;
+ (id)orderingTermWithProperty:(id)arg1;
+ (id)reversedTerms:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *collation; // @synthesize collation=_collation;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3;
- (id)initWithProperty:(id)arg1 direction:(int)arg2;
- (id)initWithProperty:(id)arg1;

@end

