//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardSerializationStorage-Protocol.h>

@class NSMutableString, NSString;

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage>
{
    NSMutableString *_string;
}

+ (id)storageWithString:(id)arg1;
- (void).cxx_destruct;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (unsigned long long)currentLength;
- (void)appendData:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

