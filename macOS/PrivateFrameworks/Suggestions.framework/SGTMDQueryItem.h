//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Suggestions/SGTSearchQueryResultItem-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SGTMDQueryItem : NSObject <SGTSearchQueryResultItem>
{
    NSMutableDictionary *_attributesAndValues;
    NSArray *_matchingAttributes;
}

- (void).cxx_destruct;
- (id)valueForAttribute:(id)arg1;
@property(retain) NSArray *matchingAttributes; // @synthesize matchingAttributes=_matchingAttributes;
- (void)setValue:(id)arg1 forAttribute:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

