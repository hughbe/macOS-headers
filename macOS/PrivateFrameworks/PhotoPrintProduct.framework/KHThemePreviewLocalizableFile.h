//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface KHThemePreviewLocalizableFile : NSObject
{
    NSBundle *_bundle;
    NSString *_identifier;
    NSMutableDictionary *_localizableDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *localizableDictionary; // @synthesize localizableDictionary=_localizableDictionary;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)getLocalizedKey:(id)arg1;
- (id)kh_localizedStringForKey:(id)arg1 countryCode:(id)arg2;
- (id)kh_localizedStringForKey:(id)arg1;
@property(readonly, nonatomic) NSString *title;
- (id)initWithBundle:(id)arg1 andIdentifier:(id)arg2;

@end

