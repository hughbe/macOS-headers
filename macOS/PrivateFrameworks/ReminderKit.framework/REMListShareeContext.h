//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMList, REMSharee;

@interface REMListShareeContext : NSObject
{
    REMSharee *_sharedOwner;
    REMList *_list;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMList *list; // @synthesize list=_list;
@property(readonly, nonatomic) REMSharee *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
- (id)shareesExcludingOwner;
@property(readonly, nonatomic) NSArray *sharees;
- (id)initWithList:(id)arg1;

@end

