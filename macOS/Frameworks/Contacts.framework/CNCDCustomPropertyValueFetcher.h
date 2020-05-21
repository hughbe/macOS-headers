//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDPersistenceContext, NSString;

__attribute__((visibility("hidden")))
@interface CNCDCustomPropertyValueFetcher : NSObject
{
    NSString *_identifier;
    CNCDPersistenceContext *_persistenceContext;
}

+ (id)_remoteCustomPropertyValueForCustomPropertyValue:(id)arg1;
+ (id)_remoteCustomPropertyForCustomProperty:(id)arg1;
+ (id)_createRemoteObjectsFromCustomPropertyValues:(id)arg1;
+ (id)customPropertyValuesForRecordWithIdentifier:(id)arg1 persistenceStack:(id)arg2 error:(id *)arg3;
+ (id)customPropertyValuesForRecordWithIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)allCustomPropertiesWithPersistenceStack:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNCDPersistenceContext *persistenceContext; // @synthesize persistenceContext=_persistenceContext;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)fetchCustomPropertyValues:(id *)arg1;
- (id)initWithRecordIdentifier:(id)arg1 persistenceContext:(id)arg2;

@end

