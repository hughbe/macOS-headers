//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FileWrapper : NSFileWrapper
{
    NSURL *_originatingURL;
    NSString *_contentMIMEType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contentMIMEType; // @synthesize contentMIMEType=_contentMIMEType;
@property(retain, nonatomic) NSURL *originatingURL; // @synthesize originatingURL=_originatingURL;
- (BOOL)writeToUniqueFileInDirectory:(id)arg1 attemptedURL:(id *)arg2 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)arg3;

@end

