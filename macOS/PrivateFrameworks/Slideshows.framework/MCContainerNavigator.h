//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MCContainer.h>

@class MCPlugHaven, NSMutableDictionary, NSSet, NSString;

@interface MCContainerNavigator : MCContainer
{
    NSMutableDictionary *mPlugs;
    NSString *mStartPlugID;
    MCPlugHaven *mStartPlug;
}

@property(readonly) MCPlugHaven *startPlug; // @synthesize startPlug=mStartPlug;
@property(copy, nonatomic) NSString *startPlugID; // @synthesize startPlugID=mStartPlugID;
- (void)removeAllPlugs;
- (void)removePlugForID:(id)arg1;
- (void)removePlug:(id)arg1;
- (void)changeIDOfPlug:(id)arg1 toID:(id)arg2;
- (id)setPlugForContainer:(id)arg1 forID:(id)arg2;
- (id)plugForID:(id)arg1;
@property(readonly) unsigned long long countOfPlugs;
@property(readonly) NSSet *plugs;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;

@end

