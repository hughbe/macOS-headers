//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>
#import <TextInput/TIUserDictionaryEntry-Protocol.h>

@class NSNumber, NSString;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry>
{
    NSString *_phrase;
    NSString *_shortcut;
    NSNumber *_timestamp;
}

+ (id)valueWithEntry:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
- (id)shortcutForSorting;
- (BOOL)matchesEntry:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

