//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, TIInputMode;

@protocol TIMultilingualPreferenceProviding <NSObject>
@property(readonly, nonatomic) NSArray *userPreferredLanguages;
@property(readonly, nonatomic) NSArray *userEnabledInputModes;
@property(readonly, nonatomic) TIInputMode *preferredSecondaryInputMode;
@end

