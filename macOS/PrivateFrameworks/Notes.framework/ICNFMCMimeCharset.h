//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICNFMCMimeCharset : NSObject
{
    BOOL _useBase64InHeaders;
    BOOL _canBeUsedForOutgoingMessages;
    unsigned long long _encoding;
    NSString *_charsetName;
}

+ (id)encodingVariantsForRecipients:(id)arg1;
+ (unsigned long long)encodingVariantForEncoding:(unsigned long long)arg1 address:(id)arg2;
+ (id)preferredMimeCharset;
+ (id)charsetForEncoding:(unsigned long long)arg1;
+ (id)allMimeCharsets;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL canBeUsedForOutgoingMessages; // @synthesize canBeUsedForOutgoingMessages=_canBeUsedForOutgoingMessages;
@property(readonly, nonatomic) BOOL useBase64InHeaders; // @synthesize useBase64InHeaders=_useBase64InHeaders;
@property(readonly, copy, nonatomic) NSString *charsetName; // @synthesize charsetName=_charsetName;
@property(readonly) unsigned long long encoding; // @synthesize encoding=_encoding;
- (id)description;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)init;
- (id)initWithCFEncoding:(unsigned int)arg1;

@end

