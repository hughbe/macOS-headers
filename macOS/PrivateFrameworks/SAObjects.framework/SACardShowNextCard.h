//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SACardSnippet;

@interface SACardShowNextCard : SABaseClientBoundCommand
{
}

+ (id)showNextCardWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showNextCard;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SACardSnippet *cardSnippet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

