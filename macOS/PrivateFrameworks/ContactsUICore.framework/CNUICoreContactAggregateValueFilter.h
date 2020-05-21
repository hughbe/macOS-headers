//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreContactPropertyValueFilter-Protocol.h>

@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter>
{
    NSArray *_valueFilters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *valueFilters; // @synthesize valueFilters=_valueFilters;
@property(readonly, copy) NSString *description;
- (void)filterPropertyValuesFromContact:(id)arg1;
- (id)contactByFilteringOutPropertyValueOfContact:(id)arg1;
- (id)initWithValueFilters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

