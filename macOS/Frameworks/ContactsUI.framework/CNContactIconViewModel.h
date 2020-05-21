//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSCopying-Protocol.h>

@class CNContact, CNContactIconAppearance, PRLikeness;

@interface CNContactIconViewModel : NSObject <NSCopying>
{
    BOOL _selected;
    BOOL _monogramOnly;
    CNContact *_contact;
    PRLikeness *_likeness;
    unsigned long long _style;
    double _diameter;
    long long _type;
    CNContactIconAppearance *_appearance;
    CNContactIconAppearance *_selectedAppearance;
}

+ (BOOL)contactShowsAsCompany:(id)arg1;
+ (id)initialsForContact:(id)arg1;
+ (BOOL)contactHasMonogram:(id)arg1;
+ (BOOL)contactHasPhoto:(id)arg1;
+ (BOOL)contactHasDerivedLikeness:(id)arg1;
- (void).cxx_destruct;
@property(retain) CNContactIconAppearance *selectedAppearance; // @synthesize selectedAppearance=_selectedAppearance;
@property(retain) CNContactIconAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) BOOL monogramOnly; // @synthesize monogramOnly=_monogramOnly;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) PRLikeness *likeness; // @synthesize likeness=_likeness;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)silhouetteImage;
- (id)image;
- (double)fontWeightForDiameter:(double)arg1;
- (double)fontSizeForDiameter:(double)arg1;
- (id)monogramFontForDiameter:(double)arg1;
- (id)monogramString;
- (id)effectiveAppearance;
- (id)borderColor;
- (id)backgroundColor;
- (id)foregroundColor;
- (BOOL)shouldDrawBorder;
- (double)borderWidth;
- (void)setBackgroundStyle:(long long)arg1;
- (id)monogramImage;
- (id)photoImage;
- (long long)typeForImageLoading;
- (id)likenessImageMaskedByCircle:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contactDerivedLikeness;
- (long long)effectivePersonIconType;
- (long long)effectiveOrganizationIconType;
- (id)init;

@end

