//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactRelationsDescriptionLabels : NSObject
{
    NSArray *_preferredLanguages;
    NSArray *_standardLabels;
    NSArray *_standardLocaleSpecificLabels;
    NSArray *_extendedLabels;
    NSArray *_extendedLocaleSpecificLabels;
    NSDictionary *_localizedStringsByLabelKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *localizedStringsByLabelKey; // @synthesize localizedStringsByLabelKey=_localizedStringsByLabelKey;
@property(readonly, nonatomic) NSArray *extendedLocaleSpecificLabels; // @synthesize extendedLocaleSpecificLabels=_extendedLocaleSpecificLabels;
@property(readonly, nonatomic) NSArray *extendedLabels; // @synthesize extendedLabels=_extendedLabels;
@property(readonly, nonatomic) NSArray *standardLocaleSpecificLabels; // @synthesize standardLocaleSpecificLabels=_standardLocaleSpecificLabels;
@property(readonly, nonatomic) NSArray *standardLabels; // @synthesize standardLabels=_standardLabels;
@property(readonly, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
- (id)initWithPreferredLanguages:(id)arg1 standardLabels:(id)arg2 standardLocaleSpecificLabels:(id)arg3 extendedLabels:(id)arg4 extendedLocaleSpecificLabels:(id)arg5 localizedStringsByLabelKey:(id)arg6;

@end

