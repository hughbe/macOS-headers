//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray;

@interface CNUICoreFamilyInfo : NSObject
{
    CNContact *_meContact;
    NSArray *_elements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
- (id)description;
- (id)initWithMeContact:(id)arg1 elements:(id)arg2;
- (id)init;

@end

