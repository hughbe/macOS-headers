//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

@class NSDictionary;

@interface SAMorphunDataState : SAAceClientState
{
}

+ (id)morphunDataStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)morphunDataState;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSDictionary *assetVersionPerLocale;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

