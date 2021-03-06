//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MPAction.h>

@class NSDictionary, NSMutableDictionary, NSObject, NSString;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction
{
    NSString *_transitionID;
    double _transitionDuration;
    NSMutableDictionary *_transitionAttributes;
    NSObject<MPActionableSupport> *_transitionDestination;
}

+ (id)transitionAction;
@property(retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination; // @synthesize transitionDestination=_transitionDestination;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(copy, nonatomic) NSString *transitionID; // @synthesize transitionID=_transitionID;
@property(copy, nonatomic) NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
- (void)configureTarget;
- (void)setAction:(id)arg1;
- (id)transitionAttributeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

