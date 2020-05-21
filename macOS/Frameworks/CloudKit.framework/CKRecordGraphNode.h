//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKRecordGraphNode : NSObject
{
    NSMutableSet *_edges;
    NSMutableSet *_indegrees;
    CKRecord *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) NSMutableSet *indegrees; // @synthesize indegrees=_indegrees;
@property(retain, nonatomic) NSMutableSet *edges; // @synthesize edges=_edges;
- (id)description;
- (id)CKPropertiesDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long indegree;
- (id)init;

@end

