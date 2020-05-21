//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGHeaderCollection-Protocol.h>

@class NSArray, NSString;

@interface SGMCMessageHeaders : NSObject <SGHeaderCollection>
{
    id _mcHeaders;
    NSArray *_allHeaderKeys;
}

- (void).cxx_destruct;
@property(readonly) NSArray *allHeaderKeys; // @synthesize allHeaderKeys=_allHeaderKeys;
- (id)headersForKey:(id)arg1;
- (id)_headersForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)addressListForKey:(id)arg1;
- (id)firstMessageIDForKey:(id)arg1;
- (id)initWithMcHeaders:(id)arg1;
- (id)sg_firstHeaderForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

