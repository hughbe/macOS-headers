//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMapCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFLatLng, SFMapRegion, SFUserReportRequest;

@interface SFMapCardSection : SFCardSection <SFMapCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int interactive:1;
        unsigned int sizeFormat:1;
        unsigned int pinBehavior:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _interactive;
    int _separatorStyle;
    int _sizeFormat;
    int _pinBehavior;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFLatLng *_location;
    SFColor *_pinColor;
    NSString *_footnoteLabel;
    NSString *_footnote;
    SFMapRegion *_boundingMapRegion;
    NSArray *_pins;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *pins; // @synthesize pins=_pins;
@property(nonatomic) int pinBehavior; // @synthesize pinBehavior=_pinBehavior;
@property(retain, nonatomic) SFMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(nonatomic) int sizeFormat; // @synthesize sizeFormat=_sizeFormat;
@property(nonatomic) BOOL interactive; // @synthesize interactive=_interactive;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) SFColor *pinColor; // @synthesize pinColor=_pinColor;
@property(retain, nonatomic) SFLatLng *location; // @synthesize location=_location;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasPinBehavior;
- (BOOL)hasSizeFormat;
- (BOOL)hasInteractive;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;

@end

