//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding>
{
    NSString *_string;
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_string;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

@end

