//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMKeyValueCollectionStorage-Protocol.h>

@class NSString;

@interface IMKeyValueCollectionUserDefaultsStorage : NSObject <IMKeyValueCollectionStorage>
{
    NSString *_domain;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)setWithMutableClassIfApplicableFor:(Class)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)_actuallyWriteObject:(id)arg1 forKey:(id)arg2;
- (id)_actuallyReadObjectForKey:(id)arg1;
- (id)_decodeData:(id)arg1 forKey:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

