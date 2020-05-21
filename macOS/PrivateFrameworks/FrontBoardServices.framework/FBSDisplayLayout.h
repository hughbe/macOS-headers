//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class FBSDisplayConfiguration, NSArray, NSDate, NSMutableArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSMutableArray *_elements;
    FBSDisplayConfiguration *_displayConfiguration;
    long long _interfaceOrientation;
    long long _backlightLevel;
    NSDate *_timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(nonatomic) long long displayBacklightLevel; // @synthesize displayBacklightLevel=_backlightLevel;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
- (struct CGRect)referenceBounds;
- (id)display;
- (long long)displayType;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_sortElements;
- (void)finalizeLayout;
- (void)removeElement:(id)arg1;
- (id)addElement:(id)arg1;
@property(readonly, nonatomic) struct CGRect bounds; // @dynamic bounds;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)_initWithElements:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

