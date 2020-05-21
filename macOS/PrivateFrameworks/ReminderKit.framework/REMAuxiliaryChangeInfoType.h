//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMAuxiliaryChangeInfoObject-Protocol.h>

@class NSDictionary, NSString, REMObjectID;

@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject>
{
    REMObjectID *remObjectID;
    NSDictionary *_storage;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (id)cdEntityName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) REMObjectID *remObjectID; // @synthesize remObjectID;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithREMObjectID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

