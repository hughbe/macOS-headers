//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKUserDefaultsObject.h>

@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject
{
    NSSet *_classes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *classes; // @synthesize classes=_classes;
- (void)registerDefaultValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (BOOL)setValue:(id)arg1 error:(id *)arg2;
- (id)valueWithError:(id *)arg1;
- (id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3;
- (id)initWithStore:(id)arg1 key:(id)arg2 classes:(id)arg3;
- (id)initWithKey:(id)arg1 classes:(id)arg2;

@end

