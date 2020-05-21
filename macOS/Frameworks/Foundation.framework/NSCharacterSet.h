//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)newlineCharacterSet;
+ (id)symbolCharacterSet;
+ (id)illegalCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)letterCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)controlCharacterSet;
+ (void)initialize;
+ (id)URLFragmentAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLUserAllowedCharacterSet;
- (id)_retainedBitmapRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSData *bitmapRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned int)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (void)makeImmutable;
- (BOOL)isMutable;
- (unsigned long long)count;
- (BOOL)isEmpty;
@property(readonly, copy) NSCharacterSet *invertedSet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (struct __CFCharacterSet *)_expandedCFCharacterSet;
- (unsigned long long)_cfTypeID;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

