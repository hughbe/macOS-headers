//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber;

@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject
{
    NSNumber *_updateSequenceNum;
    NSArray *_matchingShares;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *matchingShares; // @synthesize matchingShares=_matchingShares;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;

@end

