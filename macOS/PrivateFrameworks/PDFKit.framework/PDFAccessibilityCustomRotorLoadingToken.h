//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PDFAccessibilityCustomRotorLoadingToken : NSObject
{
    NSNumber *_hashIdentifier;
    NSNumber *_page;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *page; // @synthesize page=_page;
@property(retain, nonatomic) NSNumber *hashIdentifier; // @synthesize hashIdentifier=_hashIdentifier;
- (id)description;
- (id)initWithHashIdentifier:(id)arg1 page:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

