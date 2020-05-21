//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMObject-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class EMObjectID, NSString;

@interface EMObject : NSObject <EMObject, NSSecureCoding, EFPubliclyDescribable>
{
    EMObjectID *_objectID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) EMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitWithObjectID:(id)arg1;
- (id)initWithObjectID:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

