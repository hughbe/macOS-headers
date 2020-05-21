//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_TPropertyDateTextFieldController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TPropertyColumnPreviewDateTextFieldController : FI_TPropertyDateTextFieldController
{
    struct TNSRef<NSString, void> _previewOptionKey;
    _Bool _userDisabled;
}

+ (id)keyPathsForValuesAffectingShouldBeVisible;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, getter=isUserDisabled) _Bool userDisabled; // @synthesize userDisabled=_userDisabled;
- (void)updateDisabledStateForKeys:(id)arg1;
- (_Bool)shouldBeVisible;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)shouldFetchWhenDisabled;
@property(readonly, retain, nonatomic) NSString *previewOptionKey; // @dynamic previewOptionKey;

@end

