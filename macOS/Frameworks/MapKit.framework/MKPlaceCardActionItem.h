//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSColor, NSString, _MKMapItemAttribution;

@interface MKPlaceCardActionItem : NSObject
{
    BOOL _enabled;
    BOOL _selected;
    NSString *_displayString;
    unsigned long long _type;
    NSArray *_urlStrings;
    _MKMapItemAttribution *_attribution;
    NSString *_glyph;
    NSColor *_glyphColor;
    MKPlaceCardActionItem *_selectedItem;
    id _value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) MKPlaceCardActionItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(copy, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(retain, nonatomic) _MKMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) NSArray *urlStrings; // @synthesize urlStrings=_urlStrings;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(BOOL)arg3 urlStrings:(id)arg4 attribution:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(BOOL)arg3;

@end

