//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSSecureCoding-Protocol.h>

@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding>
{
    NSPersistentHistoryToken *_persistentHistoryToken;
    int _version;
}

+ (BOOL)supportsSecureCoding;
+ (id)tokenWithPersistentHistoryToken:(id)arg1;
+ (id)currentTokenForContext:(id)arg1;
+ (int)currentVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSPersistentHistoryToken *persistentHistoryToken; // @synthesize persistentHistoryToken=_persistentHistoryToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPersistentChangeToken:(id)arg1;
- (id)description;
- (id)initWithPersistentHistoryToken:(id)arg1;
- (id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2;

@end

