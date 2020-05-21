//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPImmutableObject-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class NSString, NSUUID;

@interface MSPCollectionItem : NSObject <MSPMutableObject, MSPImmutableObject>
{
    NSUUID *_storageIdentifier;
    NSString *_itemIdentifier;
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)storageIdentifier;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyIfValidWithError:(out id *)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

