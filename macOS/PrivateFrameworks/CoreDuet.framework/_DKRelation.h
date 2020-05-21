//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

@class NSString;

@interface _DKRelation : _DKObject
{
    NSString *_verbPhrase;
    _DKObject *_subject;
    _DKObject *_object;
}

+ (BOOL)supportsSecureCoding;
+ (id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;
+ (id)entityName;
- (void).cxx_destruct;
@property(readonly) _DKObject *object; // @synthesize object=_object;
@property(readonly) _DKObject *subject; // @synthesize subject=_subject;
@property(readonly) NSString *verbPhrase; // @synthesize verbPhrase=_verbPhrase;
- (id)stringValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;
- (BOOL)copyToManagedObject:(id)arg1;

@end

