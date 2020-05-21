//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Suggestions/SGTSuggestion.h>

@class NSColor, NSImage, NSUUID;

@interface SGTFileLabelSuggestion : SGTSuggestion
{
    NSColor *labelColor;
    NSImage *swatchImage;
    long long label;
    BOOL isFinderLabel;
}

+ (id)_colorForLabel:(long long)arg1;
+ (id)labelsCategory;
- (void).cxx_destruct;
@property(readonly) NSColor *labelColor; // @synthesize labelColor;
- (id)_propertyListRepresentation;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)_identifier;
- (id)tokenTitle;
- (id)displayNameForScope:(long long)arg1;
- (long long)scope;
- (id)scopes;
- (id)tokenImage;
- (id)imageForMenu;
- (id)queryStringFragment;
@property(readonly) NSUUID *labelUUID;
@property(readonly) long long label;
- (id)initWithMDLabel:(struct __MDLabel *)arg1;
- (id)initWithLabelIdentifier:(id)arg1 displayName:(id)arg2 labelColorIndex:(long long)arg3 labelUUID:(id)arg4 isFinderLabel:(BOOL)arg5;

@end

